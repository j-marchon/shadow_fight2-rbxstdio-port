// KOGMOACEOAM$$IDKLPIGHDGI @ RVA 0x32EA204

int32_t KOGMOACEOAM__IDKLPIGHDGI
                  (KOGMOACEOAM_o *__this,System_String_o *BCPAFBNLBDE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar2;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  ECENNHNBAME_o *pEVar5;
  int index;
  
  if ((DAT_04567634 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_18747);
    DAT_04567634 = 1;
  }
  __this_00 = (__this->fields).KBPGCNCNJAG;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        if ((__this->fields).OAKOFJJIOFF == (ECENNHNBAME_o *)0x0) {
          return -1;
        }
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
        if (args == (System_Object_array *)0x0) break;
        if ((BCPAFBNLBDE != (System_String_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(BCPAFBNLBDE,(((args->obj).klass)->_1).element_class),
           lVar3 == 0)) {
LAB_033ea398:
          uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar4,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)BCPAFBNLBDE;
          thunk_FUN_01c20e04(args->m_Items,BCPAFBNLBDE);
          pEVar5 = (__this->fields).OAKOFJJIOFF;
          if (pEVar5 == (ECENNHNBAME_o *)0x0) break;
          pSVar2 = (pEVar5->fields).JIJLBFGKNJK;
          if ((pSVar2 != (System_String_o *)0x0) &&
             (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0
             )) goto LAB_033ea398;
          if (1 < (uint)args->max_length) {
            args->m_Items[1] = (Il2CppObject *)pSVar2;
            thunk_FUN_01c20e04(args->m_Items + 1,pSVar2);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogErrorFormat(StringLiteral_18747,args,(MethodInfo *)0x0);
            return -1;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pSVar2 = (System_String_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<string>_get_Item__);
      bVar1 = System_String__op_Equality(BCPAFBNLBDE,pSVar2,(MethodInfo *)0x0);
      if (bVar1) {
        return index;
      }
      __this_00 = (__this->fields).KBPGCNCNJAG;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_string__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

