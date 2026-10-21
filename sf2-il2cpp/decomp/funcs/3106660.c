// OPNFCOGALLI$$MMLLFINLMDJ @ RVA 0x3106660

CNDPAJOLKFN_o *
OPNFCOGALLI__MMLLFINLMDJ
          (OPNFCOGALLI_o *__this,System_Collections_Generic_List_CNDPAJOLKFN__o *PKDBOMAHGHC,
          MethodInfo *method)

{
  CNDPAJOLKFN_o *pCVar1;
  IEFEBEDLHNN_o *pIVar2;
  CNDPAJOLKFN_o *BJCLOGCDNEG;
  
  if ((DAT_0456650d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    DAT_0456650d = 1;
  }
  pIVar2 = (__this->fields).BAAPAKJGOMG;
  if ((pIVar2 != (IEFEBEDLHNN_o *)0x0) &&
     (PKDBOMAHGHC != (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) {
    BJCLOGCDNEG = (pIVar2->fields).CNMHHKAMGPI;
    pCVar1 = (CNDPAJOLKFN_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)PKDBOMAHGHC,
                        (__this->fields).NOEPMCHIBOL,
                        Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    pCVar1 = CNDPAJOLKFN__MPOCFELGHDK(BJCLOGCDNEG,pCVar1,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

