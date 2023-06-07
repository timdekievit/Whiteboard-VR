using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KeyboardScript : MonoBehaviour
{


    public TouchScreenKeyboard keyboard;

    private string keyboardText;


    // Start is called before the first frame update
    void Start()
    {
        OpenSystemKeyboard();
    }

    // Update is called once per frame
    void Update()
    {
         if (keyboard != null)
        {
            keyboardText = keyboard.text;
            Debug.Log(keyboardText);
        }
    }

    public void OpenSystemKeyboard()
    {
        keyboard = TouchScreenKeyboard.Open("", TouchScreenKeyboardType.Default, false, false, false, false);
    }
}
