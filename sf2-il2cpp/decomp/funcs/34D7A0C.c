// NKOIBKNPICN$$LCAEEPKOHMN @ RVA 0x34D7A0C

bool NKOIBKNPICN__LCAEEPKOHMN
               (NKOIBKNPICN_o *FMPJLBLNHMC,NKOIBKNPICN_o *IHEPHBIPLPM,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *pSVar1;
  System_Collections_Generic_List_int__o *pSVar2;
  System_Collections_Generic_List_int__o *pSVar3;
  System_Collections_Generic_List_int__o *pSVar4;
  
  if ((DAT_045686e5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    DAT_045686e5 = 1;
  }
  if ((FMPJLBLNHMC != (NKOIBKNPICN_o *)0x0) && (IHEPHBIPLPM != (NKOIBKNPICN_o *)0x0)) {
    if (((FMPJLBLNHMC->fields).PBPNNKNICEE != (IHEPHBIPLPM->fields).PBPNNKNICEE) ||
       ((FMPJLBLNHMC->fields).BHJAGFIAEAA != (IHEPHBIPLPM->fields).BHJAGFIAEAA)) {
      return false;
    }
    pSVar1 = (FMPJLBLNHMC->fields).OOIGOEAHPMA;
    if ((pSVar1 != (System_Collections_Generic_List_int__o *)0x0) &&
       (pSVar2 = (IHEPHBIPLPM->fields).OOIGOEAHPMA,
       pSVar2 != (System_Collections_Generic_List_int__o *)0x0)) {
      if ((pSVar1->fields)._size != (pSVar2->fields)._size) {
        return false;
      }
      pSVar3 = (FMPJLBLNHMC->fields).KJNPENJKBKD;
      if ((pSVar3 != (System_Collections_Generic_List_int__o *)0x0) &&
         (pSVar4 = (IHEPHBIPLPM->fields).KJNPENJKBKD,
         pSVar4 != (System_Collections_Generic_List_int__o *)0x0)) {
        return ((pSVar3->fields)._size == (pSVar4->fields)._size && pSVar1 == pSVar2) &&
               pSVar3 == pSVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

