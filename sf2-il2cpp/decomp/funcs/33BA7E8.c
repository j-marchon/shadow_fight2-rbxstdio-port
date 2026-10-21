// Nekki.SF2.GUI.Profile.PerkSubItem$$UpdateState @ RVA 0x33BA7E8

void Nekki_SF2_GUI_Profile_PerkSubItem__UpdateState
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  undefined8 uVar2;
  MethodInfo *pMVar3;
  JLGNBOILFLN_o *pJVar4;
  Nekki_SF2_GUI_Profile_PerkSubItem_c *pNVar5;
  Il2CppMethodPointer pIVar6;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar7;
  
                    /* try { // try from 034ba7fc to 035ba7ff has its CatchHandler @ 034ba828 */
  if ((DAT_04567d9e & 1) == 0) {
                    /* try { // try from 034ba800 to 035ba837 has its CatchHandler @ 034ba700 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567d9e = 1;
    method = extraout_x1;
  }
  pJVar4 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
  if (pJVar4 == (JLGNBOILFLN_o *)0x0) {
                    /* try { // try from 034ba84c to 035ba853 has its CatchHandler @ 034ba854 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034ba838 with catch @ 034ba854
                       catch(type#2 @ 00000000) { ... } // from try @ 034ba84c with catch @ 034ba854
                        */
    return;
  }
                    /* catch() { ... } // from try @ 034ba7fc with catch @ 034ba828 */
                    /* try { // try from 034ba838 to 035ba83f has its CatchHandler @ 034ba854 */
  switch((pJVar4->fields).OIKLOAGFFGO) {
  case 0:
                    /* try { // try from 034ba840 to 035ba84b has its CatchHandler @ 034ba700 */
    pNVar5 = __this->klass;
    (__this->fields).BHABAMGDPJP = false;
    break;
  case 1:
    (__this->fields).BHABAMGDPJP = false;
    pNVar7 = (__this->fields).super._icon;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      LJLLAKHOFFF__IFBBIDIEBEL
                ((UnityEngine_UI_Graphic_o *)(__this->fields).super._icon,
                 (__this->fields).super.GJFHNJFGBKE,(MethodInfo *)0x0);
    }
    pIVar6 = (__this->klass->vtable)._51_SetActive.methodPtr;
    pMVar3 = (__this->klass->vtable)._51_SetActive.method;
    goto LAB_034ba930;
  case 2:
    (__this->fields).BHABAMGDPJP = true;
    pNVar7 = (__this->fields).super._icon;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      LJLLAKHOFFF__IFBBIDIEBEL
                ((UnityEngine_UI_Graphic_o *)(__this->fields).super._icon,
                 (__this->fields).super.GJFHNJFGBKE,(MethodInfo *)0x0);
    }
    pNVar5 = __this->klass;
    break;
  case 3:
    (*(__this->klass->vtable)._51_SetActive.methodPtr)
              (__this,1,(__this->klass->vtable)._51_SetActive.method);
    pIVar6 = (__this->klass->vtable)._55_SetSelected.methodPtr;
    pMVar3 = (__this->klass->vtable)._55_SetSelected.method;
LAB_034ba930:
    uVar2 = 0;
    goto LAB_034ba938;
  default:
    goto switchD_034ba83c_default;
  }
  pIVar6 = (pNVar5->vtable)._51_SetActive.methodPtr;
  pMVar3 = (pNVar5->vtable)._51_SetActive.method;
  uVar2 = 1;
LAB_034ba938:
  (*pIVar6)(__this,uVar2,pMVar3);
switchD_034ba83c_default:
                    /* WARNING: Could not recover jumptable at 0x034ba958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._62_SetLock.methodPtr)
            (__this,(ulong)(__this->fields).MBIMMBFKMJJ,(__this->klass->vtable)._62_SetLock.method);
  return;
}

