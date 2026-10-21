// OLKKAIFGGAK$$JHOBENHGLMH @ RVA 0x34F237C

void OLKKAIFGGAK__JHOBENHGLMH
               (OLKKAIFGGAK_o *__this,uint8_t ACCIHBHMFPN,
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  OLKKAIFGGAK_o *pOVar2;
  System_Collections_Generic_Dictionary_MGNPHCAAEIO_LGLCMNNLHMI__ObscuredInt__o *__this_00;
  
  if ((DAT_045687c0 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_set_Item__
                );
    DAT_045687c0 = 1;
  }
  do {
    pOVar2 = __this;
    __this = (pOVar2->fields).NFMBPIPEKGF;
  } while (__this != (OLKKAIFGGAK_o *)0x0);
  __this_00 = (pOVar2->fields).OMIKEPANHAL;
  if (__this_00 ==
      (System_Collections_Generic_Dictionary_MGNPHCAAEIO_LGLCMNNLHMI__ObscuredInt__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = System_Collections_Generic_Dictionary<ByteEnum,_ObscuredInt>__ContainsKey
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,ACCIHBHMFPN,
                     Method_System_Collections_Generic_Dictionary<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_ContainsKey__
                    );
  if (!bVar1) {
                    /* try { // try from 035f244c to 036f2453 has its CatchHandler @ 035f28e8 */
    System_Collections_Generic_Dictionary<ByteEnum,_ObscuredInt>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,ACCIHBHMFPN,
               CJNHFNHJHPE,
               Method_System_Collections_Generic_Dictionary<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_Add__
              );
    return;
  }
  System_Collections_Generic_Dictionary<ByteEnum,_ObscuredInt>__set_Item
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,ACCIHBHMFPN,
             CJNHFNHJHPE,
             Method_System_Collections_Generic_Dictionary<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_set_Item__
            );
  return;
}

