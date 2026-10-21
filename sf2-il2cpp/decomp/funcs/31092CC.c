// OPNFCOGALLI$$NGILHAOFGEA @ RVA 0x31092CC

bool OPNFCOGALLI__NGILHAOFGEA
               (IEFEBEDLHNN_o *LFALCONFCGH,IEFEBEDLHNN_o *NMGJAKHNCND,int32_t OAFGMHOFEKM,
               System_Collections_Generic_List_CNDPAJOLKFN__o *PDCJPCDLHCI,bool LBFDGHOEPPM,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  CNDPAJOLKFN_o *pCVar2;
  CNDPAJOLKFN_o *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int32_t local_60;
  int32_t iStack_5c;
  IEFEBEDLHNN_o *local_58;
  IEFEBEDLHNN_o *local_48;
  
  local_58 = NMGJAKHNCND;
  local_48 = LFALCONFCGH;
  if ((DAT_0456651f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    FUN_01bab630(&Method_Util_JGJFNOOGAEP<IEFEBEDLHNN>__);
    FUN_01bab630(&Method_Util_JGJFNOOGAEP<int>__);
    DAT_0456651f = 1;
  }
  local_60 = 0;
  iStack_5c = 0;
  if (OAFGMHOFEKM == -1) {
    Util__JGJFNOOGAEP<object>
              ((Il2CppObject **)&local_48,(Il2CppObject **)&local_58,
               Method_Util_JGJFNOOGAEP<IEFEBEDLHNN>__);
    LFALCONFCGH = local_48;
  }
  if (((((LFALCONFCGH != (IEFEBEDLHNN_o *)0x0) &&
        (iStack_5c = (LFALCONFCGH->fields).FLDBGCIKMKA, local_58 != (IEFEBEDLHNN_o *)0x0)) &&
       ((local_60 = (local_58->fields).FLDBGCIKMKA, OAFGMHOFEKM != -1 ||
        ((LBFDGHOEPPM ||
         (Util__JGJFNOOGAEP<int>(&iStack_5c,&local_60,Method_Util_JGJFNOOGAEP<int>__),
         LFALCONFCGH = local_48, local_48 != (IEFEBEDLHNN_o *)0x0)))))) &&
      (pCVar2 = (LFALCONFCGH->fields).CNMHHKAMGPI, pCVar2 != (CNDPAJOLKFN_o *)0x0)) &&
     (((local_58 != (IEFEBEDLHNN_o *)0x0 &&
       (pCVar3 = (local_58->fields).CNMHHKAMGPI, pCVar3 != (CNDPAJOLKFN_o *)0x0)) &&
      (PDCJPCDLHCI != (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)))) {
    fVar4 = (pCVar2->fields).super.OHHDBINAJCB;
    fVar5 = (pCVar3->fields).super.OHHDBINAJCB;
    pIVar1 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)PDCJPCDLHCI,iStack_5c,
                        Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    if (pIVar1 != (Il2CppObject *)0x0) {
      fVar6 = *(float *)&pIVar1[1].klass;
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)PDCJPCDLHCI,local_60,
                          Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
      if (pIVar1 != (Il2CppObject *)0x0) {
        return fVar5 <= fVar4 != *(float *)&pIVar1[1].klass <= fVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

