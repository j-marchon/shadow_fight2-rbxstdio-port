// MCIBPLJEFLJ$$BDHAMOEKNNK @ RVA 0x305025C

bool MCIBPLJEFLJ__BDHAMOEKNNK
               (MCIBPLJEFLJ_o *__this,GBJGJEGPHKD_o *JALKELIHLPC,
               System_Collections_Generic_List_GEBHIBIEAJE__o *APHLCBPKMEP,
               JADGCGOJLJB_o *HGHDNFCKJFL,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_List_GEBHIBIEAJE__o *OIMEJPNHBPN;
  GEBHIBIEAJE_o *FCKLNDFALPL;
  MCIBPLJEFLJ_KHCGONNHOMM_o *pMVar3;
  GEBHIBIEAJE_o **ppGVar4;
  MCIBPLJEFLJ_KHCGONNHOMM_Fields *pMVar5;
  CNDPAJOLKFN_o *pCVar6;
  JADGCGOJLJB_o *method_00;
  MCIBPLJEFLJ_Fields *pMVar7;
  int index;
  
  method_00 = HGHDNFCKJFL;
  if ((DAT_04565e45 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GEBHIBIEAJE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEBHIBIEAJE>_get_Item__);
    FUN_01bab630(&MDAPDLLMOMF_TypeInfo);
    DAT_04565e45 = 1;
  }
  pMVar7 = &__this->fields;
  if (pMVar7->BOFNLBOBNKM != HGHDNFCKJFL) {
    if (HGHDNFCKJFL != (JADGCGOJLJB_o *)0x0) {
      bVar1 = (MDAPDLLMOMF_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (HGHDNFCKJFL->klass->_2).naturalAligment) &&
         ((HGHDNFCKJFL->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)MDAPDLLMOMF_TypeInfo)) {
        if ((char)HGHDNFCKJFL[1].fields._NNEIIMCKKNF_k__BackingField.fields.fakeValue == '\0') {
          (__this->fields).BOFNLBOBNKM = HGHDNFCKJFL;
          thunk_FUN_01c20e04(pMVar7,HGHDNFCKJFL);
          pMVar3 = (__this->fields).HKFEABKNICO;
          if (pMVar3 != (MCIBPLJEFLJ_KHCGONNHOMM_o *)0x0) {
            ppGVar4 = &(pMVar3->fields).GBPPPKHOPEA;
            *ppGVar4 = (GEBHIBIEAJE_o *)0x0;
            thunk_FUN_01c20e04(ppGVar4,0);
            pMVar3 = (__this->fields).HKFEABKNICO;
            if (pMVar3 != (MCIBPLJEFLJ_KHCGONNHOMM_o *)0x0) {
              pMVar5 = &pMVar3->fields;
              pMVar5->POPNNGCHBML = (GEBHIBIEAJE_o *)0x0;
              thunk_FUN_01c20e04(pMVar5,0);
              pMVar3 = (__this->fields).HKFEABKNICO;
              if ((pMVar3 != (MCIBPLJEFLJ_KHCGONNHOMM_o *)0x0) &&
                 (pCVar6 = (pMVar3->fields).BPILADHMHBB, pCVar6 != (CNDPAJOLKFN_o *)0x0)) {
                CNDPAJOLKFN__DGLJCGNHLIG(pCVar6,(MethodInfo *)0x0);
                pMVar3 = (__this->fields).HKFEABKNICO;
                if ((pMVar3 != (MCIBPLJEFLJ_KHCGONNHOMM_o *)0x0) &&
                   (pCVar6 = (pMVar3->fields).HNNCKGOBKLK, pCVar6 != (CNDPAJOLKFN_o *)0x0)) {
                  CNDPAJOLKFN__DGLJCGNHLIG(pCVar6,(MethodInfo *)0x0);
                  return true;
                }
              }
            }
          }
        }
        else if ((JALKELIHLPC != (GBJGJEGPHKD_o *)0x0) &&
                (OIMEJPNHBPN = GBJGJEGPHKD__EKHACIPBPAP(JALKELIHLPC,(MethodInfo *)0x0),
                APHLCBPKMEP != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0)) {
          if ((APHLCBPKMEP->fields)._size < 1) {
            return false;
          }
          index = 0;
          do {
            FCKLNDFALPL = (GEBHIBIEAJE_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)APHLCBPKMEP,index,
                                     Method_System_Collections_Generic_List<GEBHIBIEAJE>_get_Item__)
            ;
            bVar2 = MCIBPLJEFLJ__BLDENPCGPNH(__this,OIMEJPNHBPN,FCKLNDFALPL,(MethodInfo *)method_00)
            ;
            if (bVar2) {
              pMVar7->BOFNLBOBNKM = HGHDNFCKJFL;
              thunk_FUN_01c20e04(pMVar7,HGHDNFCKJFL);
              return true;
            }
            index = index + 1;
          } while (index < (APHLCBPKMEP->fields)._size);
          return false;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

