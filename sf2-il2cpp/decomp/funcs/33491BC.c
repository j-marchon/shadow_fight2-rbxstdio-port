// Nekki.SF2.GUI.Map.ZoneScrollItem$$ActiveBattle @ RVA 0x33491BC

void Nekki_SF2_GUI_Map_ZoneScrollItem__ActiveBattle
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,System_String_o *NJEOLDEAMCP,
               bool MJDICHGKPGE,bool DKEIBNDDFOM,bool NLBIOFGMMOO,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *ODPBAKKAAMP;
  bool bVar2;
  int32_t iVar3;
  System_String_o *message;
  MethodInfo *in_x6;
  MEJIKMPNBNL_o *pMVar4;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  int FAOACNMBIME;
  OOMHDDBCBJP_o *pOVar5;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045679df & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Count__);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&StringLiteral_5417);
    DAT_045679df = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pMVar4 = (__this->fields).IAJBEJGMIMM;
  if ((pMVar4 == (MEJIKMPNBNL_o *)0x0) ||
     (__this_00 = (pMVar4->fields).BDCBJJGNPMC,
     __this_00 == (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
  FAOACNMBIME = 0;
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    ODPBAKKAAMP = local_80.fields._current;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__)
      ;
LAB_034493e8:
      message = System_String__Concat(StringLiteral_5417,NJEOLDEAMCP,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
      return;
    }
    if ((OOMHDDBCBJP_o *)local_80.fields._current == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__op_Equality
                      (((OOMHDDBCBJP_Fields *)((long)local_80.fields._current + 0x10))->DEKCPPOJFEH,
                       NJEOLDEAMCP,(MethodInfo *)0x0);
    if (bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__)
      ;
      if (FAOACNMBIME < (__this_00->fields)._size) {
        Nekki_SF2_GUI_Map_ZoneScrollItem__FPODMPDLBLL
                  (__this,(OOMHDDBCBJP_o *)ODPBAKKAAMP,FAOACNMBIME,MJDICHGKPGE,DKEIBNDDFOM,
                   NLBIOFGMMOO,in_x6);
        return;
      }
      goto LAB_034493e8;
    }
    bVar1 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
    if ((((OOMHDDBCBJP_c *)ODPBAKKAAMP->klass)->_2).naturalAligment < bVar1) {
      pOVar5 = (OOMHDDBCBJP_o *)0x0;
    }
    else {
      pOVar5 = (OOMHDDBCBJP_o *)ODPBAKKAAMP;
      if ((((OOMHDDBCBJP_c *)ODPBAKKAAMP->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)OHDDKGHEEPA_TypeInfo) {
        pOVar5 = (OOMHDDBCBJP_o *)0x0;
      }
    }
    iVar3 = OOMHDDBCBJP__NHGGBEACKBD((OOMHDDBCBJP_o *)ODPBAKKAAMP,(MethodInfo *)0x0);
    if (((iVar3 != 0xf) &&
        (((OOMHDDBCBJP_Fields *)((long)ODPBAKKAAMP + 0x10))->CILMHNDFBPH == false)) &&
       ((pOVar5 == (OOMHDDBCBJP_o *)0x0 || (*(int *)&pOVar5[1].fields.LFJPDELEIHG != 1)))) {
      FAOACNMBIME = FAOACNMBIME + 1;
    }
  } while( true );
}

