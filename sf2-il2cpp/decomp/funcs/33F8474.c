// CocosAnimation$$Init @ RVA 0x33F8474

bool CocosAnimation__Init
               (CocosAnimation_o *__this,System_String_o *EIJDDKJONFO,int32_t ACCIHBHMFPN,
               System_String_o *HOHFGLOFOJG,MethodInfo *method)

{
  int32_t length;
  int iVar1;
  int iVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Sprite_array *source;
  System_Func_TSource__bool__o *predicate;
  System_String_o *pSVar6;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  BMNKDDCJACM_o *pBVar7;
  System_Collections_Generic_List_Sprite__o *pSVar8;
  BMNKDDCJACM_o **ppBVar9;
  UnityEngine_GameObject_o **ppUVar10;
  UnityEngine_Object_o *x;
  UnityEngine_RectTransform_o **ppUVar11;
  float fVar12;
  System_Enum_o local_58;
  int32_t local_48;
  
  if ((DAT_04567f9e & 1) == 0) {
    FUN_01bab630(&Method_CocosAnimation_ALGFNMCNOIF_EHPIOCDLNEM__);
    FUN_01bab630(&CocosAnimation_ALGFNMCNOIF_TypeInfo);
    FUN_01bab630(&CocosAnimation_ELBHBMFFPKK_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<Sprite>__);
    FUN_01bab630(&System_Func<Sprite,_bool>_TypeInfo);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sprite>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sprite>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sprite>_get_Count__);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&StringLiteral_4336);
    DAT_04567f9e = 1;
  }
  pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(CocosAnimation_ALGFNMCNOIF_TypeInfo);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4 = pIVar4 + 1;
    pIVar4->klass = (Il2CppClass *)HOHFGLOFOJG;
    thunk_FUN_01c20e04(pIVar4,HOHFGLOFOJG);
    (__this->fields).CAFKGBHLMOI = ACCIHBHMFPN;
    pUVar5 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
      pUVar5 = (UnityEngine_RectTransform_o *)0x0;
    }
    else if (pUVar5->klass != UnityEngine_RectTransform_TypeInfo) {
      pUVar5 = (UnityEngine_RectTransform_o *)0x0;
    }
    ppUVar11 = &(__this->fields)._MPAMHJJKABE_k__BackingField;
    *ppUVar11 = pUVar5;
    thunk_FUN_01c20e04(ppUVar11);
    pSVar8 = (__this->fields).HKCNDNBLAHI;
    if (pSVar8 != (System_Collections_Generic_List_Sprite__o *)0x0) {
      length = (pSVar8->fields)._size;
      (pSVar8->fields)._size = 0;
      (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,length,(MethodInfo *)0x0);
      }
      if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      source = NGCBNMBJMOE__MMHFNAEHAKC(EIJDDKJONFO,ACCIHBHMFPN != 0,(MethodInfo *)0x0);
      if (source != (UnityEngine_Sprite_array *)0x0) {
        bVar3 = System_String__IsNullOrWhiteSpace
                          ((System_String_o *)pIVar4->klass,(MethodInfo *)0x0);
        pSVar8 = (__this->fields).HKCNDNBLAHI;
        if (!bVar3) {
          predicate = (System_Func_TSource__bool__o *)
                      thunk_FUN_01bda818(System_Func<Sprite,_bool>_TypeInfo);
          System_Func<object,_bool>___ctor();
          source = (UnityEngine_Sprite_array *)
                   System_Linq_Enumerable__Where<object>
                             ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                              Method_System_Linq_Enumerable_Where<Sprite>__);
        }
        if (pSVar8 == (System_Collections_Generic_List_Sprite__o *)0x0) goto LAB_034f8850;
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)pSVar8,
                   (System_Collections_Generic_IEnumerable_T__o *)source,
                   Method_System_Collections_Generic_List<Sprite>_AddRange__);
      }
      if ((__this->fields)._FEBBHCOAEMI_k__BackingField < 1) {
        (__this->fields)._FEBBHCOAEMI_k__BackingField = -1;
      }
      bVar3 = Util__KEJBDHBDGNI((__this->fields)._PPEGDOHGLJJ_k__BackingField,1e-10,
                                (MethodInfo *)0x0);
      if (bVar3) {
        (__this->fields)._PPEGDOHGLJJ_k__BackingField = 0.03;
      }
      pSVar8 = (__this->fields).HKCNDNBLAHI;
      if (pSVar8 != (System_Collections_Generic_List_Sprite__o *)0x0) {
        iVar1 = (pSVar8->fields)._size;
        if (iVar1 != 0) {
          ppUVar10 = &(__this->fields).KPLNDDMCNIH;
          x = (UnityEngine_Object_o *)*ppUVar10;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            local_58.klass = (System_Enum_c *)CocosAnimation_ELBHBMFFPKK_TypeInfo;
            local_58.monitor = (void *)0xffffffffffffffff;
            local_48 = ACCIHBHMFPN;
            pSVar6 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
            pSVar6 = System_String__Concat(StringLiteral_4336,pSVar6,(MethodInfo *)0x0);
            __this_00 = (UnityEngine_GameObject_o *)
                        thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
            UnityEngine_GameObject___ctor(__this_00,pSVar6,(MethodInfo *)0x0);
            *ppUVar10 = __this_00;
            thunk_FUN_01c20e04(ppUVar10,__this_00);
            if (*ppUVar10 == (UnityEngine_GameObject_o *)0x0) goto LAB_034f8850;
            __this_01 = UnityEngine_GameObject__get_transform(*ppUVar10,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_034f8850;
            UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
            pBVar7 = BMNKDDCJACM__EOHMFJFFFIN
                               ((__this->fields).KPLNDDMCNIH,ACCIHBHMFPN == 0,(MethodInfo *)0x0);
            ppBVar9 = &(__this->fields).CAOKGHKPFAE;
            *ppBVar9 = pBVar7;
            thunk_FUN_01c20e04(ppBVar9,pBVar7);
            pBVar7 = *ppBVar9;
            if (pBVar7 == (BMNKDDCJACM_o *)0x0) goto LAB_034f8850;
            fVar12 = (float)(*(code *)pBVar7->klass[1]._1.name)
                                      (pBVar7,pBVar7->klass[1]._1.namespaze);
            (__this->fields).ABPCDFJHJCM = fVar12;
          }
          pSVar8 = (__this->fields).HKCNDNBLAHI;
          (__this->fields).FJJPFEGPEFA = 0;
          (__this->fields).PAGAGEMKILK = 0;
          if (pSVar8 == (System_Collections_Generic_List_Sprite__o *)0x0) goto LAB_034f8850;
          iVar2 = (pSVar8->fields)._size;
          (__this->fields)._JJCDMHFHJAB_k__BackingField = true;
          (__this->fields)._BNKDPKMAPPM_k__BackingField = iVar2;
          (__this->fields).OFNNCOJAFJB = iVar2 + -1;
        }
        return iVar1 != 0;
      }
    }
  }
LAB_034f8850:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

