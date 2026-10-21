// MMDDDDFHOLG$$HAGJCFHKIKM @ RVA 0x336237C

void MMDDDDFHOLG__HAGJCFHKIKM
               (MMDDDDFHOLG_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,int32_t ACCIHBHMFPN,
               MethodInfo *method)

{
  bool bVar1;
  MMDDDDFHOLG_CFAPCBMMJIP_o *pMVar2;
  MMDDDDFHOLG_CFAPCBMMJIP_Fields *pMVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject **ppIVar6;
  
  if ((DAT_04567a8d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&Method_OMLLDCIMLBB<MMDDDDFHOLG_CFAPCBMMJIP>_CallEvent__);
    FUN_01bab630(&StringLiteral_9146);
    DAT_04567a8d = 1;
  }
  if (ACCIHBHMFPN != 0xe) {
    return;
  }
  pMVar2 = (__this->fields).INJKHBBGKLH;
  if (pMVar2 != (MMDDDDFHOLG_CFAPCBMMJIP_o *)0x0) {
    pMVar3 = &pMVar2->fields;
    pMVar3->HEMGHNOOJPI = BCKBBGCOMJD;
    thunk_FUN_01c20e04(pMVar3,BCKBBGCOMJD);
    pMVar2 = (__this->fields).INJKHBBGKLH;
    if (pMVar2 != (MMDDDDFHOLG_CFAPCBMMJIP_o *)0x0) {
      (pMVar2->fields).NAPEFFFIIFE = 0xe;
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).KECADJKAJNG;
      if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                          (pSVar4,StringLiteral_9146,
                           Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__
                          );
        if (bVar1) {
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields).KECADJKAJNG;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_03462498;
          pIVar5 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                             (pSVar4,StringLiteral_9146,
                              Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                             );
        }
        else {
          pIVar5 = (Il2CppObject *)0x0;
        }
        ppIVar6 = &(pMVar2->fields).KOANCCDDBDA;
        *ppIVar6 = pIVar5;
        thunk_FUN_01c20e04(ppIVar6);
        OMLLDCIMLBB<object>__CallEvent
                  ((OMLLDCIMLBB_object__o *)__this,0xe,(Il2CppObject *)(__this->fields).INJKHBBGKLH,
                   Method_OMLLDCIMLBB<MMDDDDFHOLG_CFAPCBMMJIP>_CallEvent__);
        return;
      }
    }
  }
LAB_03462498:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

