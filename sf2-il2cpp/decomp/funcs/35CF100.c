// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$EHKNJIHNOGA @ RVA 0x35CF100

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__EHKNJIHNOGA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,int32_t NFIICLCMEHI,
               MethodInfo *method)

{
  int32_t value;
  int32_t iVar1;
  System_Text_StringBuilder_o *__this_00;
  System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this_02;
  System_String_o *NEJHIEOHMCF;
  MethodInfo *method_00;
  System_Action_string__o *pSVar2;
  int key;
  
  if ((DAT_04568fc8 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Item__
                 ,NFIICLCMEHI);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_1154);
    DAT_04568fc8 = 1;
  }
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,0x10,(MethodInfo *)0x0);
  key = 0;
  while ((__this_01 = (__this->fields).PEIHFKHLGMO,
         __this_01 !=
         (System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *)0x0 &&
         (__this_02 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)
                      System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                                 key,
                                 Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Item__
                                ),
         __this_02 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)0x0))) {
    value = Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__GetCurrentItemLogicIndex
                      (__this_02,(MethodInfo *)0x0);
    if (__this_00 == (System_Text_StringBuilder_o *)0x0) break;
    iVar1 = System_Text_StringBuilder__get_Length(__this_00,(MethodInfo *)0x0);
    if (0 < iVar1) {
      System_Text_StringBuilder__Append(__this_00,StringLiteral_1154,(MethodInfo *)0x0);
    }
    method_00 = (MethodInfo *)0x0;
    System_Text_StringBuilder__Append(__this_00,value,(MethodInfo *)0x0);
    key = key + 1;
    if (key == 3) {
      NEJHIEOHMCF = (System_String_o *)
                    (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                              (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__FKFPKOGCLFP
                (__this,NEJHIEOHMCF,method_00);
      pSVar2 = (__this->fields).MGDFLOOAIIC;
      if (pSVar2 != (System_Action_string__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036cf230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar2->fields).super.super.invoke_impl)
                  ((pSVar2->fields).super.super.method_code,NEJHIEOHMCF,
                   (pSVar2->fields).super.super.method);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

