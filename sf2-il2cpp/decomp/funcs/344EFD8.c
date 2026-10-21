// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$AAHLEFMLFFM @ RVA 0x344EFD8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__AAHLEFMLFFM
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,int32_t JDMKJDPMMDO,
               bool BLOGOHKEPHI,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *__this_00;
  Nekki_SF2_GUI_Scripts_EditBox_o *__this_01;
  BHEDGAKGKPO_StaticFields *pBVar6;
  UnityEngine_Color_o CJNHFNHJHPE;
  
  if ((DAT_045682a6 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045682a6 = 1;
  }
  __this_00 = (__this->fields).NOLPECJJJPE;
  if (__this_00 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *)0x0) {
    __this_01 = (Nekki_SF2_GUI_Scripts_EditBox_o *)
                System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           JDMKJDPMMDO,
                           Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Item__
                          );
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar5) {
      return;
    }
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_01 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
      pBVar6 = BHEDGAKGKPO_TypeInfo->static_fields;
      lVar1 = 0x34;
      if (!BLOGOHKEPHI) {
        lVar1 = 0xa4;
      }
      lVar2 = 0x30;
      if (!BLOGOHKEPHI) {
        lVar2 = 0xa0;
      }
      lVar3 = 0x2c;
      if (!BLOGOHKEPHI) {
        lVar3 = 0x9c;
      }
      lVar4 = 0x28;
      if (!BLOGOHKEPHI) {
        lVar4 = 0x98;
      }
      CJNHFNHJHPE.fields.a = *(undefined4 *)((long)&(pBVar6->GNNEMOOOOCI).fields.r + lVar1);
      CJNHFNHJHPE.fields.b = *(undefined4 *)((long)&(pBVar6->GNNEMOOOOCI).fields.r + lVar2);
      CJNHFNHJHPE.fields.g = *(undefined4 *)((long)&(pBVar6->GNNEMOOOOCI).fields.r + lVar3);
      CJNHFNHJHPE.fields.r = *(undefined4 *)((long)&(pBVar6->GNNEMOOOOCI).fields.r + lVar4);
      Nekki_SF2_GUI_Scripts_EditBox__set_FontColor(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)__this_01,BLOGOHKEPHI,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

