// KPBOJBLLKPJ$$GBDKELGIOEK @ RVA 0x3088200

void KPBOJBLLKPJ__GBDKELGIOEK(KPBOJBLLKPJ_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  uint length;
  int iVar1;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *__this_00;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  
  if ((DAT_04566031 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_get_Item__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>_Clear__);
    DAT_04566031 = 1;
  }
  KPBOJBLLKPJ__NBKAMBPCHNJ(__this,ACCIHBHMFPN,method);
  __this_00 = (__this->fields).NGKLIODAFAG;
  if ((__this_00 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *)0x0)
     && (pIVar2 = System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                             ACCIHBHMFPN,
                             Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_get_Item__
                            ), pIVar2 != (Il2CppObject *)0x0)) {
    length = *(uint *)&pIVar2[1].monitor;
    method_00 = (MethodInfo *)(ulong)length;
    iVar1 = *(int *)((long)&pIVar2[1].monitor + 4);
    *(undefined4 *)&pIVar2[1].monitor = 0;
    *(int *)((long)&pIVar2[1].monitor + 4) = iVar1 + 1;
    if (0 < (int)length) {
      System_Array__Clear((System_Array_o *)pIVar2[1].klass,0,length,(MethodInfo *)0x0);
    }
    KPBOJBLLKPJ__ICKMLIPLCLC(__this,ACCIHBHMFPN,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

