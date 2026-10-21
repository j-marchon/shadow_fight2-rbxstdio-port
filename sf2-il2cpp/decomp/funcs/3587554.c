// Nekki.SF2.GUI.Map.MapScene$$IsZoneHaveDontCompleteBattle @ RVA 0x3587554

bool Nekki_SF2_GUI_Map_MapScene__IsZoneHaveDontCompleteBattle
               (MEJIKMPNBNL_o *BHHBEIACGPB,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  System_String_o *KGLJICLJHEL;
  OOMHDDBCBJP_o *__this;
  MethodInfo *extraout_x1;
  MOAHCJAFGNJ_NEEADEALBAI_o *pMVar3;
  System_Collections_Generic_List_string__o *__this_00;
  int iVar4;
  bool bVar5;
  
  if ((DAT_04568d02 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
    DAT_04568d02 = 1;
    method = extraout_x1;
  }
  if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MOAHCJAFGNJ_TypeInfo,method);
  }
  pMVar3 = MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH;
  if ((pMVar3 != (MOAHCJAFGNJ_NEEADEALBAI_o *)0x0) &&
     (__this_00 = (pMVar3->fields).IIDBLEBLLEM,
     __this_00 != (System_Collections_Generic_List_string__o *)0x0)) {
    iVar4 = (__this_00->fields)._size;
    bVar5 = 0 < iVar4;
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        KGLJICLJHEL = (System_String_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,iVar4,
                                 Method_System_Collections_Generic_List<string>_get_Item__);
        if (BHHBEIACGPB == (MEJIKMPNBNL_o *)0x0) goto LAB_03687680;
        __this = MEJIKMPNBNL__KKPHCCBPIMN(BHHBEIACGPB,KGLJICLJHEL,(MethodInfo *)0x0);
        if (__this != (OOMHDDBCBJP_o *)0x0) {
          iVar2 = (*(__this->klass->vtable)._15_AAHLCCCONKI.methodPtr)
                            (__this,(__this->klass->vtable)._15_AAHLCCCONKI.method);
          bVar1 = OOMHDDBCBJP__KFMAFEPOEIB(__this,(MethodInfo *)0x0);
          if (((iVar2 == 2 && !bVar1) & (__this->fields).HHDBIGKBMEC) != 0) {
            return bVar5;
          }
        }
        iVar2 = (__this_00->fields)._size;
        iVar4 = iVar4 + 1;
        bVar5 = iVar4 < iVar2;
      } while (iVar4 < iVar2);
    }
    return bVar5;
  }
LAB_03687680:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

