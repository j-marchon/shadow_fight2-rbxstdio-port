// BECIPDJBAOG$$FGMBOHECONG @ RVA 0x30D1F48

void BECIPDJBAOG__FGMBOHECONG
               (BECIPDJBAOG_o *__this,BECIPDJBAOG_o *IBKIPBJJCPG,bool CMBNNBBFJBC,MethodInfo *method
               )

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  System_Func_TSource__bool__o *pSVar3;
  Il2CppObject *pIVar4;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((DAT_0456630f & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<PIADCKMDDAK>__);
    FUN_01bab630(&System_Func<PIADCKMDDAK,_bool>_TypeInfo);
    FUN_01bab630(&Method_BECIPDJBAOG_KABKIJAMJNA_IOFCCBEEBKJ__);
    FUN_01bab630(&BECIPDJBAOG_KABKIJAMJNA_TypeInfo);
    FUN_01bab630(&Method_BECIPDJBAOG_NCFCIFGOMJB_AAOMFCHBHIA__);
    FUN_01bab630(&BECIPDJBAOG_NCFCIFGOMJB_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    DAT_0456630f = 1;
  }
  if ((IBKIPBJJCPG != (BECIPDJBAOG_o *)0x0) &&
     (pGVar5 = (IBKIPBJJCPG->fields).LEJBLHJFJHP,
     pGVar5 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) {
    iVar6 = 0;
    while (iVar6 < (pGVar5->fields).count) {
      pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(BECIPDJBAOG_KABKIJAMJNA_TypeInfo);
      System_Object___ctor(pIVar1,(MethodInfo *)0x0);
      pGVar5 = (IBKIPBJJCPG->fields).LEJBLHJFJHP;
      if ((pGVar5 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) ||
         (pIVar2 = (Il2CppClass *)
                   Google_Protobuf_Collections_RepeatedField<object>__get_Item
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar5,iVar6,
                              Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__
                             ), pIVar1 == (Il2CppObject *)0x0)) goto LAB_031d21d4;
      pIVar1 = pIVar1 + 1;
      pIVar1->klass = pIVar2;
      thunk_FUN_01c20e04(pIVar1,pIVar2);
      pGVar5 = (__this->fields).LEJBLHJFJHP;
      pSVar3 = (System_Func_TSource__bool__o *)
               thunk_FUN_01bda818(System_Func<PIADCKMDDAK,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      pIVar4 = System_Linq_Enumerable__FirstOrDefault<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pGVar5,pSVar3,
                          Method_System_Linq_Enumerable_FirstOrDefault<PIADCKMDDAK>__);
      if ((pIVar4 == (Il2CppObject *)0x0) || (CMBNNBBFJBC)) {
        pGVar5 = (__this->fields).LEJBLHJFJHP;
        if (pGVar5 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)
        goto LAB_031d21d4;
        Google_Protobuf_Collections_RepeatedField<object>__Add
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar5,
                   (Il2CppObject *)pIVar1->klass,
                   Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
      }
      else {
        if (pIVar1->klass == (Il2CppClass *)0x0) goto LAB_031d21d4;
        *(int *)&pIVar4[2].klass =
             *(int *)&(pIVar1->klass->_1).byval_arg.data + *(int *)&pIVar4[2].klass;
      }
      pGVar5 = (IBKIPBJJCPG->fields).LEJBLHJFJHP;
      iVar6 = iVar6 + 1;
      if (pGVar5 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)
      goto LAB_031d21d4;
    }
    pGVar5 = (IBKIPBJJCPG->fields).AKFPFIHIHOC;
    if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      iVar6 = 0;
      goto LAB_031d20fc;
    }
  }
  goto LAB_031d21d4;
  while( true ) {
    pIVar1 = pIVar1 + 1;
    pIVar1->klass = pIVar2;
    thunk_FUN_01c20e04(pIVar1,pIVar2);
    pGVar5 = (__this->fields).AKFPFIHIHOC;
    pSVar3 = (System_Func_TSource__bool__o *)
             thunk_FUN_01bda818(System_Func<PIADCKMDDAK,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    pIVar4 = System_Linq_Enumerable__FirstOrDefault<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pGVar5,pSVar3,
                        Method_System_Linq_Enumerable_FirstOrDefault<PIADCKMDDAK>__);
    if ((pIVar4 == (Il2CppObject *)0x0) || (CMBNNBBFJBC)) {
      pGVar5 = (__this->fields).AKFPFIHIHOC;
      if (pGVar5 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar5,
                 (Il2CppObject *)pIVar1->klass,
                 Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    }
    else {
      if (pIVar1->klass == (Il2CppClass *)0x0) break;
      *(int *)&pIVar4[2].klass =
           *(int *)&(pIVar1->klass->_1).byval_arg.data + *(int *)&pIVar4[2].klass;
    }
    pGVar5 = (IBKIPBJJCPG->fields).AKFPFIHIHOC;
    iVar6 = iVar6 + 1;
    if (pGVar5 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) break;
LAB_031d20fc:
    if ((pGVar5->fields).count <= iVar6) {
      uVar7 = (__this->fields).EMOLIBOCKJK;
      uVar8 = (__this->fields).NLLKMEMKBAF;
      uVar9 = (IBKIPBJJCPG->fields).EMOLIBOCKJK;
      uVar10 = (IBKIPBJJCPG->fields).NLLKMEMKBAF;
      (__this->fields).EMOLIBOCKJK = uVar9 + uVar7;
      (__this->fields).NLLKMEMKBAF = uVar10 + uVar8;
      return;
    }
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(BECIPDJBAOG_NCFCIFGOMJB_TypeInfo);
    System_Object___ctor(pIVar1,(MethodInfo *)0x0);
    pGVar5 = (IBKIPBJJCPG->fields).AKFPFIHIHOC;
    if ((pGVar5 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) ||
       (pIVar2 = (Il2CppClass *)
                 Google_Protobuf_Collections_RepeatedField<object>__get_Item
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar5,iVar6,
                            Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__
                           ), pIVar1 == (Il2CppObject *)0x0)) break;
  }
LAB_031d21d4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

