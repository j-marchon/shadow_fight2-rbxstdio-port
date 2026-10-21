// Nekki.SF2.GUI.Shop.ShopBottomPanel$$GIENGNEGHPJ @ RVA 0x33002D0

void Nekki_SF2_GUI_Shop_ShopBottomPanel__GIENGNEGHPJ
               (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  UnityEngine_Transform_o *__this_00;
  System_Collections_Generic_List_SectionButton__o *pSVar3;
  SFButton_o *__this_01;
  SFButton_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  System_Collections_Generic_List_T__o *__this_04;
  Il2CppObject *pIVar4;
  Nekki_SF2_GUI_Common_SectionButton_o *__this_05;
  int index;
  float fVar5;
  UnityEngine_Vector2_o PGFAIJMMOHJ;
  UnityEngine_Rect_o UVar6;
  
                    /* try { // try from 034002ec to 03500317 has its CatchHandler @ 0340061c */
  if ((DAT_04567714 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_GIENGNEGHPJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_get_Buttons__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_get_Count__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_get_Sections__);
    FUN_01bab630(&Method_System_Collections_Generic_List<POIJDKLHHKO>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<SectionButton>_get_Item__);
    DAT_04567714 = 1;
  }
                    /* try { // try from 03400350 to 035003bb has its CatchHandler @ 03400628 */
  Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this,
             Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_GIENGNEGHPJ__);
  if (0.0 < *(float *)&(__this->fields).super.field_0x64) {
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Transform_o *)0x0) {
LAB_034004d0:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034004d0 to 03500503 has its CatchHandler @ 034006c8 */
      FUN_01bab8c8();
    }
    UnityEngine_Transform__SetAsFirstSibling(__this_00,(MethodInfo *)0x0);
    iVar1 = Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__get_Count
                      ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this,
                       Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_get_Count__);
    if (0 < iVar1) {
      index = 0;
      do {
                    /* try { // try from 034003bc to 03500483 has its CatchHandler @ 034000a4 */
        pSVar3 = (__this->fields).super._Buttons;
        if (pSVar3 == (System_Collections_Generic_List_SectionButton__o *)0x0) goto LAB_034004d0;
        __this_01 = (SFButton_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,index,
                               Method_System_Collections_Generic_List<SectionButton>_get_Item__);
        pSVar3 = (__this->fields).super._Buttons;
        if (((pSVar3 == (System_Collections_Generic_List_SectionButton__o *)0x0) ||
            (__this_02 = (SFButton_o *)
                         System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                    Method_System_Collections_Generic_List<SectionButton>_get_Item__
                                   ), __this_02 == (SFButton_o *)0x0)) ||
           (__this_03 = SFButton__get_RectTransform(__this_02,(MethodInfo *)0x0),
           __this_03 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_034004d0;
        UVar6 = UnityEngine_RectTransform__get_rect(__this_03,(MethodInfo *)0x0);
        if (__this_01 == (SFButton_o *)0x0) goto LAB_034004d0;
        fVar5 = *(float *)&(__this->fields).super.field_0x64;
        PGFAIJMMOHJ.fields.y = UVar6.fields.m_Height + fVar5;
        PGFAIJMMOHJ.fields.x = UVar6.fields.m_Width + 0.0;
        SFButton__CreateAdditionalTouchZone
                  (__this_01,PGFAIJMMOHJ,(UnityEngine_Vector2_o)((ulong)(uint)(fVar5 * 0.5) << 0x20)
                   ,(MethodInfo *)0x0);
        __this_04 = (__this->fields).super._Sections;
        if (__this_04 == (System_Collections_Generic_List_T__o *)0x0) goto LAB_034004d0;
        iVar2 = System_Collections_Generic_List<Int32Enum>__get_Item
                          (__this_04,index,
                           Method_System_Collections_Generic_List<POIJDKLHHKO>_get_Item__);
        if (iVar2 == 7) {
          pSVar3 = (__this->fields).super._Buttons;
          if (pSVar3 == (System_Collections_Generic_List_SectionButton__o *)0x0) goto LAB_034004d0;
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index,
                              Method_System_Collections_Generic_List<SectionButton>_get_Item__);
          *(Il2CppObject **)&(__this->fields)._extendButtonsHeightForF2P = pIVar4;
          thunk_FUN_01c20e04(&(__this->fields)._extendButtonsHeightForF2P,pIVar4);
          pSVar3 = (__this->fields).super._Buttons;
          if (pSVar3 == (System_Collections_Generic_List_SectionButton__o *)0x0) goto LAB_034004d0;
          __this_05 = (Nekki_SF2_GUI_Common_SectionButton_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                 Method_System_Collections_Generic_List<SectionButton>_get_Item__);
                    /* try { // try from 03400484 to 0350048b has its CatchHandler @ 03400614 */
          iVar2 = (*(__this->klass->vtable)._10_CJFJPCHDLAB.methodPtr)
                            (__this,7,(__this->klass->vtable)._10_CJFJPCHDLAB.method);
          if (__this_05 == (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) goto LAB_034004d0;
          Nekki_SF2_GUI_Common_SectionButton__set_NewItemsCount(__this_05,iVar2,(MethodInfo *)0x0);
        }
        index = index + 1;
                    /* try { // try from 034004b0 to 035004b7 has its CatchHandler @ 0340060c */
      } while (iVar1 != index);
    }
  }
                    /* try { // try from 034004c0 to 035004c7 has its CatchHandler @ 034005fc */
  return;
}

