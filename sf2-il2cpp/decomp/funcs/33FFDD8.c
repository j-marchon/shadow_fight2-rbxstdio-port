// MGNPHCAAEIO$$HDOLGHPPCFL @ RVA 0x33FFDD8

bool MGNPHCAAEIO__HDOLGHPPCFL(System_String_o *DBIAAJNKHLH,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_String_o *a;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_string__o *pSVar3;
  bool bVar4;
  int iVar5;
  
  if ((DAT_04567fe6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567fe6 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  pSVar3 = MGNPHCAAEIO_TypeInfo->static_fields->DOBGPEEHMMD;
  if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    if (iVar1 < 1) {
      bVar4 = false;
    }
    else {
      iVar5 = 1;
      bVar4 = true;
      while( true ) {
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = MGNPHCAAEIO_TypeInfo->static_fields->DOBGPEEHMMD;
        if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_034ffedc;
        a = (System_String_o *)
            System_Collections_Generic_List<object>__get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar3,iVar5 + -1,
                       Method_System_Collections_Generic_List<string>_get_Item__);
        bVar2 = System_String__op_Equality(a,DBIAAJNKHLH,(MethodInfo *)0x0);
        if ((bVar2) || (bVar4 = iVar5 < iVar1, iVar1 == iVar5)) break;
        iVar5 = iVar5 + 1;
      }
    }
    return (bool)(~bVar4 & 1);
  }
LAB_034ffedc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

