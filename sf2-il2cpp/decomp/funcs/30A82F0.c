// Nekki.SF2.GUI.Fight.ScreenFight$$CreateFight @ RVA 0x30A82F0

void Nekki_SF2_GUI_Fight_ScreenFight__CreateFight
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
  if ((DAT_04566189 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_6369);
    DAT_04566189 = 1;
  }
  pUVar2 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if ((bVar1) && ((__this->fields).Type == 5)) {
      return;
    }
    Nekki_SF2_GUI_Fight_ScreenFight__ClearPictures(__this,method_00);
    (__this->fields).Type = 5;
    pNVar3 = (__this->fields).image;
                    /* try { // try from 031a8380 to 032a838f has its CatchHandler @ 031a83d4 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 031a8390 to 032a83db has its CatchHandler @ 031a7ec4 */
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_01 = extraout_x1;
    if (!bVar1) {
LAB_031a83f0:
      Nekki_SF2_GUI_Fight_ScreenFight__BMMLKHIHOEE(__this,1.166,method_01);
      return;
    }
    pNVar3 = (__this->fields).image;
    if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar3,StringLiteral_6369,(MethodInfo *)0x0);
      pNVar3 = (__this->fields).image;
      if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        (*(pNVar3->klass->vtable)._45_SetNativeSize.methodPtr)
                  (pNVar3,(pNVar3->klass->vtable)._45_SetNativeSize.method);
        pNVar3 = (__this->fields).image;
                    /* catch() { ... } // from try @ 031a8380 with catch @ 031a83d4 */
                    /* catch() { ... } // from try @ 031a81e4 with catch @ 031a83d8 */
                    /* try { // try from 031a83dc to 032a83df has its CatchHandler @ 031a83e8 */
                    /* try { // try from 031a83e0 to 032a83eb has its CatchHandler @ 031a7ec4 */
        if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031a83dc with catch @ 031a83e8
                        */
                    /* try { // try from 031a83ec to 032a86a3 has its CatchHandler @ 031a83ec
                       catch() { ... } // from try @ 031a83ec with catch @ 031a83ec
                       catch() { ... } // from try @ 031a89e0 with catch @ 031a83ec
                       catch() { ... } // from try @ 031a8a48 with catch @ 031a83ec
                       catch() { ... } // from try @ 031a8b68 with catch @ 031a83ec
                       catch() { ... } // from try @ 031a8bb4 with catch @ 031a83ec
                       catch() { ... } // from try @ 031a8bfc with catch @ 031a83ec
                       catch() { ... } // from try @ 031a8d94 with catch @ 031a83ec
                       catch() { ... } // from try @ 031a8da8 with catch @ 031a83ec */
          UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
          method_01 = extraout_x1_00;
          goto LAB_031a83f0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

