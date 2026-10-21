// JJPNLEPEAFM$$DOEMOKNGHNI @ RVA 0x353471C

void JJPNLEPEAFM__DOEMOKNGHNI(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  ACHLOMELAJE_o *pAVar3;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar4;
  System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE;
  NBLEEDEAPHB_o *__this;
  System_Action_object__o **ppSVar5;
  NBLEEDEAPHB_array *pNVar6;
  System_String_o *NJLKBEHCEKD;
  System_String_o *JEHFOBHMGJM;
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *in_stack_ffffffffffffffa0;
  
  if ((DAT_04568a7e & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_JJPNLEPEAFM_<>c_MHJDNNHFNAK__);
    FUN_01bab630(&JJPNLEPEAFM_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_15922);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_16043);
    FUN_01bab630(&StringLiteral_17766);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_17806);
    DAT_04568a7e = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar3 != (ACHLOMELAJE_o *)0x0) &&
     (pMVar4 = ACHLOMELAJE__HKIEGNBOFCD(pAVar3,StringLiteral_15922,0,(MethodInfo *)0x0),
     pMVar4 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0)) {
    NJLKBEHCEKD = (pMVar4->fields).JAICMIMBIOA;
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar3 != (ACHLOMELAJE_o *)0x0) &&
       (pMVar4 = ACHLOMELAJE__HKIEGNBOFCD(pAVar3,StringLiteral_16043,0,(MethodInfo *)0x0),
       pMVar4 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0)) {
      JEHFOBHMGJM = (pMVar4->fields).JAICMIMBIOA;
      IJIPABLCAKE = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                 Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
      __this = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
      NBLEEDEAPHB___ctor(__this,StringLiteral_17806,StringLiteral_17766,StringLiteral_1,
                         StringLiteral_1,0,-1,(IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,
                         (AMJMGFCCAKN_o *)0x0,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
      if (IJIPABLCAKE != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
        pNVar6 = (IJIPABLCAKE->fields)._items;
        (IJIPABLCAKE->fields)._version = (IJIPABLCAKE->fields)._version + 1;
        if (pNVar6 != (NBLEEDEAPHB_array *)0x0) {
          uVar1 = (IJIPABLCAKE->fields)._size;
          if (uVar1 < (uint)pNVar6->max_length) {
            (IJIPABLCAKE->fields)._size = uVar1 + 1;
            pNVar6->m_Items[(int)uVar1] = __this;
            thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,__this);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                       (Il2CppObject *)__this,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          if ((JJPNLEPEAFM_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          IELDNEAAPBE = JJPNLEPEAFM_<>c_TypeInfo->static_fields->__9__61_0;
          if (IELDNEAAPBE == (System_Action_object__o *)0x0) {
            if ((JJPNLEPEAFM_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            IELDNEAAPBE = (System_Action_object__o *)
                          thunk_FUN_01bda818(System_Action<object>_TypeInfo);
            System_Action<object>___ctor();
            ppSVar5 = &JJPNLEPEAFM_<>c_TypeInfo->static_fields->__9__61_0;
            *ppSVar5 = IELDNEAAPBE;
            thunk_FUN_01c20e04(ppSVar5,IELDNEAAPBE);
          }
          JJPNLEPEAFM__NBABCABBABL
                    (NJLKBEHCEKD,JEHFOBHMGJM,IJIPABLCAKE,(IGNEHHMICKB_o *)0x0,IELDNEAAPBE,
                     StringLiteral_3640,true,StringLiteral_1,2,0,true,false,0.0,
                     in_stack_ffffffffffffffa0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

