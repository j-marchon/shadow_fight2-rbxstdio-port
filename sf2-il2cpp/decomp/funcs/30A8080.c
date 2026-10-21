// Nekki.SF2.GUI.Fight.ScreenFight$$CreateRound @ RVA 0x30A8080

void Nekki_SF2_GUI_Fight_ScreenFight__CreateRound
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,int32_t CJNHFNHJHPE,bool HOOGEGENGCG,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_String_o *pSVar3;
  MethodInfo *pMVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  int32_t local_34;
  
  pMVar4 = (MethodInfo *)(ulong)(uint)CJNHFNHJHPE;
  if ((DAT_04566187 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_6374);
                    /* try { // try from 031a80c8 to 032a80d3 has its CatchHandler @ 031a81cc */
    DAT_04566187 = 1;
    pMVar4 = extraout_x1;
  }
  local_34 = 0;
  Nekki_SF2_GUI_Fight_ScreenFight__ClearPictures(__this,pMVar4);
                    /* try { // try from 031a80e0 to 032a80e7 has its CatchHandler @ 031a81c8 */
  (__this->fields).Type = 2;
  pNVar5 = (__this->fields).image;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 031a8104 to 032a810b has its CatchHandler @ 031a81bc */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields).image;
    if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031a8204;
                    /* try { // try from 031a8114 to 032a8127 has its CatchHandler @ 031a81b8 */
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar5,StringLiteral_6374,(MethodInfo *)0x0);
    pNVar5 = (__this->fields).image;
    if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031a8204;
                    /* try { // try from 031a8134 to 032a814f has its CatchHandler @ 031a81c0 */
    (*(pNVar5->klass->vtable)._45_SetNativeSize.methodPtr)
              (pNVar5,(pNVar5->klass->vtable)._45_SetNativeSize.method);
    pNVar5 = (__this->fields).image;
    if ((pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031a8204;
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
  }
  pNVar6 = (__this->fields).round;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar4 = extraout_x1_00;
                    /* try { // try from 031a8184 to 032a81b3 has its CatchHandler @ 031a81c4 */
  if (bVar1) {
    if (HOOGEGENGCG) {
      CJNHFNHJHPE = (__this->fields).KKCHDELEFJF;
    }
    pNVar6 = (__this->fields).round;
    local_34 = CJNHFNHJHPE;
    if ((pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
                    /* try { // try from 031a81b4 to 032a81e3 has its CatchHandler @ 031a7ec4 */
      pNVar6 = (__this->fields).round;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a8114 with catch @ 031a81b8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a8104 with catch @ 031a81bc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a8134 with catch @ 031a81c0
                        */
      pSVar3 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a8184 with catch @ 031a81c4
                        */
      if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a80e0 with catch @ 031a81c8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a80c8 with catch @ 031a81cc
                        */
        (*(pNVar6->klass->vtable)._75_set_text.methodPtr)
                  (pNVar6,pSVar3,(pNVar6->klass->vtable)._75_set_text.method);
        pMVar4 = extraout_x1_01;
        goto LAB_031a81e0;
      }
    }
LAB_031a8204:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_031a81e0:
                    /* try { // try from 031a81e4 to 032a81fb has its CatchHandler @ 031a83d8 */
  Nekki_SF2_GUI_Fight_ScreenFight__BMMLKHIHOEE(__this,1.666,pMVar4);
                    /* try { // try from 031a81fc to 032a837f has its CatchHandler @ 031a7ec4 */
  return;
}

