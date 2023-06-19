using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine;
using TMPro;

public class SearchText : MonoBehaviour
{
    public TextMeshPro SearchTextInput;
    public void A()
    {
        SearchTextInput.text = SearchTextInput.text + "a";
    }

    public void S()
    {
        SearchTextInput.text = SearchTextInput.text + "s";
    }
}
