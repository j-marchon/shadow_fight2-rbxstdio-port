// IPPEHAJADOO$$BKBHKFCCKDO @ RVA 0x313F634

void IPPEHAJADOO__BKBHKFCCKDO
               (IPPEHAJADOO_o *__this,int32_t ACCIHBHMFPN,OLKKAIFGGAK_EAOIGPODIAI_o *BCHKAEBGKGG,
               bool NJDMEGOFJFO,MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  ECAIEGNAOAL_o *__this_00;
  System_Collections_Generic_List_ECAIEGNAOAL__o *__this_01;
  OLKKAIFGGAK_EAOIGPODIAI_o *pOVar3;
  ECAIEGNAOAL_array *pEVar4;
  OLKKAIFGGAK_o **ppOVar5;
  ECAIEGNAOAL_Fields *pEVar6;
  
  if ((DAT_04566766 & 1) == 0) {
    FUN_01bab630(&ECAIEGNAOAL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_Add__);
    DAT_04566766 = 1;
  }
  __this_00 = (ECAIEGNAOAL_o *)thunk_FUN_01bda818(ECAIEGNAOAL_TypeInfo);
  ECAIEGNAOAL___ctor(__this_00,(MethodInfo *)0x0);
  if ((__this_00 != (ECAIEGNAOAL_o *)0x0) &&
     ((__this_00->fields).BGHFADDGPAD = ACCIHBHMFPN, BCHKAEBGKGG != (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0
     )) {
    (__this_00->fields).LCIJCMJDKIH = (BCHKAEBGKGG->fields).LCIJCMJDKIH;
    thunk_FUN_01c20e04();
    (__this_00->fields).KOANCCDDBDA = (BCHKAEBGKGG->fields).KOANCCDDBDA;
    thunk_FUN_01c20e04();
    lVar1 = 0x18;
    if (ACCIHBHMFPN != 7) {
      lVar1 = 0x10;
    }
    pEVar6 = &__this_00->fields;
    pEVar6->HEMGHNOOJPI = *(OLKKAIFGGAK_o **)((long)&BCHKAEBGKGG->klass + lVar1);
                    /* try { // try from 0323f6e4 to 0333f6eb has its CatchHandler @ 0323f7f0 */
    thunk_FUN_01c20e04(pEVar6);
    if ((pEVar6->HEMGHNOOJPI != (OLKKAIFGGAK_o *)0x0) &&
       (pOVar3 = (pEVar6->HEMGHNOOJPI->fields).PDCHNCOIHHA,
       pOVar3 != (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0)) {
      ppOVar5 = &(__this_00->fields).PFFLOCBGFCH;
                    /* try { // try from 0323f700 to 0333f70b has its CatchHandler @ 0323f7e4 */
      *ppOVar5 = (pOVar3->fields).PFFLOCBGFCH;
      thunk_FUN_01c20e04(ppOVar5);
      (__this_00->fields).KHKEGAKGNCN = NJDMEGOFJFO;
      lVar1 = Method_System_Collections_Generic_List<ECAIEGNAOAL>_Add__;
      if (ACCIHBHMFPN == 0xd) {
                    /* try { // try from 0323f720 to 0333f7a3 has its CatchHandler @ 0323f7f4 */
        __this_01 = (__this->fields).FNMHCOJPGMJ;
      }
      else {
        __this_01 = (__this->fields).KBOMJBFAKKA;
      }
      if (__this_01 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
        pEVar4 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pEVar4 != (ECAIEGNAOAL_array *)0x0) {
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pEVar4->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pEVar4->m_Items[(int)uVar2] = __this_00;
            thunk_FUN_01c20e04(pEVar4->m_Items + (int)uVar2,__this_00);
            return;
          }
                    /* try { // try from 0323f7a4 to 0333f7d7 has its CatchHandler @ 0323f5e8 */
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

