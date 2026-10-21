// PNGKLCHKPEO$$AGNJJGHIJJE @ RVA 0x31E5A98

UnityEngine_Vector2_o
PNGKLCHKPEO__AGNJJGHIJJE
          (PNGKLCHKPEO_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,NJPBHDMCLIN_KLLGIFHMMIP_o *GKCJAGLEGPC,
          MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  System_Object_array *args;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  int32_t iVar7;
  UnityEngine_Vector2_o UVar8;
  int32_t local_24;
  
  if ((DAT_04566d5d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LCAJGLLBBEC_ELJAALFNLIP_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_5570);
    DAT_04566d5d = 1;
  }
  uVar2 = (__this->fields).LOAFPIOGJAF;
  if (uVar2 < 2) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_032e5c14;
    iVar7 = (AHEFOIOKDOK->fields).FOJEHKCDKFH;
  }
  else if (uVar2 == 2) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_032e5c14;
    iVar7 = (AHEFOIOKDOK->fields).HIHFGHGCMKH;
  }
  else if (uVar2 == 3) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_032e5c14;
    iVar7 = (AHEFOIOKDOK->fields).KBBLBDCCAGA;
  }
  else {
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_24 = (__this->fields).LOAFPIOGJAF;
    pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(LCAJGLLBBEC_ELJAALFNLIP_TypeInfo,&local_24);
    if (args == (System_Object_array *)0x0) goto LAB_032e5c14;
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0)) {
      uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar6,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = pIVar4;
    thunk_FUN_01c20e04(args->m_Items,pIVar4);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_5570,args,(MethodInfo *)0x0);
    iVar7 = 0;
  }
  if (GKCJAGLEGPC != (NJPBHDMCLIN_KLLGIFHMMIP_o *)0x0) {
    bVar3 = (__this->fields).GCOJOACAHJA != 0 < iVar7;
    lVar5 = 0x10;
    if (bVar3) {
      lVar5 = 0x18;
    }
    lVar1 = 0x14;
    if (bVar3) {
      lVar1 = 0x1c;
    }
    UVar8.fields.y = *(float *)((long)&GKCJAGLEGPC->klass + lVar1);
    UVar8.fields.x = *(float *)((long)&GKCJAGLEGPC->klass + lVar5);
    return (UnityEngine_Vector2_o)UVar8.fields;
  }
LAB_032e5c14:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

