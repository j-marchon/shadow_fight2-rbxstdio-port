// CUDLR.Server$$GBEKBBBALIE @ RVA 0x33BDED4

void CUDLR_Server__GBEKBBBALIE(CUDLR_Server_o *__this,JOCIOCLPIHI_o *OHKEKFCKBED,MethodInfo *method)

{
  System_Text_RegularExpressions_Match_o **ppSVar1;
  bool bVar2;
  System_Collections_Generic_List_DOJKMMDFBCJ__o *__this_00;
  Il2CppObject *pIVar3;
  System_Text_RegularExpressions_Match_o *__this_01;
  System_Net_HttpListenerRequest_o *pSVar4;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar5;
  System_Net_HttpListenerResponse_o *pSVar6;
  int index;
  void *pvVar7;
  System_String_o **ppSVar8;
  System_Text_RegularExpressions_Regex_o *__this_02;
  
  if ((DAT_04567db6 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_147);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_148);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DOJKMMDFBCJ>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DOJKMMDFBCJ>_get_Item__);
    DAT_04567db6 = 1;
  }
  if ((OHKEKFCKBED != (JOCIOCLPIHI_o *)0x0) &&
     (__this_00 = (__this->fields).CFGNLMNHGFL,
     __this_00 != (System_Collections_Generic_List_DOJKMMDFBCJ__o *)0x0)) {
    index = (OHKEKFCKBED->fields).FFEODAAHJLG;
    ppSVar1 = &(OHKEKFCKBED->fields).IAFNJPBIPAJ;
    while (index < (__this_00->fields)._size) {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<DOJKMMDFBCJ>_get_Item__);
      if (((pIVar3 == (Il2CppObject *)0x0) || (pIVar3[1].klass == (Il2CppClass *)0x0)) ||
         (__this_01 = System_Text_RegularExpressions_Regex__Match
                                ((System_Text_RegularExpressions_Regex_o *)pIVar3[1].klass,
                                 (OHKEKFCKBED->fields).AAIHDEKMIJG,(MethodInfo *)0x0),
         __this_01 == (System_Text_RegularExpressions_Match_o *)0x0)) goto LAB_034be100;
      bVar2 = System_Text_RegularExpressions_Group__get_Success
                        ((System_Text_RegularExpressions_Group_o *)__this_01,(MethodInfo *)0x0);
      if (bVar2) {
        __this_02 = pIVar3[1].monitor;
        pSVar4 = JOCIOCLPIHI__AEIKKFELIDK(OHKEKFCKBED,(MethodInfo *)0x0);
        if ((pSVar4 == (System_Net_HttpListenerRequest_o *)0x0) ||
           (__this_02 == (System_Text_RegularExpressions_Regex_o *)0x0)) goto LAB_034be100;
        bVar2 = System_Text_RegularExpressions_Regex__IsMatch
                          (__this_02,(pSVar4->fields).method,(MethodInfo *)0x0);
        if (bVar2) {
          *ppSVar1 = __this_01;
          thunk_FUN_01c20e04(ppSVar1,__this_01);
          pvVar7 = pIVar3[2].monitor;
          if (pvVar7 != (void *)0x0) {
            if (pvVar7 == (void *)0x0) goto LAB_034be100;
            (**(code **)((long)pvVar7 + 0x18))
                      (*(undefined8 *)((long)pvVar7 + 0x40),OHKEKFCKBED,
                       *(undefined8 *)((long)pvVar7 + 0x28));
          }
          if ((OHKEKFCKBED->fields).IPOHACONDOB == false) goto LAB_034be0d0;
        }
      }
      index = (OHKEKFCKBED->fields).FFEODAAHJLG + 1;
      (OHKEKFCKBED->fields).FFEODAAHJLG = index;
      __this_00 = (__this->fields).CFGNLMNHGFL;
      if (__this_00 == (System_Collections_Generic_List_DOJKMMDFBCJ__o *)0x0) goto LAB_034be100;
    }
    pSVar6 = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
    if (pSVar6 != (System_Net_HttpListenerResponse_o *)0x0) {
      System_Net_HttpListenerResponse__set_StatusCode(pSVar6,0x194,(MethodInfo *)0x0);
      pSVar6 = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_147,(MethodInfo *)0x0
                );
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_148,(MethodInfo *)0x0
                );
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      if (pSVar6 != (System_Net_HttpListenerResponse_o *)0x0) {
        ppSVar8 = &(pSVar6->fields).status_description;
        *ppSVar8 = pSVar5;
        thunk_FUN_01c20e04(ppSVar8,pSVar5);
LAB_034be0d0:
        pSVar6 = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
        if (pSVar6 != (System_Net_HttpListenerResponse_o *)0x0) {
          System_Net_HttpListenerResponse__Close(pSVar6,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_034be100:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

