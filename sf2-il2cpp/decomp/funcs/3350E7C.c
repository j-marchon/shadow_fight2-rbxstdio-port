// PFOMHOLCODE$$OEBFBEEKNNE @ RVA 0x3350E7C

bool PFOMHOLCODE__OEBFBEEKNNE(PFOMHOLCODE_o *__this,MethodInfo *method)

{
  PFOMHOLCODE_JBJOKPCAJEP_o *pPVar1;
  LCKCDEKNLOA_o *pLVar2;
  System_Collections_Generic_List_BOFEMGGNODC__o *pSVar3;
  PFOMHOLCODE_AJMCKEHMEOD_o *pPVar4;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_04567a20 & 1) == 0) {
    auVar5 = FUN_01bab630(&Method_System_Collections_Generic_List<BOFEMGGNODC>_get_Count__);
    DAT_04567a20 = 1;
  }
  pPVar1 = (__this->fields).DKMMLPDKILK;
  if (pPVar1 != (PFOMHOLCODE_JBJOKPCAJEP_o *)0x0) {
    pLVar2 = (pPVar1->fields).NEIJJHEFLHP;
    if ((pLVar2 == (LCKCDEKNLOA_o *)0x0) ||
       (pSVar3 = (pLVar2->fields).NEIJJHEFLHP,
       pSVar3 == (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0)) goto LAB_03450f94;
    if (0 < (pSVar3->fields)._size) {
      return true;
    }
  }
  pPVar1 = (__this->fields).AKKPBPEJNNE;
  if (pPVar1 != (PFOMHOLCODE_JBJOKPCAJEP_o *)0x0) {
    pLVar2 = (pPVar1->fields).NEIJJHEFLHP;
    if ((pLVar2 == (LCKCDEKNLOA_o *)0x0) ||
       (pSVar3 = (pLVar2->fields).NEIJJHEFLHP,
       pSVar3 == (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0)) goto LAB_03450f94;
    if (0 < (pSVar3->fields)._size) {
      return true;
    }
  }
  pPVar1 = (__this->fields).JMGEHHNGBMI;
  if (pPVar1 != (PFOMHOLCODE_JBJOKPCAJEP_o *)0x0) {
    pLVar2 = (pPVar1->fields).NEIJJHEFLHP;
    if ((pLVar2 == (LCKCDEKNLOA_o *)0x0) ||
       (pSVar3 = (pLVar2->fields).NEIJJHEFLHP,
       pSVar3 == (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0)) goto LAB_03450f94;
    if (0 < (pSVar3->fields)._size) {
      return true;
    }
  }
  pPVar1 = (__this->fields).FMNILCPNHHJ;
  if (pPVar1 != (PFOMHOLCODE_JBJOKPCAJEP_o *)0x0) {
    pLVar2 = (pPVar1->fields).NEIJJHEFLHP;
    if ((pLVar2 == (LCKCDEKNLOA_o *)0x0) ||
       (pSVar3 = (pLVar2->fields).NEIJJHEFLHP,
       pSVar3 == (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0)) goto LAB_03450f94;
    if (0 < (pSVar3->fields)._size) {
      return true;
    }
  }
  pPVar4 = (__this->fields).KDCIFIDLLKH;
  if (pPVar4 == (PFOMHOLCODE_AJMCKEHMEOD_o *)0x0) {
    return false;
  }
  pLVar2 = (pPVar4->fields).GBLCPIFNBJJ;
  if ((pLVar2 != (LCKCDEKNLOA_o *)0x0) &&
     (pSVar3 = (pLVar2->fields).NEIJJHEFLHP,
     pSVar3 != (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0)) {
    if (0 < (pSVar3->fields)._size) {
      return true;
    }
    pLVar2 = (pPVar4->fields).HHMNHKJGJPG;
    if ((pLVar2 != (LCKCDEKNLOA_o *)0x0) &&
       (pSVar3 = (pLVar2->fields).NEIJJHEFLHP,
       pSVar3 != (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0)) {
      return 0 < (pSVar3->fields)._size;
    }
  }
LAB_03450f94:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar5._0_8_,auVar5._8_8_);
}

