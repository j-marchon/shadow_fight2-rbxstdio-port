// CUDLR.Server$$CFCJGDIMHBA @ RVA 0x33BFF7C

void CUDLR_Server__CFCJGDIMHBA
               (CUDLR_Server_o *__this,JOCIOCLPIHI_o *OHKEKFCKBED,bool INADPMLBJHN,
               System_String_o **AAIHDEKMIJG,System_String_o **ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  System_Text_RegularExpressions_Match_o *pSVar2;
  System_Text_RegularExpressions_GroupCollection_o *__this_00;
  System_Text_RegularExpressions_Group_o *__this_01;
  System_String_o *path2;
  System_Char_array *trimChars;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar3;
  
  if ((DAT_04567dc4 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_185);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_186);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    FUN_01bab630(&System_IO_Path_TypeInfo);
    DAT_04567dc4 = 1;
  }
  if ((OHKEKFCKBED != (JOCIOCLPIHI_o *)0x0) &&
     (pSVar2 = (OHKEKFCKBED->fields).IAFNJPBIPAJ,
     pSVar2 != (System_Text_RegularExpressions_Match_o *)0x0)) {
    pSVar3 = (__this->fields).OJJELBNHHKF;
    __this_00 = (System_Text_RegularExpressions_GroupCollection_o *)
                (*(pSVar2->klass->vtable)._5_get_Groups.methodPtr)
                          (pSVar2,(pSVar2->klass->vtable)._5_get_Groups.method);
    if ((__this_00 != (System_Text_RegularExpressions_GroupCollection_o *)0x0) &&
       (__this_01 = System_Text_RegularExpressions_GroupCollection__get_Item
                              (__this_00,1,(MethodInfo *)0x0),
       __this_01 != (System_Text_RegularExpressions_Group_o *)0x0)) {
      path2 = System_Text_RegularExpressions_Capture__get_Value
                        ((System_Text_RegularExpressions_Capture_o *)__this_01,(MethodInfo *)0x0);
      if ((System_IO_Path_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_IO_Path_TypeInfo);
      }
      pSVar3 = System_IO_Path__Combine(pSVar3,path2,(MethodInfo *)0x0);
      *AAIHDEKMIJG = pSVar3;
      thunk_FUN_01c20e04(AAIHDEKMIJG,pSVar3);
      pSVar3 = System_IO_Path__GetExtension(*AAIHDEKMIJG,(MethodInfo *)0x0);
      if (pSVar3 != (System_String_o *)0x0) {
        pSVar3 = System_String__ToLower(pSVar3,(MethodInfo *)0x0);
        trimChars = (System_Char_array *)FUN_01bab718(char___TypeInfo,1);
        if (trimChars != (System_Char_array *)0x0) {
          if ((int)trimChars->max_length == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          trimChars->m_Items[0] = 0x2e;
          if (pSVar3 != (System_String_o *)0x0) {
            pSVar3 = System_String__TrimStart(pSVar3,trimChars,(MethodInfo *)0x0);
            if (!INADPMLBJHN) {
              __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (__this->fields).ANOJBOHBEJJ;
              if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto LAB_034c018c;
              bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                                (__this_02,(Il2CppObject *)pSVar3,(Il2CppObject **)ACCIHBHMFPN,
                                 Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__
                                );
              if (bVar1) {
                return;
              }
            }
            MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)MOPNMEHIMFJ,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_185,
                       (MethodInfo *)0x0);
            LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)LFINFBNOLFG,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_186,
                       (MethodInfo *)0x0);
            pSVar3 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
            *ACCIHBHMFPN = pSVar3;
            thunk_FUN_01c20e04(ACCIHBHMFPN,pSVar3);
            return;
          }
        }
      }
    }
  }
LAB_034c018c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

