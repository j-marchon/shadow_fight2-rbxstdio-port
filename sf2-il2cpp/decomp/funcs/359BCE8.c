// Nekki.SF2.GUI.Profile.SubItem$$SetSelected @ RVA 0x359BCE8

void Nekki_SF2_GUI_Profile_SubItem__SetSelected
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,bool OOOCEFEJKCI,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Il2CppObject *pIVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  
  if ((DAT_04568dcd & 1) == 0) {
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568dcd = 1;
  }
  (__this->fields).CGLFEDLBCCP = OOOCEFEJKCI;
  pNVar4 = (__this->fields)._selectedPicture;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields)._selectedPicture;
    if ((pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0369be20;
    UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).CGLFEDLBCCP,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields)._selectWhiteSquare;
                    /* try { // try from 0369bd90 to 0379bd97 has its CatchHandler @ 0369c37c */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0369bdac to 0379bdb3 has its CatchHandler @ 0369c378 */
  if (!bVar1) {
    return;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar3 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (pIVar3 != (Il2CppObject *)0x0) {
    if (*(char *)((long)&pIVar3[3].monitor + 3) == '\0') {
      return;
    }
    pNVar4 = (__this->fields)._selectWhiteSquare;
                    /* try { // try from 0369bdec to 0379bdf3 has its CatchHandler @ 0369c368 */
                    /* try { // try from 0369bdf4 to 0379bf2f has its CatchHandler @ 0369bbe4 */
    if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).CGLFEDLBCCP,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0369be20:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

