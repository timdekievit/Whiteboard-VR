using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PinYoutube : MonoBehaviour
{
    public string streamURL;
    public VLCYouTubePlayback ActiveStream;

    public void ChangeStreamUrl()
    {
        ActiveStream = FindObjectOfType<VLCYouTubePlayback>();
        ActiveStream.ChangeStreamUrl(streamURL);
    }
}
