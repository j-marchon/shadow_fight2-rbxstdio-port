// WideScreenController$$AHLNBPFCAJC @ RVA 0x31EA168

void WideScreenController__AHLNBPFCAJC(WideScreenController_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  MethodInfo *method_00;
  float fVar4;
  UnityEngine_Vector2_o UVar5;
  
  if ((DAT_04566d89 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
                    /* try { // try from 032ea194 to 033ea19b has its CatchHandler @ 032ea1dc */
    DAT_04566d89 = 1;
  }
  pUVar1 = (__this->fields)._LeftBorder;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 032ea1a4 to 033ea1af has its CatchHandler @ 032ea1d8 */
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
                    /* try { // try from 032ea1b0 to 033ea1f3 has its CatchHandler @ 032ea0e0 */
    UnityEngine_TransformExtensions__SetLocalPositionX(pUVar2,-1364.0,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._RightBorder;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionX(pUVar2,1364.0,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ea1a4 with catch @ 032ea1d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ea194 with catch @ 032ea1dc
                        */
      pUVar3 = WideScreenController__MBEOLOBEACM(__this,method_00);
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        UVar5 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
                    /* try { // try from 032ea1f4 to 033ea1f7 has its CatchHandler @ 032ea218 */
                    /* try { // try from 032ea1f8 to 033ea21f has its CatchHandler @ 032ea0e0 */
        fVar4 = (UVar5.fields.x + -2730.6667) * 0.5;
        if (fVar4 <= 0.0) {
          return;
        }
        pUVar1 = (__this->fields)._LeftBorder;
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                    /* catch() { ... } // from try @ 032ea1f4 with catch @ 032ea218 */
          fVar4 = fVar4 + 100.0;
                    /* try { // try from 032ea220 to 033ea227 has its CatchHandler @ 032ea23c */
          pUVar3 = (UnityEngine_RectTransform_o *)
                   UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
                    /* try { // try from 032ea228 to 033ea233 has its CatchHandler @ 032ea0e0 */
                    /* try { // try from 032ea234 to 033ea23b has its CatchHandler @ 032ea23c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032ea220 with catch @ 032ea23c
                       catch(type#2 @ 00000000) { ... } // from try @ 032ea234 with catch @ 032ea23c
                        */
          if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar3->klass != UnityEngine_RectTransform_TypeInfo)) {
            pUVar3 = (UnityEngine_RectTransform_o *)0x0;
          }
          UnityEngine_TransformExtensions__SetSizeDeltaX(pUVar3,fVar4,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._RightBorder;
          if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
            pUVar3 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
                    /* try { // try from 032ea260 to 033ea367 has its CatchHandler @ 032ea260
                       catch() { ... } // from try @ 032ea260 with catch @ 032ea260
                       catch() { ... } // from try @ 032ea418 with catch @ 032ea260
                       catch() { ... } // from try @ 032ea610 with catch @ 032ea260
                       catch() { ... } // from try @ 032ea620 with catch @ 032ea260
                       catch() { ... } // from try @ 032ea664 with catch @ 032ea260
                       catch() { ... } // from try @ 032ea698 with catch @ 032ea260 */
            if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
               (pUVar3->klass != UnityEngine_RectTransform_TypeInfo)) {
              pUVar3 = (UnityEngine_RectTransform_o *)0x0;
            }
            UnityEngine_TransformExtensions__SetSizeDeltaX(pUVar3,fVar4,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

