// Nekki.Utils.RaidBetaLogger$$KHHBJNCINLC @ RVA 0x359C9A4

void Nekki_Utils_RaidBetaLogger__KHHBJNCINLC
               (Nekki_Utils_RaidBetaLogger_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
                    /* try { // try from 0369c9ac to 0379c9b7 has its CatchHandler @ 0369c9fc */
  pUVar1 = (__this->fields)._mover;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 0369c9b8 to 0379ca17 has its CatchHandler @ 0369c89c */
    UnityEngine_RectTransform__set_anchorMax
              (pUVar1,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._mover;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchorMin
                (pUVar1,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._mover;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_pivot
                  (pUVar1,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369c9ac with catch @ 0369c9fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369c998 with catch @ 0369ca00
                        */
        pUVar1 = (__this->fields)._mover;
        if (DAT_0455fa77 == '\0') {
          FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
                    /* try { // try from 0369ca18 to 0379ca1b has its CatchHandler @ 0369ca4c */
          DAT_0455fa77 = '\x01';
        }
                    /* try { // try from 0369ca1c to 0379ca5b has its CatchHandler @ 0369c89c */
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchoredPosition3D
                    (pUVar1,(UnityEngine_Vector3_o)
                            (UnityEngine_Vector3_TypeInfo->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0369ca18 with catch @ 0369ca4c */
  FUN_01bab8c8();
}

