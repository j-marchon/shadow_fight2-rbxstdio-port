// PNGKLCHKPEO$$GHNDNCOCIPC @ RVA 0x31E5068

PNGKLCHKPEO_LGAFLKDKBPL_o *
PNGKLCHKPEO__GHNDNCOCIPC(PNGKLCHKPEO_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  uint uVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  PNGKLCHKPEO_LGAFLKDKBPL_o *pPVar4;
  undefined8 uVar5;
  MethodInfo *in_x3;
  NJPBHDMCLIN_KLLGIFHMMIP_o *pNVar6;
  System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o **ppSVar7;
  System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *__this_00;
  int index;
  GBJGJEGPHKD_o *pGVar8;
  int32_t local_24;
  
  if ((DAT_04566d59 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LCAJGLLBBEC_ELJAALFNLIP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_5428);
    FUN_01bab630(&StringLiteral_5427);
    DAT_04566d59 = 1;
  }
  if ((AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) ||
     (pNVar6 = (AHEFOIOKDOK->fields).BEMCNJHEADJ, pNVar6 == (NJPBHDMCLIN_KLLGIFHMMIP_o *)0x0))
  goto LAB_032e52c8;
  uVar1 = (__this->fields).LOAFPIOGJAF;
  if (uVar1 < 7) {
    pGVar8 = (pNVar6->fields).DBFCHBBKIHK;
    switch(uVar1) {
    default:
      if ((AHEFOIOKDOK->fields).HJPOJOPKEKI == false) goto LAB_032e5130;
LAB_032e5120:
      ppSVar7 = &(__this->fields).EFNHMHALHPE;
      break;
    case 2:
      if ((AHEFOIOKDOK->fields).HJPOJOPKEKI == false) goto LAB_032e5120;
LAB_032e5130:
      ppSVar7 = &(__this->fields).PCHEGEBOKAF;
      break;
    case 3:
      if ((AHEFOIOKDOK->fields).HJPOJOPKEKI != false) {
        return (__this->fields).BEMCNJHEADJ;
      }
      return (__this->fields).JPJMGEPBOOP;
    case 4:
    case 5:
      goto switchD_032e5114_caseD_4;
    case 6:
      lVar3 = 0x48;
      if ((AHEFOIOKDOK->fields).HJPOJOPKEKI != false) {
        lVar3 = 0x50;
      }
      pPVar4 = PNGKLCHKPEO__OKODHBNONJA
                         (__this,AHEFOIOKDOK,
                          *(System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o **)
                           ((long)&__this->klass + lVar3),in_x3);
      return pPVar4;
    }
    __this_00 = *ppSVar7;
    if (__this_00 == (System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *)0x0) {
LAB_032e52c8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (0 < (__this_00->fields)._size) {
      index = 0;
      do {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_get_Item__
                           );
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_032e52c8;
        if (pIVar2[1].monitor == pGVar8) {
          pIVar2 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,
                              Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_get_Item__
                             );
          if (pIVar2 != (Il2CppObject *)0x0) {
            return (PNGKLCHKPEO_LGAFLKDKBPL_o *)pIVar2[1].klass;
          }
          goto LAB_032e52c8;
        }
        index = index + 1;
      } while (index < (__this_00->fields)._size);
    }
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_5427,(MethodInfo *)0x0);
  }
  else {
switchD_032e5114_caseD_4:
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_24 = (__this->fields).LOAFPIOGJAF;
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(LCAJGLLBBEC_ELJAALFNLIP_TypeInfo,&local_24);
    if (args == (System_Object_array *)0x0) goto LAB_032e52c8;
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
      uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar5,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = pIVar2;
    thunk_FUN_01c20e04(args->m_Items,pIVar2);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_5428,args,(MethodInfo *)0x0);
  }
  return (PNGKLCHKPEO_LGAFLKDKBPL_o *)0x0;
}

