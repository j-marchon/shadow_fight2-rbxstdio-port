// TypeDefIndex 1763
// Namespace: 
// public class PNGKLCHKPEO
// Fields:
//   public LCAJGLLBBEC.ELJAALFNLIP LOAFPIOGJAF; // 0x10
//   public PNGKLCHKPEO.NOLNDEAFBEL AKBDFFLEINL; // 0x14
//   public PNGKLCHKPEO.JOFIFGCDGBE JNLOFJLAOFM; // 0x18
//   private string HLKOPFFIMPF; // 0x20
//   public string HLMDCHDDELG; // 0x28
//   public bool GCOJOACAHJA; // 0x30
//   private FKGKLILLOBG PHBEOHIEDOP; // 0x38
//   private FKGKLILLOBG KIFDEDHNJCA; // 0x40
//   private List<PNGKLCHKPEO.PLCIDMPOECL> EFNHMHALHPE; // 0x48
//   private List<PNGKLCHKPEO.PLCIDMPOECL> PCHEGEBOKAF; // 0x50
//   private PNGKLCHKPEO.LGAFLKDKBPL JPJMGEPBOOP; // 0x58
//   private PNGKLCHKPEO.LGAFLKDKBPL BEMCNJHEADJ; // 0x60

// ===== private PNGKLCHKPEO.LGAFLKDKBPL GHNDNCOCIPC(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x31E5068]
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
    FUN_01bab630(&StringLiteral_5428/*"DistancePoint: getChildPointNode - wrong type: {0}"*/);
    FUN_01bab630(&StringLiteral_5427/*"DistancePoint: getChildPointNode - no child found"*/);
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
    UnityEngine_Debug__LogError(StringLiteral_5427/*"DistancePoint: getChildPointNode - no child found"*/,(MethodInfo *)0x0);
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
    UnityEngine_Debug__LogErrorFormat(StringLiteral_5428/*"DistancePoint: getChildPointNode - wrong type: {0}"*/,args,(MethodInfo *)0x0);
  }
  return (PNGKLCHKPEO_LGAFLKDKBPL_o *)0x0;
}


// ===== private IEFEBEDLHNN IFFHCBKGMKC(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x31E5598]
// PNGKLCHKPEO$$IFFHCBKGMKC @ RVA 0x31E5598

IEFEBEDLHNN_o *
PNGKLCHKPEO__IFFHCBKGMKC(PNGKLCHKPEO_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  PNGKLCHKPEO_LGAFLKDKBPL_o *pPVar1;
  IEFEBEDLHNN_o *pIVar2;
  
  pPVar1 = PNGKLCHKPEO__NHADNNDDNGI(__this,AHEFOIOKDOK,method);
  pIVar2 = (IEFEBEDLHNN_o *)0x0;
  if (pPVar1 != (PNGKLCHKPEO_LGAFLKDKBPL_o *)0x0) {
    pIVar2 = (pPVar1->fields).JHFENACKNPG;
  }
  return pIVar2;
}


// ===== protected PNGKLCHKPEO.LGAFLKDKBPL NHADNNDDNGI(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x31E55B0]
// PNGKLCHKPEO$$NHADNNDDNGI @ RVA 0x31E55B0

PNGKLCHKPEO_LGAFLKDKBPL_o *
PNGKLCHKPEO__NHADNNDDNGI(PNGKLCHKPEO_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  int iVar1;
  PNGKLCHKPEO_LGAFLKDKBPL_o *pPVar2;
  System_Object_array *args;
  Il2CppObject *pIVar3;
  long lVar4;
  undefined8 uVar5;
  MethodInfo *in_x3;
  int32_t local_24;
  
  if ((DAT_04566d5a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LCAJGLLBBEC_ELJAALFNLIP_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_5430/*"DistancePoint: getPointNode - taking parent from base model"*/);
    FUN_01bab630(&StringLiteral_5431/*"DistancePoint: getPointNode - wrong type: {0}"*/);
    DAT_04566d5a = 1;
  }
  if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_032e5794;
  iVar1 = (__this->fields).LOAFPIOGJAF;
  if ((AHEFOIOKDOK->fields).ANOKHPAKKON == false) {
    switch(iVar1) {
    case 0:
    case 1:
      if ((AHEFOIOKDOK->fields).HJPOJOPKEKI != false) goto LAB_032e5668;
      goto LAB_032e5634;
    case 2:
      goto switchD_032e565c_caseD_2;
    case 3:
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_5430/*"DistancePoint: getPointNode - taking parent from base model"*/,(MethodInfo *)0x0);
    default:
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      local_24 = (__this->fields).LOAFPIOGJAF;
      pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(LCAJGLLBBEC_ELJAALFNLIP_TypeInfo,&local_24);
      if (args == (System_Object_array *)0x0) {
LAB_032e5794:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (lVar4 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
        uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar5,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = pIVar3;
      thunk_FUN_01c20e04(args->m_Items,pIVar3);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_5431/*"DistancePoint: getPointNode - wrong type: {0}"*/,args,(MethodInfo *)0x0);
      pPVar2 = (PNGKLCHKPEO_LGAFLKDKBPL_o *)0x0;
      break;
    case 6:
      lVar4 = 0x48;
      if ((AHEFOIOKDOK->fields).HJPOJOPKEKI != false) {
        lVar4 = 0x50;
      }
      pPVar2 = PNGKLCHKPEO__OKODHBNONJA
                         (__this,AHEFOIOKDOK,
                          *(System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o **)
                           ((long)&__this->klass + lVar4),in_x3);
      return pPVar2;
    }
  }
  else {
    if (iVar1 != 2) {
      pPVar2 = PNGKLCHKPEO__GHNDNCOCIPC(__this,AHEFOIOKDOK,method);
      return pPVar2;
    }
switchD_032e565c_caseD_2:
    if ((AHEFOIOKDOK->fields).HJPOJOPKEKI == false) {
LAB_032e5668:
      return (__this->fields).BEMCNJHEADJ;
    }
LAB_032e5634:
    pPVar2 = (__this->fields).JPJMGEPBOOP;
  }
  return pPVar2;
}


// ===== public void .ctor()  [RVA 0x31E57A8]
// PNGKLCHKPEO$$.ctor @ RVA 0x31E57A8

void PNGKLCHKPEO___ctor(PNGKLCHKPEO_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *pSVar1;
  System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o **ppSVar2;
  PNGKLCHKPEO_LGAFLKDKBPL_o *pPVar3;
  PNGKLCHKPEO_LGAFLKDKBPL_o **ppPVar4;
  FKGKLILLOBG_o *pFVar5;
  FKGKLILLOBG_o **ppFVar6;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d5b & 1) == 0) {
    FUN_01bab630(&FKGKLILLOBG_TypeInfo);
    FUN_01bab630(&PNGKLCHKPEO_LGAFLKDKBPL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_TypeInfo);
    DAT_04566d5b = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_TypeInfo,
                              method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>__ctor__);
  ppSVar2 = &(__this->fields).EFNHMHALHPE;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>__ctor__);
  ppSVar2 = &(__this->fields).PCHEGEBOKAF;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pPVar3 = (PNGKLCHKPEO_LGAFLKDKBPL_o *)thunk_FUN_01bda818(PNGKLCHKPEO_LGAFLKDKBPL_TypeInfo);
  PNGKLCHKPEO_LGAFLKDKBPL___ctor(pPVar3,(MethodInfo *)0x0);
  ppPVar4 = &(__this->fields).JPJMGEPBOOP;
  *ppPVar4 = pPVar3;
  thunk_FUN_01c20e04(ppPVar4,pPVar3);
  pPVar3 = (PNGKLCHKPEO_LGAFLKDKBPL_o *)thunk_FUN_01bda818(PNGKLCHKPEO_LGAFLKDKBPL_TypeInfo);
  PNGKLCHKPEO_LGAFLKDKBPL___ctor(pPVar3,(MethodInfo *)0x0);
  ppPVar4 = &(__this->fields).BEMCNJHEADJ;
  *ppPVar4 = pPVar3;
  thunk_FUN_01c20e04(ppPVar4,pPVar3);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).GCOJOACAHJA = false;
  (__this->fields).LOAFPIOGJAF = 0;
  (__this->fields).AKBDFFLEINL = 0;
  (__this->fields).JNLOFJLAOFM = 0;
  pFVar5 = (FKGKLILLOBG_o *)thunk_FUN_01bda818(FKGKLILLOBG_TypeInfo);
  FKGKLILLOBG___ctor(pFVar5,0.0,(MethodInfo *)0x0);
  ppFVar6 = &(__this->fields).PHBEOHIEDOP;
  *ppFVar6 = pFVar5;
  thunk_FUN_01c20e04(ppFVar6,pFVar5);
  pFVar5 = (FKGKLILLOBG_o *)thunk_FUN_01bda818(FKGKLILLOBG_TypeInfo);
  FKGKLILLOBG___ctor(pFVar5,0.0,(MethodInfo *)0x0);
  ppFVar6 = &(__this->fields).KIFDEDHNJCA;
  *ppFVar6 = pFVar5;
  thunk_FUN_01c20e04(ppFVar6,pFVar5);
  return;
}


// ===== protected NJPBHDMCLIN.KLLGIFHMMIP JHBMNNPHEPD(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x31E5928]
// PNGKLCHKPEO$$JHBMNNPHEPD @ RVA 0x31E5928

NJPBHDMCLIN_KLLGIFHMMIP_o *
PNGKLCHKPEO__JHBMNNPHEPD(PNGKLCHKPEO_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  int32_t local_24;
  
  if ((DAT_04566d5c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LCAJGLLBBEC_ELJAALFNLIP_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_5569/*"ERROR: DistancePoint.DistanceObject.getPosition - unknown model: {0}"*/);
    DAT_04566d5c = 1;
  }
  switch((__this->fields).LOAFPIOGJAF) {
  case 0:
  case 1:
    goto joined_r0x032e5a60;
  case 2:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).PFFLOCBGFCH;
    }
    break;
  case 3:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).PFDEJKDOAGL;
    }
    break;
  default:
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_24 = (__this->fields).LOAFPIOGJAF;
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(LCAJGLLBBEC_ELJAALFNLIP_TypeInfo,&local_24);
    if (args == (System_Object_array *)0x0) break;
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
      uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = pIVar1;
    thunk_FUN_01c20e04(args->m_Items,pIVar1);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_5569/*"ERROR: DistancePoint.DistanceObject.getPosition - unknown model: {0}"*/,args,(MethodInfo *)0x0);
joined_r0x032e5a60:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).BEMCNJHEADJ;
    }
    break;
  case 6:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).EBLHLNKKBEO;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected Vector2 AGNJJGHIJJE(NJPBHDMCLIN AHEFOIOKDOK, NJPBHDMCLIN.KLLGIFHMMIP GKCJAGLEGPC)  [RVA 0x31E5A98]
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
    FUN_01bab630(&StringLiteral_5570/*"ERROR: DistancePoint::getPosition - unknown model: {0}"*/);
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
    UnityEngine_Debug__LogErrorFormat(StringLiteral_5570/*"ERROR: DistancePoint::getPosition - unknown model: {0}"*/,args,(MethodInfo *)0x0);
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


// ===== public virtual void EOHMFJFFFIN(XmlNode AHDGNOJPPIB)  [RVA 0x31E5C28]
// PNGKLCHKPEO$$EOHMFJFFFIN @ RVA 0x31E5C28

void PNGKLCHKPEO__EOHMFJFFFIN
               (PNGKLCHKPEO_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  FKGKLILLOBG_o *pFVar6;
  FKGKLILLOBG_o **ppFVar7;
  System_String_o **ppSVar8;
  
  if ((DAT_04566d5e & 1) == 0) {
    FUN_01bab630(&FKGKLILLOBG_TypeInfo);
    FUN_01bab630(&StringLiteral_11994/*"ShiftX"*/);
    FUN_01bab630(&StringLiteral_4334/*"ChildSkeletSybType"*/);
    FUN_01bab630(&StringLiteral_6575/*"Frame"*/);
    FUN_01bab630(&StringLiteral_10451/*"Previous"*/);
    FUN_01bab630(&StringLiteral_3359/*"Back"*/);
    FUN_01bab630(&StringLiteral_10150/*"Part"*/);
    FUN_01bab630(&StringLiteral_9697/*"Object"*/);
    FUN_01bab630(&StringLiteral_10305/*"Player"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_9638/*"Null"*/);
    FUN_01bab630(&StringLiteral_11995/*"ShiftY"*/);
    DAT_04566d5e = 1;
  }
  pSVar5 = StringLiteral_9638/*"Null"*/;
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_032e6008;
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_10305/*"Player"*/,(MethodInfo *)0x0);
    pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_9638/*"Null"*/,(MethodInfo *)0x0);
  }
  iVar2 = LCAJGLLBBEC__HGMMJIIEOLF(pSVar5,(MethodInfo *)0x0);
  if (__this != (PNGKLCHKPEO_o *)0x0) {
    (__this->fields).LOAFPIOGJAF = iVar2;
    if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
      pSVar4 = (System_Xml_XmlAttribute_o *)0x0;
    }
    else {
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_032e6008;
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9697/*"Object"*/,(MethodInfo *)0x0);
    }
    pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    iVar2 = CMCJGLAABFO__ENNCOIHDFKP(1,pSVar5,(MethodInfo *)0x0);
    (__this->fields).AKBDFFLEINL = iVar2;
    if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
      pSVar4 = (System_Xml_XmlAttribute_o *)0x0;
    }
    else {
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_032e6008;
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_10150/*"Part"*/,(MethodInfo *)0x0);
    }
    pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    ppSVar8 = &(__this->fields).HLMDCHDDELG;
    *ppSVar8 = pSVar5;
    thunk_FUN_01c20e04(ppSVar8,pSVar5);
    if ((__this->fields).AKBDFFLEINL == 3) {
      bVar1 = System_String__op_Equality
                        ((__this->fields).HLMDCHDDELG,StringLiteral_3359/*"Back"*/,(MethodInfo *)0x0);
      (__this->fields).GCOJOACAHJA = bVar1;
    }
    (__this->fields).JNLOFJLAOFM = 1;
    if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_032e6008;
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_6575/*"Frame"*/,(MethodInfo *)0x0);
      if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar5,StringLiteral_10451/*"Previous"*/,(MethodInfo *)0x0);
        if (bVar1) {
          (__this->fields).JNLOFJLAOFM = 2;
        }
      }
    }
    if (((__this->fields).LOAFPIOGJAF | 2U) == 6) {
      if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
         (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
         pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_032e6008;
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_4334/*"ChildSkeletSybType"*/,(MethodInfo *)0x0);
      pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).HLKOPFFIMPF = pSVar5;
      thunk_FUN_01c20e04();
    }
    else if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
      pFVar6 = (FKGKLILLOBG_o *)thunk_FUN_01bda818(FKGKLILLOBG_TypeInfo);
      FKGKLILLOBG___ctor(pFVar6,(System_String_o *)0x0,0.0,(MethodInfo *)0x0);
      ppFVar7 = &(__this->fields).PHBEOHIEDOP;
      *ppFVar7 = pFVar6;
      thunk_FUN_01c20e04(ppFVar7,pFVar6);
      pSVar5 = (System_String_o *)0x0;
      goto LAB_032e5f9c;
    }
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_11994/*"ShiftX"*/,(MethodInfo *)0x0);
      pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
      pFVar6 = (FKGKLILLOBG_o *)thunk_FUN_01bda818(FKGKLILLOBG_TypeInfo);
      FKGKLILLOBG___ctor(pFVar6,pSVar5,0.0,(MethodInfo *)0x0);
      ppFVar7 = &(__this->fields).PHBEOHIEDOP;
      *ppFVar7 = pFVar6;
      thunk_FUN_01c20e04(ppFVar7,pFVar6);
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_11995/*"ShiftY"*/,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
LAB_032e5f9c:
        pFVar6 = (FKGKLILLOBG_o *)thunk_FUN_01bda818(FKGKLILLOBG_TypeInfo);
        FKGKLILLOBG___ctor(pFVar6,pSVar5,0.0,(MethodInfo *)0x0);
        ppFVar7 = &(__this->fields).KIFDEDHNJCA;
        *ppFVar7 = pFVar6;
        thunk_FUN_01c20e04(ppFVar7,pFVar6);
        return;
      }
    }
  }
LAB_032e6008:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected CNDPAJOLKFN AKHHLNDNHGF(IEFEBEDLHNN AHDGNOJPPIB)  [RVA 0x31E600C]
// PNGKLCHKPEO$$AKHHLNDNHGF @ RVA 0x31E600C

CNDPAJOLKFN_o *
PNGKLCHKPEO__AKHHLNDNHGF(PNGKLCHKPEO_o *__this,IEFEBEDLHNN_o *AHDGNOJPPIB,MethodInfo *method)

{
  int iVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  CNDPAJOLKFN_o *pCVar4;
  undefined8 uVar5;
  int32_t local_24;
  
  if ((DAT_04566d5f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&PNGKLCHKPEO_JOFIFGCDGBE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_5432/*"DistancePoint: getPositionFrame - unknown frame: {0}"*/);
    DAT_04566d5f = 1;
  }
  iVar1 = (__this->fields).JNLOFJLAOFM;
  if (iVar1 == 2) {
    if (AHDGNOJPPIB == (IEFEBEDLHNN_o *)0x0) goto LAB_032e6140;
    pCVar4 = (AHDGNOJPPIB->fields).BJKKHONDAKP;
  }
  else {
    if (iVar1 != 1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      local_24 = (__this->fields).JNLOFJLAOFM;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(PNGKLCHKPEO_JOFIFGCDGBE_TypeInfo,&local_24);
      if (args == (System_Object_array *)0x0) goto LAB_032e6140;
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
      UnityEngine_Debug__LogErrorFormat(StringLiteral_5432/*"DistancePoint: getPositionFrame - unknown frame: {0}"*/,args,(MethodInfo *)0x0);
    }
    if (AHDGNOJPPIB == (IEFEBEDLHNN_o *)0x0) {
LAB_032e6140:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pCVar4 = (AHDGNOJPPIB->fields).CNMHHKAMGPI;
  }
  return pCVar4;
}


// ===== public virtual float HKDKDDHELEB(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x31E6154]
// PNGKLCHKPEO$$HKDKDDHELEB @ RVA 0x31E6154

float PNGKLCHKPEO__HKDKDDHELEB(PNGKLCHKPEO_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  float in_s2;
  
  (*(__this->klass->vtable)._7_KILOIOEILFL.methodPtr)
            (__this,AHEFOIOKDOK,(__this->klass->vtable)._7_KILOIOEILFL.method);
  return in_s2;
}


// ===== public void EOHMFJFFFIN(string ODEBMINEHOC, string FOBBLEELKOM, string JNBKCMLPDAE)  [RVA 0x31E6170]
// PNGKLCHKPEO$$EOHMFJFFFIN @ RVA 0x31E6170

void PNGKLCHKPEO__EOHMFJFFFIN
               (PNGKLCHKPEO_o *__this,System_String_o *ODEBMINEHOC,System_String_o *FOBBLEELKOM,
               System_String_o *JNBKCMLPDAE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  FKGKLILLOBG_o *pFVar3;
  FKGKLILLOBG_o **ppFVar4;
  
  if ((DAT_04566d60 & 1) == 0) {
    FUN_01bab630(&FKGKLILLOBG_TypeInfo);
    FUN_01bab630(&StringLiteral_10451/*"Previous"*/);
    FUN_01bab630(&StringLiteral_3359/*"Back"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566d60 = 1;
  }
  iVar2 = LCAJGLLBBEC__HGMMJIIEOLF(ODEBMINEHOC,(MethodInfo *)0x0);
  (__this->fields).LOAFPIOGJAF = iVar2;
  iVar2 = CMCJGLAABFO__ENNCOIHDFKP(1,FOBBLEELKOM,(MethodInfo *)0x0);
  (__this->fields).AKBDFFLEINL = iVar2;
  if (iVar2 == 3) {
    bVar1 = System_String__op_Equality(JNBKCMLPDAE,StringLiteral_3359/*"Back"*/,(MethodInfo *)0x0);
    (__this->fields).GCOJOACAHJA = bVar1;
  }
  (__this->fields).JNLOFJLAOFM = 1;
  bVar1 = System_String__op_Equality(StringLiteral_1/*""*/,StringLiteral_10451/*"Previous"*/,(MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields).JNLOFJLAOFM = 2;
  }
  pFVar3 = (FKGKLILLOBG_o *)thunk_FUN_01bda818(FKGKLILLOBG_TypeInfo);
  FKGKLILLOBG___ctor(pFVar3,0.0,(MethodInfo *)0x0);
  ppFVar4 = &(__this->fields).PHBEOHIEDOP;
  *ppFVar4 = pFVar3;
  thunk_FUN_01c20e04(ppFVar4,pFVar3);
  pFVar3 = (FKGKLILLOBG_o *)thunk_FUN_01bda818(FKGKLILLOBG_TypeInfo);
  FKGKLILLOBG___ctor(pFVar3,0.0,(MethodInfo *)0x0);
  ppFVar4 = &(__this->fields).KIFDEDHNJCA;
  *ppFVar4 = pFVar3;
  thunk_FUN_01c20e04(ppFVar4,pFVar3);
  return;
}


// ===== public virtual float LHPFGLOFHBL(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x31E62BC]
// PNGKLCHKPEO$$LHPFGLOFHBL @ RVA 0x31E62BC

float PNGKLCHKPEO__LHPFGLOFHBL(PNGKLCHKPEO_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  float in_s1;
  
  (*(__this->klass->vtable)._7_KILOIOEILFL.methodPtr)
            (__this,AHEFOIOKDOK,(__this->klass->vtable)._7_KILOIOEILFL.method);
  return -in_s1;
}


// ===== public virtual Vector3 KILOIOEILFL(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x31E62D8]
// PNGKLCHKPEO$$KILOIOEILFL @ RVA 0x31E62D8

UnityEngine_Vector3_o
PNGKLCHKPEO__KILOIOEILFL(PNGKLCHKPEO_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  MethodInfo *method_00;
  PNGKLCHKPEO_LGAFLKDKBPL_o *pPVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  IEFEBEDLHNN_o *pIVar4;
  PKHLGDMJPMF_o *pPVar5;
  CNDPAJOLKFN_o *pCVar6;
  FKGKLILLOBG_o *pFVar7;
  undefined8 uVar8;
  MethodInfo *in_x3;
  UnityEngine_Vector3_StaticFields *pUVar9;
  FCJBEKHDLAF_o *pFVar10;
  NHBBOEHHEKG_o *__this_00;
  float fVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector2_o UVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o UVar18;
  int32_t local_24;
  
  if ((DAT_04566d61 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&PNGKLCHKPEO_NOLNDEAFBEL_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_5597/*"ERROR: unknown object type: {0}"*/);
    DAT_04566d61 = 1;
  }
  method_00 = (MethodInfo *)PNGKLCHKPEO__JHBMNNPHEPD(__this,AHEFOIOKDOK,method);
  switch((__this->fields).AKBDFFLEINL) {
  case 1:
    pPVar1 = PNGKLCHKPEO__NHADNNDDNGI(__this,AHEFOIOKDOK,method_00);
    fVar15 = 0.0;
    if (pPVar1 == (PNGKLCHKPEO_LGAFLKDKBPL_o *)0x0) {
      fVar12 = 0.0;
    }
    else {
      pIVar4 = (pPVar1->fields).JHFENACKNPG;
      fVar12 = 0.0;
      fVar15 = 0.0;
      if (pIVar4 != (IEFEBEDLHNN_o *)0x0) {
        pCVar6 = PNGKLCHKPEO__AKHHLNDNHGF(__this,pIVar4,method_00);
        UVar17 = CNDPAJOLKFN__ALBJPLAPOBO(pCVar6,(MethodInfo *)0x0);
        fVar12 = UVar17.fields.y;
        fVar15 = UVar17.fields.x;
      }
    }
    pFVar7 = (__this->fields).PHBEOHIEDOP;
    if (((pFVar7 == (FKGKLILLOBG_o *)0x0) ||
        (fVar14 = FKGKLILLOBG__PPOKEOHAHFG(pFVar7,AHEFOIOKDOK,(MethodInfo *)0x0),
        AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0)) ||
       (pFVar7 = (__this->fields).KIFDEDHNJCA, pFVar7 == (FKGKLILLOBG_o *)0x0)) goto LAB_032e67b4;
    fVar15 = fVar15 + fVar14 * (float)(AHEFOIOKDOK->fields).FOJEHKCDKFH;
    fVar14 = FKGKLILLOBG__PPOKEOHAHFG(pFVar7,AHEFOIOKDOK,(MethodInfo *)0x0);
    fVar12 = fVar12 - fVar14;
    fVar14 = 0.0;
    goto LAB_032e6794;
  case 2:
    pIVar4 = PNGKLCHKPEO__FNBPOBHFGHG(__this,AHEFOIOKDOK,method_00);
    if (pIVar4 == (IEFEBEDLHNN_o *)0x0) {
      fVar15 = 0.0;
      fVar12 = 0.0;
      fVar14 = 0.0;
    }
    else {
      pCVar6 = PNGKLCHKPEO__AKHHLNDNHGF(__this,pIVar4,method_00);
      UVar17 = CNDPAJOLKFN__ALBJPLAPOBO(pCVar6,(MethodInfo *)0x0);
      fVar14 = UVar17.fields.z;
      fVar12 = UVar17.fields.y;
      fVar15 = UVar17.fields.x;
    }
    pFVar7 = (__this->fields).PHBEOHIEDOP;
    if (((pFVar7 == (FKGKLILLOBG_o *)0x0) ||
        (fVar11 = FKGKLILLOBG__PPOKEOHAHFG(pFVar7,AHEFOIOKDOK,(MethodInfo *)0x0),
        AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0)) ||
       (pFVar7 = (__this->fields).KIFDEDHNJCA, pFVar7 == (FKGKLILLOBG_o *)0x0)) goto LAB_032e67b4;
    iVar13 = (AHEFOIOKDOK->fields).FOJEHKCDKFH;
    break;
  case 3:
    UVar16 = PNGKLCHKPEO__AGNJJGHIJJE
                       (__this,AHEFOIOKDOK,(NJPBHDMCLIN_KLLGIFHMMIP_o *)method_00,in_x3);
    pFVar7 = (__this->fields).PHBEOHIEDOP;
    if (((pFVar7 == (FKGKLILLOBG_o *)0x0) ||
        (fVar15 = FKGKLILLOBG__PPOKEOHAHFG(pFVar7,AHEFOIOKDOK,(MethodInfo *)0x0),
        AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0)) ||
       (pFVar7 = (__this->fields).KIFDEDHNJCA, pFVar7 == (FKGKLILLOBG_o *)0x0)) goto LAB_032e67b4;
    iVar13 = (AHEFOIOKDOK->fields).HIHFJJOMDBF;
    fVar12 = FKGKLILLOBG__PPOKEOHAHFG(pFVar7,AHEFOIOKDOK,(MethodInfo *)0x0);
    pCVar6 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
    UVar17.fields.y = UVar16.fields.y - fVar12;
    UVar17.fields.x = UVar16.fields.x + fVar15 * (float)iVar13;
    UVar17.fields.z = 0.0;
    CNDPAJOLKFN___ctor(pCVar6,UVar17,(MethodInfo *)0x0);
    goto LAB_032e6690;
  case 4:
switchD_032e6384_caseD_4:
    pFVar7 = (__this->fields).PHBEOHIEDOP;
    if (pFVar7 == (FKGKLILLOBG_o *)0x0) {
LAB_032e67b4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar12 = FKGKLILLOBG__PPOKEOHAHFG(pFVar7,AHEFOIOKDOK,(MethodInfo *)0x0);
    pFVar7 = (__this->fields).KIFDEDHNJCA;
    if (pFVar7 == (FKGKLILLOBG_o *)0x0) goto LAB_032e67b4;
    fVar14 = FKGKLILLOBG__PPOKEOHAHFG(pFVar7,AHEFOIOKDOK,(MethodInfo *)0x0);
    pCVar6 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
    fVar14 = -fVar14;
    goto LAB_032e6688;
  case 5:
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar10 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
    if ((pFVar10 == (FCJBEKHDLAF_o *)0x0) ||
       (__this_00 = (pFVar10->fields).CNHHLPPHNCO, __this_00 == (NHBBOEHHEKG_o *)0x0))
    goto switchD_032e6384_caseD_4;
    pPVar5 = NHBBOEHHEKG__HANHAIIAEPB(__this_00,(MethodInfo *)0x0);
    if ((pPVar5 == (PKHLGDMJPMF_o *)0x0) ||
       (pFVar7 = (__this->fields).PHBEOHIEDOP, pFVar7 == (FKGKLILLOBG_o *)0x0)) goto LAB_032e67b4;
    fVar12 = (pPVar5->fields).OHHDBINAJCB;
    fVar15 = FKGKLILLOBG__PPOKEOHAHFG(pFVar7,AHEFOIOKDOK,(MethodInfo *)0x0);
    pPVar5 = NHBBOEHHEKG__HANHAIIAEPB(__this_00,(MethodInfo *)0x0);
    if ((pPVar5 == (PKHLGDMJPMF_o *)0x0) ||
       (pFVar7 = (__this->fields).KIFDEDHNJCA, pFVar7 == (FKGKLILLOBG_o *)0x0)) goto LAB_032e67b4;
    fVar11 = (pPVar5->fields).JOLEIODMLFL;
    fVar14 = FKGKLILLOBG__PPOKEOHAHFG(pFVar7,AHEFOIOKDOK,(MethodInfo *)0x0);
    pCVar6 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
    fVar12 = fVar12 + fVar15;
    fVar14 = -fVar11 - fVar14;
LAB_032e6688:
    CNDPAJOLKFN___ctor(pCVar6,fVar12,fVar14,0.0,(MethodInfo *)0x0);
LAB_032e6690:
    UVar17 = CNDPAJOLKFN__ALBJPLAPOBO(pCVar6,(MethodInfo *)0x0);
    fVar14 = UVar17.fields.z;
    fVar12 = UVar17.fields.y;
    fVar15 = UVar17.fields.x;
    goto LAB_032e6794;
  case 6:
    if ((method_00 == (MethodInfo *)0x0) || (method_00->klass == (Il2CppClass *)0x0))
    goto LAB_032e67b4;
    pCVar6 = PNGKLCHKPEO__AKHHLNDNHGF(__this,(method_00->klass->_1).this_arg.data,method_00);
    UVar17 = CNDPAJOLKFN__ALBJPLAPOBO(pCVar6,(MethodInfo *)0x0);
    fVar14 = UVar17.fields.z;
    fVar12 = UVar17.fields.y;
    fVar15 = UVar17.fields.x;
    pFVar7 = (__this->fields).PHBEOHIEDOP;
    if ((pFVar7 == (FKGKLILLOBG_o *)0x0) ||
       ((fVar11 = FKGKLILLOBG__PPOKEOHAHFG(pFVar7,AHEFOIOKDOK,(MethodInfo *)0x0),
        AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0 ||
        (pFVar7 = (__this->fields).KIFDEDHNJCA, pFVar7 == (FKGKLILLOBG_o *)0x0))))
    goto LAB_032e67b4;
    iVar13 = (AHEFOIOKDOK->fields).HIHFJJOMDBF;
    break;
  default:
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_24 = (__this->fields).AKBDFFLEINL;
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(PNGKLCHKPEO_NOLNDEAFBEL_TypeInfo,&local_24);
    if (args != (System_Object_array *)0x0) {
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
        uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar8,0);
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
      UnityEngine_Debug__LogFormat(StringLiteral_5597/*"ERROR: unknown object type: {0}"*/,args,(MethodInfo *)0x0);
      if (DAT_0455fa77 == '\0') {
        FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
        DAT_0455fa77 = '\x01';
      }
      pUVar9 = UnityEngine_Vector3_TypeInfo->static_fields;
      fVar15 = (pUVar9->zeroVector).fields.x;
      fVar12 = (pUVar9->zeroVector).fields.y;
      fVar14 = (pUVar9->zeroVector).fields.z;
      goto LAB_032e6794;
    }
    goto LAB_032e67b4;
  }
  fVar15 = fVar15 + fVar11 * (float)iVar13;
  fVar11 = FKGKLILLOBG__PPOKEOHAHFG(pFVar7,AHEFOIOKDOK,(MethodInfo *)0x0);
  fVar12 = fVar12 - fVar11;
LAB_032e6794:
  UVar18.fields.y = fVar12;
  UVar18.fields.x = fVar15;
  UVar18.fields.z = fVar14;
  return (UnityEngine_Vector3_o)UVar18.fields;
}


// ===== protected IEFEBEDLHNN FNBPOBHFGHG(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x31E67C8]
// PNGKLCHKPEO$$FNBPOBHFGHG @ RVA 0x31E67C8

IEFEBEDLHNN_o *
PNGKLCHKPEO__FNBPOBHFGHG(PNGKLCHKPEO_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  PNGKLCHKPEO_LGAFLKDKBPL_o *pPVar3;
  IEFEBEDLHNN_o *pIVar4;
  System_Object_array *args;
  Il2CppObject *pIVar5;
  long lVar6;
  IEFEBEDLHNN_o *pIVar7;
  undefined8 uVar8;
  IEFEBEDLHNN_o *pIVar9;
  CNDPAJOLKFN_o *pCVar10;
  CNDPAJOLKFN_o *pCVar11;
  float fVar12;
  float fVar13;
  int32_t local_24;
  
  if ((DAT_04566d62 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LCAJGLLBBEC_ELJAALFNLIP_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_5429/*"DistancePoint: getNode - wrong type: {0}"*/);
    DAT_04566d62 = 1;
  }
  pPVar3 = PNGKLCHKPEO__NHADNNDDNGI(__this,AHEFOIOKDOK,method);
  if (pPVar3 == (PNGKLCHKPEO_LGAFLKDKBPL_o *)0x0) goto LAB_032e698c;
  pIVar4 = (pPVar3->fields).LNBKBMNLJNG;
  if (pIVar4 == (IEFEBEDLHNN_o *)0x0) {
    uVar2 = (__this->fields).LOAFPIOGJAF;
    if (uVar2 < 2) {
      if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_032e698c;
      pIVar7 = (AHEFOIOKDOK->fields).BGAPCCDBNIC;
    }
    else if (uVar2 == 2) {
      if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_032e698c;
      pIVar7 = (AHEFOIOKDOK->fields).GFMPIKGOBNK;
    }
    else if (uVar2 == 3) {
      if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) {
LAB_032e698c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar7 = (AHEFOIOKDOK->fields).BBMAEBKPDKD;
    }
    else {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      local_24 = (__this->fields).LOAFPIOGJAF;
      pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(LCAJGLLBBEC_ELJAALFNLIP_TypeInfo,&local_24);
      if (args == (System_Object_array *)0x0) goto LAB_032e698c;
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (lVar6 = thunk_FUN_01bda71c(pIVar5,(((args->obj).klass)->_1).element_class), lVar6 == 0)) {
        uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar8,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = pIVar5;
      thunk_FUN_01c20e04(args->m_Items,pIVar5);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_5429/*"DistancePoint: getNode - wrong type: {0}"*/,args,(MethodInfo *)0x0);
      pIVar7 = (IEFEBEDLHNN_o *)0x0;
    }
  }
  else {
    pIVar9 = (pIVar4->fields).GAFCPEOANDD;
    pIVar7 = pIVar4;
    if (pIVar9 != (IEFEBEDLHNN_o *)0x0) {
      if (((AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) ||
          (pCVar10 = (pIVar4->fields).CNMHHKAMGPI, pCVar10 == (CNDPAJOLKFN_o *)0x0)) ||
         (pCVar11 = (pIVar9->fields).CNMHHKAMGPI, pCVar11 == (CNDPAJOLKFN_o *)0x0))
      goto LAB_032e698c;
      iVar1 = (AHEFOIOKDOK->fields).JDNEMNOMLIC;
      fVar13 = (float)(AHEFOIOKDOK->fields).FOJEHKCDKFH;
      fVar12 = (pCVar11->fields).super.OHHDBINAJCB * fVar13;
      fVar13 = (pCVar10->fields).super.OHHDBINAJCB * fVar13;
      pIVar7 = pIVar9;
      if ((iVar1 != 2 || fVar13 <= fVar12) && (iVar1 != 1 || fVar12 < fVar13)) {
        pIVar7 = pIVar4;
      }
    }
  }
  return pIVar7;
}


// ===== public void NODBBDLAIHD()  [RVA 0x31E69A0]
// PNGKLCHKPEO$$NODBBDLAIHD @ RVA 0x31E69A0

void PNGKLCHKPEO__NODBBDLAIHD(PNGKLCHKPEO_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *pSVar3;
  
  if ((DAT_04566d63 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<PNGKLCHKPEO_PLCIDMPOECL>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_Clear__);
    DAT_04566d63 = 1;
  }
  bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).EFNHMHALHPE,
                     Method_DJNBJHPDKDP_OBECCOPBADO<PNGKLCHKPEO_PLCIDMPOECL>__);
  if (!bVar2) {
    pSVar3 = (__this->fields).EFNHMHALHPE;
    if (pSVar3 == (System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *)0x0)
    goto LAB_032e6a6c;
    iVar1 = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
  }
  bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).PCHEGEBOKAF,
                     Method_DJNBJHPDKDP_OBECCOPBADO<PNGKLCHKPEO_PLCIDMPOECL>__);
  if (!bVar2) {
    pSVar3 = (__this->fields).PCHEGEBOKAF;
    if (pSVar3 == (System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *)0x0) {
LAB_032e6a6c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x31E6A70]
// PNGKLCHKPEO$$RandomizeObscuredVars @ RVA 0x31E6A70

void PNGKLCHKPEO__RandomizeObscuredVars(PNGKLCHKPEO_o *__this,MethodInfo *method)

{
  FKGKLILLOBG_o *pFVar1;
  System_Action_PNGKLCHKPEO_PLCIDMPOECL__o **ppSVar2;
  System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *pSVar3;
  System_Action_PNGKLCHKPEO_PLCIDMPOECL__o *pSVar4;
  
  if ((DAT_04566d64 & 1) == 0) {
    FUN_01bab630(&System_Action<PNGKLCHKPEO_PLCIDMPOECL>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_ForEach__);
    FUN_01bab630(&Method_PNGKLCHKPEO_<>c_AOPHCHOCAMJ__);
    FUN_01bab630(&Method_PNGKLCHKPEO_<>c_KICDPDGGBJP__);
    FUN_01bab630(&PNGKLCHKPEO_<>c_TypeInfo);
    DAT_04566d64 = 1;
  }
  pFVar1 = (__this->fields).PHBEOHIEDOP;
  if (pFVar1 != (FKGKLILLOBG_o *)0x0) {
    FKGKLILLOBG__GPJJDLBJOAL(pFVar1,(MethodInfo *)0x0);
    pFVar1 = (__this->fields).KIFDEDHNJCA;
    if (pFVar1 != (FKGKLILLOBG_o *)0x0) {
      FKGKLILLOBG__GPJJDLBJOAL(pFVar1,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).EFNHMHALHPE;
      if ((PNGKLCHKPEO_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = PNGKLCHKPEO_<>c_TypeInfo->static_fields->__9__35_0;
      if (pSVar4 == (System_Action_PNGKLCHKPEO_PLCIDMPOECL__o *)0x0) {
        if ((PNGKLCHKPEO_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar4 = (System_Action_PNGKLCHKPEO_PLCIDMPOECL__o *)
                 thunk_FUN_01bda818(System_Action<PNGKLCHKPEO_PLCIDMPOECL>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar2 = &PNGKLCHKPEO_<>c_TypeInfo->static_fields->__9__35_0;
        *ppSVar2 = pSVar4;
        thunk_FUN_01c20e04(ppSVar2,pSVar4);
      }
      if (pSVar3 != (System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)pSVar3,(System_Action_T__o *)pSVar4,
                   Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_ForEach__);
        pSVar3 = (__this->fields).PCHEGEBOKAF;
        if ((PNGKLCHKPEO_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar4 = PNGKLCHKPEO_<>c_TypeInfo->static_fields->__9__35_1;
        if (pSVar4 == (System_Action_PNGKLCHKPEO_PLCIDMPOECL__o *)0x0) {
          if ((PNGKLCHKPEO_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar4 = (System_Action_PNGKLCHKPEO_PLCIDMPOECL__o *)
                   thunk_FUN_01bda818(System_Action<PNGKLCHKPEO_PLCIDMPOECL>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar2 = &PNGKLCHKPEO_<>c_TypeInfo->static_fields->__9__35_1;
          *ppSVar2 = pSVar4;
          thunk_FUN_01c20e04(ppSVar2,pSVar4);
        }
        if (pSVar3 != (System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *)0x0) {
          System_Collections_Generic_List<object>__ForEach
                    ((System_Collections_Generic_List_object__o *)pSVar3,
                     (System_Action_T__o *)pSVar4,
                     Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_ForEach__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x31E6C30]
// PNGKLCHKPEO$$.ctor @ RVA 0x31E6C30

void PNGKLCHKPEO___ctor(PNGKLCHKPEO_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *pSVar1;
  System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o **ppSVar2;
  PNGKLCHKPEO_LGAFLKDKBPL_o *pPVar3;
  PNGKLCHKPEO_LGAFLKDKBPL_o **ppPVar4;
  PNGKLCHKPEO_c *pPVar5;
  
  if ((DAT_04566d65 & 1) == 0) {
    FUN_01bab630(&PNGKLCHKPEO_LGAFLKDKBPL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_TypeInfo);
    DAT_04566d65 = 1;
  }
  pSVar1 = (System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>__ctor__);
  ppSVar2 = &(__this->fields).EFNHMHALHPE;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>__ctor__);
  ppSVar2 = &(__this->fields).PCHEGEBOKAF;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pPVar3 = (PNGKLCHKPEO_LGAFLKDKBPL_o *)thunk_FUN_01bda818(PNGKLCHKPEO_LGAFLKDKBPL_TypeInfo);
  PNGKLCHKPEO_LGAFLKDKBPL___ctor(pPVar3,(MethodInfo *)0x0);
  ppPVar4 = &(__this->fields).JPJMGEPBOOP;
  *ppPVar4 = pPVar3;
  thunk_FUN_01c20e04(ppPVar4,pPVar3);
  pPVar3 = (PNGKLCHKPEO_LGAFLKDKBPL_o *)thunk_FUN_01bda818(PNGKLCHKPEO_LGAFLKDKBPL_TypeInfo);
  PNGKLCHKPEO_LGAFLKDKBPL___ctor(pPVar3,(MethodInfo *)0x0);
  ppPVar4 = &(__this->fields).BEMCNJHEADJ;
  *ppPVar4 = pPVar3;
  thunk_FUN_01c20e04(ppPVar4,pPVar3);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pPVar5 = __this->klass;
  (__this->fields).GCOJOACAHJA = false;
  (__this->fields).LOAFPIOGJAF = 0;
  (__this->fields).AKBDFFLEINL = 0;
  (__this->fields).JNLOFJLAOFM = 0;
                    /* WARNING: Could not recover jumptable at 0x032e6d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pPVar5->vtable)._4_EOHMFJFFFIN.methodPtr)
            (__this,AHDGNOJPPIB,(pPVar5->vtable)._4_EOHMFJFFFIN.method);
  return;
}


// ===== private PNGKLCHKPEO.LGAFLKDKBPL OKODHBNONJA(NJPBHDMCLIN AHEFOIOKDOK, List<PNGKLCHKPEO.PLCIDMPOECL> BHFLMNBKDAA)  [RVA 0x31E52DC]
// PNGKLCHKPEO$$OKODHBNONJA @ RVA 0x31E52DC

PNGKLCHKPEO_LGAFLKDKBPL_o *
PNGKLCHKPEO__OKODHBNONJA
          (PNGKLCHKPEO_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,
          System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *BHFLMNBKDAA,MethodInfo *method
          )

{
  Il2CppObject *pIVar1;
  bool bVar2;
  OLKKAIFGGAK_o *pOVar3;
  PJKHAJKEHEL_o *pPVar4;
  long lVar5;
  FCJBEKHDLAF_o *pFVar6;
  GBJGJEGPHKD_o *pGVar7;
  OLKKAIFGGAK_o *pOVar8;
  Il2CppClass *pIVar9;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566d66 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<PNGKLCHKPEO_PLCIDMPOECL>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<PNGKLCHKPEO_PLCIDMPOECL>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<PNGKLCHKPEO_PLCIDMPOECL>_get_Current__
                );
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_12160/*"Skeleton"*/);
    DAT_04566d66 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar6 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
  if (pFVar6 != (FCJBEKHDLAF_o *)0x0) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) {
LAB_032e5504:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar5 = 0xb8;
    if ((AHEFOIOKDOK->fields).HJPOJOPKEKI != false) {
      lVar5 = 0xb0;
    }
    pOVar3 = *(OLKKAIFGGAK_o **)((long)&pFVar6->klass + lVar5);
    if ((pOVar3 != (OLKKAIFGGAK_o *)0x0) &&
       (pOVar3 = OLKKAIFGGAK__GMBBOANEBJJ(pOVar3,6,(MethodInfo *)0x0),
       pOVar3 != (OLKKAIFGGAK_o *)0x0)) {
      if (BHFLMNBKDAA == (System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *)0x0)
      goto LAB_032e5504;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)BHFLMNBKDAA,
                 Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_60,
                                Method_System_Collections_Generic_List_Enumerator<PNGKLCHKPEO_PLCIDMPOECL>_MoveNext__
                               ), pIVar1 = local_60.fields._current, bVar2) {
        if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pGVar7 = local_60.fields._current[1].monitor;
        if (pGVar7 == (pOVar3->fields).HMIAFJALFCJ) {
          if (pGVar7 == (GBJGJEGPHKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pOVar8 = (pGVar7->fields).KOHECBJAFKG;
          if (pOVar8 == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pPVar4 = (pOVar8->fields).FAPMJJBOFEF;
          if (pPVar4 == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          lVar5 = (*(pPVar4->klass->vtable)._4_CJPIJKJDHGI.methodPtr)
                            (pPVar4,StringLiteral_12160/*"Skeleton"*/,0,
                             (pPVar4->klass->vtable)._4_CJPIJKJDHGI.method);
          if (((lVar5 != 0) &&
              (bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).HLKOPFFIMPF,(MethodInfo *)0x0),
              !bVar2)) &&
             (bVar2 = System_String__op_Inequality
                                (*(System_String_o **)(lVar5 + 0x38),(__this->fields).HLKOPFFIMPF,
                                 (MethodInfo *)0x0), !bVar2)) {
            pIVar9 = pIVar1[1].klass;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<PNGKLCHKPEO_PLCIDMPOECL>_Dispose__
                      );
            return (PNGKLCHKPEO_LGAFLKDKBPL_o *)pIVar9;
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,
                 Method_System_Collections_Generic_List_Enumerator<PNGKLCHKPEO_PLCIDMPOECL>_Dispose__
                );
    }
  }
  return (PNGKLCHKPEO_LGAFLKDKBPL_o *)0x0;
}


// ===== public void KEAKEIPABPP(GBJGJEGPHKD NCNGALIAHJL, bool FOFCAILEKJD, IEFEBEDLHNN IIBPJLKGEBP, bool BHKCLMLKLNB, GBJGJEGPHKD CHBJNMMEAPG)  [RVA 0x31E6D64]
// PNGKLCHKPEO$$KEAKEIPABPP @ RVA 0x31E6D64

void PNGKLCHKPEO__KEAKEIPABPP
               (PNGKLCHKPEO_o *__this,GBJGJEGPHKD_o *NCNGALIAHJL,bool FOFCAILEKJD,
               IEFEBEDLHNN_o *IIBPJLKGEBP,bool BHKCLMLKLNB,GBJGJEGPHKD_o *CHBJNMMEAPG,
               MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  IEFEBEDLHNN_o **ppIVar3;
  Il2CppObject *pIVar4;
  PNGKLCHKPEO_PLCIDMPOECL_o *__this_00;
  IEFEBEDLHNN_o *pIVar5;
  System_Object_array *pSVar6;
  Il2CppClass *pIVar7;
  System_Collections_Generic_List_object__o *__this_01;
  int index;
  
  if ((DAT_04566d67 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_get_Item__);
    FUN_01bab630(&PNGKLCHKPEO_PLCIDMPOECL_TypeInfo);
    DAT_04566d67 = 1;
  }
  if (BHKCLMLKLNB) {
    lVar1 = 0x48;
    if (!FOFCAILEKJD) {
      lVar1 = 0x50;
    }
    __this_01 = *(System_Collections_Generic_List_object__o **)((long)&__this->klass + lVar1);
    if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_032e6f50;
    if (0 < (__this_01->fields)._size) {
      index = 0;
      do {
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           (__this_01,index,
                            Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_get_Item__
                           );
        if (pIVar4 == (Il2CppObject *)0x0) goto LAB_032e6f50;
        if (pIVar4[1].monitor == CHBJNMMEAPG) {
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             (__this_01,index,
                              Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_get_Item__
                             );
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_032e6f50;
          pIVar4 = pIVar4 + 1;
          goto LAB_032e6ef0;
        }
        index = index + 1;
      } while (index < (__this_01->fields)._size);
    }
    __this_00 = (PNGKLCHKPEO_PLCIDMPOECL_o *)thunk_FUN_01bda818(PNGKLCHKPEO_PLCIDMPOECL_TypeInfo);
    PNGKLCHKPEO_PLCIDMPOECL___ctor(__this_00,CHBJNMMEAPG,(MethodInfo *)0x0);
    lVar1 = Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_Add__;
    pSVar6 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_032e6f50;
    uVar2 = (__this_01->fields)._size;
    if (uVar2 < (uint)pSVar6->max_length) {
      (__this_01->fields)._size = uVar2 + 1;
      pSVar6->m_Items[(int)uVar2] = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar2,__this_00);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_01,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
    }
    if (__this_00 == (PNGKLCHKPEO_PLCIDMPOECL_o *)0x0) goto LAB_032e6f50;
    pIVar4 = (Il2CppObject *)&__this_00->fields;
  }
  else {
    pIVar4 = (Il2CppObject *)&(__this->fields).BEMCNJHEADJ;
    if (!FOFCAILEKJD) {
      pIVar4 = (Il2CppObject *)&(__this->fields).JPJMGEPBOOP;
    }
  }
LAB_032e6ef0:
  pIVar7 = pIVar4->klass;
  if ((__this->fields).AKBDFFLEINL == 1) {
    if ((NCNGALIAHJL == (GBJGJEGPHKD_o *)0x0) ||
       (pIVar5 = GBJGJEGPHKD__OCJAHBKIFNO
                           (NCNGALIAHJL,(__this->fields).HLMDCHDDELG,(MethodInfo *)0x0),
       pIVar7 == (Il2CppClass *)0x0)) {
LAB_032e6f50:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ((PNGKLCHKPEO_LGAFLKDKBPL_Fields *)&(pIVar7->_1).name)->JHFENACKNPG = pIVar5;
    thunk_FUN_01c20e04();
  }
  else if (pIVar7 == (Il2CppClass *)0x0) goto LAB_032e6f50;
  ppIVar3 = (IEFEBEDLHNN_o **)&(pIVar7->_1).namespaze;
  *ppIVar3 = IIBPJLKGEBP;
  thunk_FUN_01c20e04(ppIVar3,IIBPJLKGEBP);
  return;
}


// ===== public virtual float CJHJMGGINHP(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x31E6F54]
// PNGKLCHKPEO$$CJHJMGGINHP @ RVA 0x31E6F54

float PNGKLCHKPEO__CJHJMGGINHP(PNGKLCHKPEO_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x032e6f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(*(__this->klass->vtable)._7_KILOIOEILFL.methodPtr)
                           (__this,AHEFOIOKDOK,(__this->klass->vtable)._7_KILOIOEILFL.method);
  return fVar1;
}

