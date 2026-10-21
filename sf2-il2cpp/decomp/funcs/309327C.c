// Nekki.SF2.GUI.GeneralMenu.StoryItemText$$HMEMCCGNGFF @ RVA 0x309327C

System_String_o *
Nekki_SF2_GUI_GeneralMenu_StoryItemText__HMEMCCGNGFF
          (Nekki_SF2_GUI_GeneralMenu_StoryItemText_o *__this,int32_t OKBHJGIOENM,MethodInfo *method)

{
  NLPJLHOEAOE_o *pNVar1;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar3;
  System_String_o *str1;
  MethodInfo *method_00;
  undefined8 *puVar4;
  float local_28;
  int32_t local_24;
  
  if ((DAT_045660b8 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15825);
    FUN_01bab630(&StringLiteral_15824);
    FUN_01bab630(&StringLiteral_22504);
    FUN_01bab630(&StringLiteral_15821);
    FUN_01bab630(&StringLiteral_15823);
    FUN_01bab630(&StringLiteral_15822);
    FUN_01bab630(&StringLiteral_8409);
    FUN_01bab630(&StringLiteral_12434);
    FUN_01bab630(&StringLiteral_22505);
    DAT_045660b8 = 1;
  }
  local_28 = 0.0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar1 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar1 != (NLPJLHOEAOE_o *)0x0) {
    JHMENEKPIBO = NLPJLHOEAOE__MBLEGLIMGHP(pNVar1,OKBHJGIOENM,(MethodInfo *)0x0);
    pSVar3 = StringLiteral_15825;
    if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar1 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pNVar1 == (NLPJLHOEAOE_o *)0x0) goto LAB_03193498;
      pSVar2 = NLPJLHOEAOE__PPPIEOEMMKL(pNVar1,OKBHJGIOENM,StringLiteral_12434,(MethodInfo *)0x0);
      pSVar3 = StringLiteral_15825;
      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
        LBJNDMNEJJB = EIABCPKDEBD__NHPDFFAIJMF(JHMENEKPIBO,StringLiteral_8409,(MethodInfo *)0x0);
        local_24 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0,(MethodInfo *)0x0);
        pSVar3 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
        method_00 = StringLiteral_22504;
        pSVar3 = System_String__Concat
                           (StringLiteral_15824,pSVar3,(System_String_o *)StringLiteral_22504,
                            (MethodInfo *)0x0);
        local_28 = Nekki_SF2_GUI_GeneralMenu_StoryItemText__MBJANJJBMHC
                             (__this,JHMENEKPIBO,method_00);
        if (local_28 == 7.0) {
          puVar4 = &StringLiteral_15821;
        }
        else {
          if (local_28 != 8.0) {
            str1 = System_Single__ToString(local_28,(MethodInfo *)&local_28);
            pSVar3 = System_String__Concat
                               (StringLiteral_15822,str1,StringLiteral_22505,pSVar3,
                                (MethodInfo *)0x0);
            return pSVar3;
          }
          puVar4 = &StringLiteral_15823;
        }
        pSVar3 = System_String__Concat((System_String_o *)*puVar4,pSVar3,(MethodInfo *)0x0);
      }
    }
    return pSVar3;
  }
LAB_03193498:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

