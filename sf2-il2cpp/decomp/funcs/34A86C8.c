// Nekki.SF2.GUI.Profile.UserPerksPanel$$get_CurrentSubItem @ RVA 0x34A86C8

Nekki_SF2_GUI_Profile_SubItem_o *
Nekki_SF2_GUI_Profile_UserPerksPanel__get_CurrentSubItem
          (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableView_o *pNVar3;
  Nekki_SF2_GUI_TableViewCell_c *pNVar4;
  Nekki_SF2_GUI_Profile_SubItem_o **ppNVar5;
  Nekki_SF2_GUI_Profile_SubItem_o *pNVar6;
  Nekki_SF2_GUI_TableViewCell_o *pNVar7;
  
  if ((DAT_04568509 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo);
    DAT_04568509 = 1;
    method = extraout_x1;
  }
  ppNVar5 = &(__this->fields).PFKHDCBBDOG;
  pNVar6 = *ppNVar5;
                    /* try { // try from 035a8718 to 036a873f has its CatchHandler @ 035a8ce0 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar3 = (__this->fields)._TableView;
    if (pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) {
LAB_035a87dc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pNVar7 = (pNVar3->fields)._LDAHBFIIBJJ_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar2) {
      pNVar3 = (__this->fields)._TableView;
      if ((pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
         (pNVar7 = (pNVar3->fields)._LDAHBFIIBJJ_k__BackingField,
         pNVar7 == (Nekki_SF2_GUI_TableViewCell_o *)0x0)) goto LAB_035a87dc;
                    /* try { // try from 035a8778 to 036a879f has its CatchHandler @ 035a8ad8 */
      pNVar4 = pNVar7->klass;
      bVar1 = (Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo->_2).naturalAligment;
      if (((pNVar4->_2).naturalAligment < bVar1) ||
         ((pNVar4->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      pNVar6 = (Nekki_SF2_GUI_Profile_SubItem_o *)(*pNVar4[1]._1.image)(pNVar7,pNVar4[1]._1.gc_desc)
      ;
      *ppNVar5 = pNVar6;
      thunk_FUN_01c20e04(ppNVar5,pNVar6);
    }
  }
                    /* try { // try from 035a87d4 to 036a87fb has its CatchHandler @ 035a8ad4 */
  return *ppNVar5;
}

