// Nekki.Utils.RaidBetaLogger$$NLPNEKLKDAH @ RVA 0x359F3AC

void Nekki_Utils_RaidBetaLogger__NLPNEKLKDAH
               (Nekki_Utils_RaidBetaLogger_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
  pUVar1 = (__this->fields)._mover;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMax
              (pUVar1,(UnityEngine_Vector2_o)0x3edc28f6,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._mover;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 0369f3ec to 0379f3f3 has its CatchHandler @ 0369f480 */
      UnityEngine_RectTransform__set_anchorMin
                (pUVar1,(UnityEngine_Vector2_o)0x3edc28f6,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._mover;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 0369f404 to 0379f423 has its CatchHandler @ 0369f484 */
        UnityEngine_RectTransform__set_pivot
                  (pUVar1,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._mover;
        if (DAT_0455fa77 == '\0') {
                    /* try { // try from 0369f424 to 0379f42f has its CatchHandler @ 0369f478 */
          FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
          DAT_0455fa77 = '\x01';
        }
                    /* try { // try from 0369f430 to 0379f46f has its CatchHandler @ 0369f33c */
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
  FUN_01bab8c8();
}

