package com.stericsson.sdk.signing.u5500;

import java.util.Arrays;

import junit.framework.TestCase;

import org.junit.Test;

import com.stericsson.sdk.signing.ISignerSettings;
import com.stericsson.sdk.signing.SignerException;
import com.stericsson.sdk.signing.generic.GenericSignedAuthenticationCertificate;
import com.stericsson.sdk.signing.generic.cert.GenericAuthenticationCertificate;
import com.stericsson.sdk.signing.generic.cert.GenericCertificate;
import com.stericsson.sdk.signing.test.Activator;

/**
 * 
 * @author xolabju
 * 
 */
public class U5500SignedAuthenticationCertificateTest extends TestCase {

    private static final String NON_EXISITNG_FILE_FILENAME = "fakefile.fake";

    private static final String DIRECTORY_FILE_FILENAME = "/";

    private static final String UNSIGNED_PAYLOAD_FILENAME = "/u5500/unsigned_authcert.bin";

    private static final String SIGNED_PAYLOAD_FILENAME = "signed_authcert.bin";

    private U5500SignerSettings settings;

    /**
     * @throws Exception
     *             TBD
     */
    public void setUp() throws Exception {
        settings =
            new U5500SignerSettings(Activator.getResourcesPath() + UNSIGNED_PAYLOAD_FILENAME, SIGNED_PAYLOAD_FILENAME);
    }

    /**
     * 
     */
    @Test
    public void testNonExistingFile() {
        try {
            setUp();
        } catch (Exception e) {
            fail(e.getMessage());
        }
        try {
            settings.setSignerSetting(ISignerSettings.KEY_INPUT_FILE, NON_EXISITNG_FILE_FILENAME);
            GenericSignedAuthenticationCertificate payload = new GenericSignedAuthenticationCertificate(settings);
            payload.getClass();
            fail("should not get here");
        } catch (SignerException e) {
            e.getMessage();
        }
    }

    /**
     * 
     */
    @Test
    public void testDirAsInputFile() {
        try {
            setUp();
        } catch (Exception e) {
            fail(e.getMessage());
        }
        try {
            settings.setSignerSetting(ISignerSettings.KEY_INPUT_FILE, Activator.getResourcesPath()
                + DIRECTORY_FILE_FILENAME);
            GenericSignedAuthenticationCertificate payload = new GenericSignedAuthenticationCertificate(settings);
            payload.getClass();
            fail("should not get here");
        } catch (SignerException e) {
            e.getMessage();
        }
    }

    /**
     * 
     */
    @Test
    public void testCreatePayload() {
        try {
            setUp();
        } catch (Exception e) {
            fail(e.getMessage());
        }
        try {
            GenericSignedAuthenticationCertificate payload = new GenericSignedAuthenticationCertificate(settings);
            assertEquals(0, payload.getDestinationAddress());
            GenericCertificate cert = new GenericAuthenticationCertificate();
            payload.setCertificate(cert);
            assertEquals(cert, payload.getCertificate());
            byte[] b = new byte[] {
                0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
            payload.setSignature(b);
            assertTrue(Arrays.equals(b, payload.getSignature()));

        } catch (SignerException e) {
            fail(e.getMessage());
        }
    }

}
