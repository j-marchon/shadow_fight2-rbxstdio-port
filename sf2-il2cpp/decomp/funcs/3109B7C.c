// OPNFCOGALLI$$FCDDJKKOCIJ @ RVA 0x3109B7C

float OPNFCOGALLI__FCDDJKKOCIJ
                (OPNFCOGALLI_o *__this,System_Collections_Generic_List_CNDPAJOLKFN__o *PKDBOMAHGHC,
                MethodInfo *method)

{
  Il2CppObject *pIVar1;
  IEFEBEDLHNN_o *pIVar2;
  CNDPAJOLKFN_o *pCVar3;
  float fVar4;
  
  if ((DAT_04566521 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    DAT_04566521 = 1;
  }
  pIVar2 = (__this->fields).BAAPAKJGOMG;
  if (((pIVar2 != (IEFEBEDLHNN_o *)0x0) &&
      (pCVar3 = (pIVar2->fields).CNMHHKAMGPI, pCVar3 != (CNDPAJOLKFN_o *)0x0)) &&
     (PKDBOMAHGHC != (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) {
    fVar4 = (pCVar3->fields).super.JOLEIODMLFL;
    pIVar1 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)PKDBOMAHGHC,
                        (__this->fields).NOEPMCHIBOL,
                        Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    if (pIVar1 != (Il2CppObject *)0x0) {
      return fVar4 - *(float *)((long)&pIVar1[1].klass + 4);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

