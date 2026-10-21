// Original name: Nekki.SF2.Core.Fights.Model.ModelObject  (obfuscated GBJGJEGPHKD)
// TypeDefIndex 2842
// Namespace: 
// public class ModelObject
// Fields:
//   private ModelObject.CMPNJPOADCA EOIPAPCMGGF; // 0x10
//   private ModelObject.GOCIPFHDKIO HJCKNKNHFEK; // 0x18
//   private ModelObject.NKABOJNJJJC CBMCFIGHLLA; // 0x20
//   private ModelObject.FHHNJPLBKEP DGPKPHAHOJP; // 0x28
//   private ModelNode ADBBKMDIOKI; // 0x30
//   private float GNHFLFKFOIO; // 0x38
//   private bool FJHAMMNKBPN; // 0x3C
//   private Model KOHECBJAFKG; // 0x40
//   private string HICKHACBDAC; // 0x48
//   private readonly Vector3f ELBDGPANAAB; // 0x50
//   private readonly Vector3f NMMGENFNPLK; // 0x58
//   private readonly Vector3f MLNGAAOOFHI; // 0x60

// ===== public ModelNode HJHKDOPGJLM(string KGLJICLJHEL)  [RVA 0x342DB48]
// ModelObject$$HJHKDOPGJLM @ RVA 0x342DB48

ModelNode_o *
ModelObject__HJHKDOPGJLM(ModelObject_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  ModelNode_o *pIVar2;
  ModelObject_o *__this_00;
  ModelObject_CMPNJPOADCA_o *pGVar3;
  Model_o *pOVar4;
  
  pGVar3 = (__this->fields).EOIPAPCMGGF;
  if (pGVar3 == (ModelObject_CMPNJPOADCA_o *)0x0) {
LAB_0352dbd4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pGVar3->fields).LNBKBMNLJNG != (ModelNode_o *)0x0) {
    method = (MethodInfo *)0x0;
    bVar1 = System_String__op_Equality(KGLJICLJHEL,(__this->fields).HICKHACBDAC,(MethodInfo *)0x0);
    if (bVar1) {
      pGVar3 = (__this->fields).EOIPAPCMGGF;
      if (pGVar3 != (ModelObject_CMPNJPOADCA_o *)0x0) {
        return (pGVar3->fields).LNBKBMNLJNG;
      }
      goto LAB_0352dbd4;
    }
  }
  pIVar2 = ModelObject__OCJAHBKIFNO(__this,KGLJICLJHEL,method);
  if (pIVar2 == (ModelNode_o *)0x0) {
    pOVar4 = (__this->fields).KOHECBJAFKG;
    if ((pOVar4 != (Model_o *)0x0) &&
       (pOVar4 = (pOVar4->fields).NFMBPIPEKGF, pOVar4 != (Model_o *)0x0)) {
      __this_00 = (pOVar4->fields).HMIAFJALFCJ;
      if (__this_00 != (ModelObject_o *)0x0) {
        pIVar2 = ModelObject__OCJAHBKIFNO(__this_00,KGLJICLJHEL,method);
        return pIVar2;
      }
      goto LAB_0352dbd4;
    }
    pIVar2 = (ModelNode_o *)0x0;
  }
  return pIVar2;
}


// ===== public List<MGNDHCBAPEN<int, int>> JNAHGJHEIOE()  [RVA 0x342DC90]
// ModelObject$$JNAHGJHEIOE @ RVA 0x342DC90

System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *
ModelObject__JNAHGJHEIOE(ModelObject_o *__this,MethodInfo *method)

{
  ModelObject_FHHNJPLBKEP_o *pGVar1;
  
  pGVar1 = (__this->fields).DGPKPHAHOJP;
  if (pGVar1 != (ModelObject_FHHNJPLBKEP_o *)0x0) {
    return (pGVar1->fields).MAKMHFGIKHL;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KFIBHLNFEHH()  [RVA 0x342DCAC]
// ModelObject$$KFIBHLNFEHH @ RVA 0x342DCAC

void ModelObject__KFIBHLNFEHH(ModelObject_o *__this,MethodInfo *method)

{
  int iVar1;
  Vector3f_o *pCVar2;
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar3;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_x1_00;
  ModelNode_o *pIVar5;
  int index;
  float OOGPLJBADCD;
  
  if ((DAT_04568153 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Item__);
    DAT_04568153 = 1;
  }
  pCVar2 = (__this->fields).ELBDGPANAAB;
  if (pCVar2 != (Vector3f_o *)0x0) {
    Vector3f__DGLJCGNHLIG(pCVar2,(MethodInfo *)0x0);
    pIVar5 = (__this->fields).ADBBKMDIOKI;
    if ((pIVar5 != (ModelNode_o *)0x0) &&
       (pCVar2 = (__this->fields).MLNGAAOOFHI, pCVar2 != (Vector3f_o *)0x0)) {
      Vector3f__FOOHBJNHOKK(pCVar2,(pIVar5->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
      pSVar3 = ModelObject__IBNCHLIHECC(__this,method_00);
      if (pSVar3 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
        iVar1 = (pSVar3->fields)._size;
        if (0 < iVar1) {
          index = 0;
          method_01 = extraout_x1;
          do {
            pCVar2 = (__this->fields).NMMGENFNPLK;
            pSVar3 = ModelObject__IBNCHLIHECC(__this,method_01);
            if (((pSVar3 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) ||
                (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                     Method_System_Collections_Generic_List<ModelNode>_get_Item__)
                , pIVar4 == (Il2CppObject *)0x0)) || (pCVar2 == (Vector3f_o *)0x0))
            goto LAB_0352de14;
            Vector3f__FOOHBJNHOKK(pCVar2,pIVar4[3].monitor,(MethodInfo *)0x0);
            pCVar2 = (__this->fields).NMMGENFNPLK;
            pSVar3 = ModelObject__IBNCHLIHECC(__this,method_02);
            if (((pSVar3 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) ||
                (pIVar5 = (ModelNode_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                     Method_System_Collections_Generic_List<ModelNode>_get_Item__)
                , pIVar5 == (ModelNode_o *)0x0)) ||
               (OOGPLJBADCD = ModelNode__NODBECJPBDC(pIVar5,(MethodInfo *)0x0),
               pCVar2 == (Vector3f_o *)0x0)) goto LAB_0352de14;
            Vector3f__PGLILPKGILI(pCVar2,OOGPLJBADCD,(MethodInfo *)0x0);
            pCVar2 = (__this->fields).ELBDGPANAAB;
            if (pCVar2 == (Vector3f_o *)0x0) goto LAB_0352de14;
            Vector3f__LFENGGKOJDO(pCVar2,(__this->fields).NMMGENFNPLK,(MethodInfo *)0x0);
            index = index + 1;
            method_01 = extraout_x1_00;
          } while (iVar1 != index);
        }
        pCVar2 = (__this->fields).ELBDGPANAAB;
        if (pCVar2 != (Vector3f_o *)0x0) {
          Vector3f__PGLILPKGILI(pCVar2,1.0 / (__this->fields).GNHFLFKFOIO,(MethodInfo *)0x0);
          pIVar5 = (__this->fields).ADBBKMDIOKI;
          if (pIVar5 != (ModelNode_o *)0x0) {
            ModelNode__AGOEHONIGBH(pIVar5,(__this->fields).ELBDGPANAAB,(MethodInfo *)0x0);
            pIVar5 = (__this->fields).ADBBKMDIOKI;
            if (pIVar5 != (ModelNode_o *)0x0) {
              ModelNode__LCOGNIMMOFL(pIVar5,(__this->fields).MLNGAAOOFHI,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0352de14:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Model BBGBNLKMBMG()  [RVA 0x342DE7C]
// ModelObject$$BBGBNLKMBMG @ RVA 0x342DE7C

Model_o * ModelObject__BBGBNLKMBMG(ModelObject_o *__this,MethodInfo *method)

{
  return (__this->fields).KOHECBJAFKG;
}


// ===== public void AKKNDFGMFEA()  [RVA 0x342DE84]
// ModelObject$$AKKNDFGMFEA @ RVA 0x342DE84

void ModelObject__AKKNDFGMFEA(ModelObject_o *__this,MethodInfo *method)

{
  int iVar1;
  ModelMacroNode_o *__this_00;
  ModelObject_CMPNJPOADCA_o *pGVar2;
  System_Collections_Generic_List_BCPODJMEKMJ__o *pSVar3;
  int index;
  
  if ((DAT_04568154 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelMacroNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelMacroNode>_get_Item__);
    DAT_04568154 = 1;
  }
  pGVar2 = (__this->fields).EOIPAPCMGGF;
  if ((pGVar2 != (ModelObject_CMPNJPOADCA_o *)0x0) &&
     (pSVar3 = (pGVar2->fields).NNBACGACIKH,
     pSVar3 != (System_Collections_Generic_List_BCPODJMEKMJ__o *)0x0)) {
    iVar1 = (pSVar3->fields)._size;
    if (iVar1 < 1) {
      return;
    }
    index = 0;
    do {
      pSVar3 = (pGVar2->fields).NNBACGACIKH;
      if ((pSVar3 == (System_Collections_Generic_List_BCPODJMEKMJ__o *)0x0) ||
         (__this_00 = (ModelMacroNode_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                 Method_System_Collections_Generic_List<ModelMacroNode>_get_Item__),
         __this_00 == (ModelMacroNode_o *)0x0)) break;
      ModelMacroNode__NMCMOPHAAPH(__this_00,(MethodInfo *)0x0);
      index = index + 1;
      if (iVar1 == index) {
        return;
      }
      pGVar2 = (__this->fields).EOIPAPCMGGF;
    } while (pGVar2 != (ModelObject_CMPNJPOADCA_o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<ModelEdge> EOBFJEHFFED()  [RVA 0x342DF30]
// ModelObject$$EOBFJEHFFED @ RVA 0x342DF30

System_Collections_Generic_List_GEBHIBIEAJE__o *
ModelObject__EOBFJEHFFED(ModelObject_o *__this,MethodInfo *method)

{
  ModelObject_GOCIPFHDKIO_o *pGVar1;
  
  pGVar1 = (__this->fields).HJCKNKNHFEK;
  if (pGVar1 != (ModelObject_GOCIPFHDKIO_o *)0x0) {
    return (pGVar1->fields).BEFGKHJKHJG;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GIJICLDDDFO(Vector3f BLEOKMIDGIK, ModelNode CCEPEGILJDO)  [RVA 0x342DF4C]
// ModelObject$$GIJICLDDDFO @ RVA 0x342DF4C

void ModelObject__GIJICLDDDFO
               (ModelObject_o *__this,Vector3f_o *BLEOKMIDGIK,ModelNode_o *CCEPEGILJDO,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  Vector3f_o *pCVar3;
  Vector3f_o *__this_00;
  Vector3f_o *__this_01;
  ModelNode_o *method_00;
  ModelObject_CMPNJPOADCA_o *pGVar4;
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  method_00 = CCEPEGILJDO;
  if ((DAT_04568155 & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Count__);
    DAT_04568155 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((CCEPEGILJDO != (ModelNode_o *)0x0) ||
     (CCEPEGILJDO = ModelObject__OCJAHBKIFNO
                              (__this,(__this->fields).HICKHACBDAC,(MethodInfo *)method_00),
     CCEPEGILJDO != (ModelNode_o *)0x0)) {
    pGVar4 = (__this->fields).EOIPAPCMGGF;
    if ((pGVar4 == (ModelObject_CMPNJPOADCA_o *)0x0) ||
       (pSVar5 = (pGVar4->fields).DMFCLEMPPIM,
       pSVar5 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
LAB_0352e124:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (0 < (pSVar5->fields)._size) {
      pCVar3 = Vector3f__MPOCFELGHDK
                         (BLEOKMIDGIK,(CCEPEGILJDO->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
      __this_00 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
      Vector3f___ctor(__this_00,pCVar3,(MethodInfo *)0x0);
      pCVar3 = Vector3f__MPOCFELGHDK
                         (BLEOKMIDGIK,(CCEPEGILJDO->fields).BJKKHONDAKP,(MethodInfo *)0x0);
      __this_01 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
      Vector3f___ctor(__this_01,pCVar3,(MethodInfo *)0x0);
      pGVar4 = (__this->fields).EOIPAPCMGGF;
      if ((pGVar4 == (ModelObject_CMPNJPOADCA_o *)0x0) ||
         (pSVar5 = (pGVar4->fields).DMFCLEMPPIM,
         pSVar5 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) goto LAB_0352e124;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)pSVar5,
                 Method_System_Collections_Generic_List<ModelNode>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<ModelNode>_MoveNext__
                          );
        pIVar1 = local_60.fields._current;
        if (!bVar2) break;
        if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (local_60.fields._current[3].monitor == (Vector3f_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        Vector3f__LFENGGKOJDO(local_60.fields._current[3].monitor,__this_00,(MethodInfo *)0x0);
        if (pIVar1[4].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        Vector3f__LFENGGKOJDO((Vector3f_o *)pIVar1[4].klass,__this_01,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<ModelNode>_Dispose__)
      ;
    }
  }
  return;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x342E1A0]
// ModelObject$$RandomizeObscuredVars @ RVA 0x342E1A0

void ModelObject__RandomizeObscuredVars(ModelObject_o *__this,MethodInfo *method)

{
  ModelNode_o *__this_00;
  System_Action_IEFEBEDLHNN__o **ppSVar1;
  System_Action_GEBHIBIEAJE__o **ppSVar2;
  ModelObject_CMPNJPOADCA_o *pGVar3;
  ModelObject_GOCIPFHDKIO_o *pGVar4;
  System_Collections_Generic_List_GEBHIBIEAJE__o *__this_01;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_02;
  System_Action_GEBHIBIEAJE__o *action;
  System_Action_IEFEBEDLHNN__o *action_00;
  
  if ((DAT_04568156 & 1) == 0) {
    FUN_01bab630(&System_Action<ModelEdge>_TypeInfo);
    FUN_01bab630(&System_Action<ModelNode>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelEdge>_ForEach__);
    FUN_01bab630(&Method_GBJGJEGPHKD_<>c_DHODDGENKLG__);
    FUN_01bab630(&Method_GBJGJEGPHKD_<>c_JIAGBOJOIHO__);
    FUN_01bab630(&ModelObject_<>c_TypeInfo);
    DAT_04568156 = 1;
  }
  pGVar3 = (__this->fields).EOIPAPCMGGF;
  if (pGVar3 != (ModelObject_CMPNJPOADCA_o *)0x0) {
    __this_00 = (pGVar3->fields).LNBKBMNLJNG;
    if (__this_00 != (ModelNode_o *)0x0) {
      ModelNode__RandomizeObscuredVars(__this_00,(MethodInfo *)0x0);
      pGVar3 = (__this->fields).EOIPAPCMGGF;
      if (pGVar3 == (ModelObject_CMPNJPOADCA_o *)0x0) goto LAB_0352e384;
    }
    __this_02 = (pGVar3->fields).DMFCLEMPPIM;
    if ((ModelObject_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action_00 = ModelObject_<>c_TypeInfo->static_fields->__9__78_0;
    if (action_00 == (System_Action_IEFEBEDLHNN__o *)0x0) {
      if ((ModelObject_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action_00 = (System_Action_IEFEBEDLHNN__o *)
                  thunk_FUN_01bda818(System_Action<ModelNode>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &ModelObject_<>c_TypeInfo->static_fields->__9__78_0;
      *ppSVar1 = action_00;
      thunk_FUN_01c20e04(ppSVar1,action_00);
    }
    if (__this_02 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_02,
                 (System_Action_T__o *)action_00,
                 Method_System_Collections_Generic_List<ModelNode>_ForEach__);
      pGVar4 = (__this->fields).HJCKNKNHFEK;
      if (pGVar4 != (ModelObject_GOCIPFHDKIO_o *)0x0) {
        __this_01 = (pGVar4->fields).DMFCLEMPPIM;
        if ((ModelObject_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action = ModelObject_<>c_TypeInfo->static_fields->__9__78_1;
        if (action == (System_Action_GEBHIBIEAJE__o *)0x0) {
          if ((ModelObject_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          action = (System_Action_GEBHIBIEAJE__o *)
                   thunk_FUN_01bda818(System_Action<ModelEdge>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar2 = &ModelObject_<>c_TypeInfo->static_fields->__9__78_1;
          *ppSVar2 = action;
          thunk_FUN_01c20e04(ppSVar2,action);
        }
        if (__this_01 != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) {
          System_Collections_Generic_List<object>__ForEach
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (System_Action_T__o *)action,
                     Method_System_Collections_Generic_List<ModelEdge>_ForEach__);
          return;
        }
      }
    }
  }
LAB_0352e384:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EFDNNDEOKMO()  [RVA 0x342E388]
// ModelObject$$EFDNNDEOKMO @ RVA 0x342E388

void ModelObject__EFDNNDEOKMO(ModelObject_o *__this,MethodInfo *method)

{
  MethodInfo *in_x3;
  ModelObject_CMPNJPOADCA_o *pGVar1;
  ModelObject_FHHNJPLBKEP_o *pGVar2;
  
  pGVar1 = (__this->fields).EOIPAPCMGGF;
  if ((pGVar1 != (ModelObject_CMPNJPOADCA_o *)0x0) &&
     (pGVar2 = (__this->fields).DGPKPHAHOJP, pGVar2 != (ModelObject_FHHNJPLBKEP_o *)0x0)) {
    ModelObject__EDJCOAPOMNH(__this,(pGVar1->fields).DMFCLEMPPIM,(pGVar2->fields).MAKMHFGIKHL,in_x3)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<ModelMacroNode> MCDNKHOHEGD()  [RVA 0x342E800]
// ModelObject$$MCDNKHOHEGD @ RVA 0x342E800

System_Collections_Generic_List_BCPODJMEKMJ__o *
ModelObject__MCDNKHOHEGD(ModelObject_o *__this,MethodInfo *method)

{
  ModelObject_CMPNJPOADCA_o *pGVar1;
  
  pGVar1 = (__this->fields).EOIPAPCMGGF;
  if (pGVar1 != (ModelObject_CMPNJPOADCA_o *)0x0) {
    return (pGVar1->fields).NNBACGACIKH;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ModelNode OCJAHBKIFNO(string KGLJICLJHEL)  [RVA 0x342DBD8]
// ModelObject$$OCJAHBKIFNO @ RVA 0x342DBD8

ModelNode_o *
ModelObject__OCJAHBKIFNO(ModelObject_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  ModelObject_CMPNJPOADCA_o *pGVar2;
  ModelNode_o *local_28;
  
  if ((DAT_04568157 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IEFEBEDLHNN>_TryGetValue__);
    DAT_04568157 = 1;
  }
  pGVar2 = (__this->fields).EOIPAPCMGGF;
  if (pGVar2 == (ModelObject_CMPNJPOADCA_o *)0x0) goto LAB_0352dc8c;
  if ((pGVar2->fields).LNBKBMNLJNG != (ModelNode_o *)0x0) {
    bVar1 = System_String__op_Equality(KGLJICLJHEL,(__this->fields).HICKHACBDAC,(MethodInfo *)0x0);
    pGVar2 = (__this->fields).EOIPAPCMGGF;
    if (bVar1) {
      if (pGVar2 != (ModelObject_CMPNJPOADCA_o *)0x0) {
        return (pGVar2->fields).LNBKBMNLJNG;
      }
      goto LAB_0352dc8c;
    }
    local_28 = (ModelNode_o *)0x0;
    if (pGVar2 == (ModelObject_CMPNJPOADCA_o *)0x0) goto LAB_0352dc8c;
  }
  local_28 = (ModelNode_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (pGVar2->fields).NHPHHKCGHNM;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this_00,(Il2CppObject *)KGLJICLJHEL,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_IEFEBEDLHNN>_TryGetValue__
                      );
    if (!bVar1) {
      local_28 = (ModelNode_o *)0x0;
    }
    return local_28;
  }
LAB_0352dc8c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<ModelEdge> MPGCPFKOCOB()  [RVA 0x342E81C]
// ModelObject$$MPGCPFKOCOB @ RVA 0x342E81C

System_Collections_Generic_List_GEBHIBIEAJE__o *
ModelObject__MPGCPFKOCOB(ModelObject_o *__this,MethodInfo *method)

{
  ModelObject_GOCIPFHDKIO_o *pGVar1;
  
  pGVar1 = (__this->fields).HJCKNKNHFEK;
  if (pGVar1 != (ModelObject_GOCIPFHDKIO_o *)0x0) {
    return (pGVar1->fields).DMFCLEMPPIM;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NDNPGAKJLHM()  [RVA 0x342E838]
// ModelObject$$NDNPGAKJLHM @ RVA 0x342E838

void ModelObject__NDNPGAKJLHM(ModelObject_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ModelObject_CMPNJPOADCA_Fields *pGVar2;
  ModelObject_GOCIPFHDKIO_o *pGVar3;
  ModelObject_NKABOJNJJJC_o *pGVar4;
  System_Collections_Generic_List_BIDBHCDLLHH__o *pSVar5;
  ModelObject_FHHNJPLBKEP_o *pGVar6;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *pSVar7;
  ModelObject_CMPNJPOADCA_o *pGVar8;
  System_Collections_Generic_List_GEBHIBIEAJE__o *pSVar9;
  System_Collections_Generic_List_JGHEMMGMLND__o *pSVar10;
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar11;
  System_Collections_Generic_List_BCPODJMEKMJ__o *pSVar12;
  Model_o **ppOVar13;
  
  if ((DAT_04568158 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Capsule>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Triangle>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelEdge>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelMacroNode>_Clear__);
    DAT_04568158 = 1;
  }
  pGVar3 = (__this->fields).HJCKNKNHFEK;
  if ((pGVar3 != (ModelObject_GOCIPFHDKIO_o *)0x0) &&
     (pSVar9 = (pGVar3->fields).AMJPHGIJPON,
     pSVar9 != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0)) {
    iVar1 = (pSVar9->fields)._size;
    (pSVar9->fields)._size = 0;
    (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar1,(MethodInfo *)0x0);
      pGVar3 = (__this->fields).HJCKNKNHFEK;
      if (pGVar3 == (ModelObject_GOCIPFHDKIO_o *)0x0) goto LAB_0352eae0;
    }
    pSVar9 = (pGVar3->fields).BEFGKHJKHJG;
    if (pSVar9 != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) {
      iVar1 = (pSVar9->fields)._size;
      (pSVar9->fields)._size = 0;
      (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar1,(MethodInfo *)0x0);
        pGVar3 = (__this->fields).HJCKNKNHFEK;
        if (pGVar3 == (ModelObject_GOCIPFHDKIO_o *)0x0) goto LAB_0352eae0;
      }
      pSVar9 = (pGVar3->fields).CKBPKJHOEAK;
      if (pSVar9 != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) {
        iVar1 = (pSVar9->fields)._size;
        (pSVar9->fields)._size = 0;
        (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
        if (0 < iVar1) {
          System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar1,(MethodInfo *)0x0);
          pGVar3 = (__this->fields).HJCKNKNHFEK;
          if (pGVar3 == (ModelObject_GOCIPFHDKIO_o *)0x0) goto LAB_0352eae0;
        }
        pSVar9 = (pGVar3->fields).DMFCLEMPPIM;
        if (pSVar9 != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) {
          iVar1 = (pSVar9->fields)._size;
          (pSVar9->fields)._size = 0;
          (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
          if (0 < iVar1) {
            System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar1,(MethodInfo *)0x0)
            ;
          }
          pGVar4 = (__this->fields).CBMCFIGHLLA;
          if ((pGVar4 != (ModelObject_NKABOJNJJJC_o *)0x0) &&
             (pSVar10 = (pGVar4->fields).OFIGHMECPGA,
             pSVar10 != (System_Collections_Generic_List_JGHEMMGMLND__o *)0x0)) {
            iVar1 = (pSVar10->fields)._size;
            (pSVar10->fields)._size = 0;
            (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
            if (0 < iVar1) {
              System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,iVar1,
                                  (MethodInfo *)0x0);
              pGVar4 = (__this->fields).CBMCFIGHLLA;
              if (pGVar4 == (ModelObject_NKABOJNJJJC_o *)0x0) goto LAB_0352eae0;
            }
            pSVar5 = (pGVar4->fields).KIDEMGIBKHC;
            if (pSVar5 != (System_Collections_Generic_List_BIDBHCDLLHH__o *)0x0) {
              iVar1 = (pSVar5->fields)._size;
              (pSVar5->fields)._size = 0;
              (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
              if (0 < iVar1) {
                System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar1,
                                    (MethodInfo *)0x0);
              }
              pGVar6 = (__this->fields).DGPKPHAHOJP;
              if ((pGVar6 != (ModelObject_FHHNJPLBKEP_o *)0x0) &&
                 (pSVar7 = (pGVar6->fields).MAKMHFGIKHL,
                 pSVar7 != (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0)) {
                iVar1 = (pSVar7->fields)._size;
                (pSVar7->fields)._size = 0;
                (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
                if (0 < iVar1) {
                  System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,iVar1,
                                      (MethodInfo *)0x0);
                }
                pGVar8 = (__this->fields).EOIPAPCMGGF;
                if ((pGVar8 != (ModelObject_CMPNJPOADCA_o *)0x0) &&
                   (pSVar11 = (pGVar8->fields).AMJPHGIJPON,
                   pSVar11 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
                  iVar1 = (pSVar11->fields)._size;
                  (pSVar11->fields)._size = 0;
                  (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
                  if (0 < iVar1) {
                    System_Array__Clear((System_Array_o *)(pSVar11->fields)._items,0,iVar1,
                                        (MethodInfo *)0x0);
                    pGVar8 = (__this->fields).EOIPAPCMGGF;
                    if (pGVar8 == (ModelObject_CMPNJPOADCA_o *)0x0) goto LAB_0352eae0;
                  }
                  pSVar12 = (pGVar8->fields).NNBACGACIKH;
                  if (pSVar12 != (System_Collections_Generic_List_BCPODJMEKMJ__o *)0x0) {
                    iVar1 = (pSVar12->fields)._size;
                    (pSVar12->fields)._size = 0;
                    (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
                    if (0 < iVar1) {
                      System_Array__Clear((System_Array_o *)(pSVar12->fields)._items,0,iVar1,
                                          (MethodInfo *)0x0);
                      pGVar8 = (__this->fields).EOIPAPCMGGF;
                      if (pGVar8 == (ModelObject_CMPNJPOADCA_o *)0x0) goto LAB_0352eae0;
                    }
                    pGVar2 = &pGVar8->fields;
                    if (pGVar2->LNBKBMNLJNG != (ModelNode_o *)0x0) {
                      pGVar2->LNBKBMNLJNG = (ModelNode_o *)0x0;
                      thunk_FUN_01c20e04(pGVar2,0);
                      pGVar8 = (__this->fields).EOIPAPCMGGF;
                      if (pGVar8 == (ModelObject_CMPNJPOADCA_o *)0x0) goto LAB_0352eae0;
                    }
                    pSVar11 = (pGVar8->fields).DMFCLEMPPIM;
                    if (pSVar11 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
                      iVar1 = (pSVar11->fields)._size;
                      (pSVar11->fields)._size = 0;
                      (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
                      if (0 < iVar1) {
                        System_Array__Clear((System_Array_o *)(pSVar11->fields)._items,0,iVar1,
                                            (MethodInfo *)0x0);
                      }
                      ppOVar13 = &(__this->fields).KOHECBJAFKG;
                      *ppOVar13 = (Model_o *)0x0;
                      thunk_FUN_01c20e04(ppOVar13,0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0352eae0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CHPJALNJEKB(List<string> MEOBNMMHFGG)  [RVA 0x342EAE4]
// ModelObject$$CHPJALNJEKB @ RVA 0x342EAE4

void ModelObject__CHPJALNJEKB
               (ModelObject_o *__this,System_Collections_Generic_List_string__o *MEOBNMMHFGG,
               MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  ModelObject_FHHNJPLBKEP_o *pGVar1;
  
  if ((DAT_04568159 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    DAT_04568159 = 1;
  }
  pGVar1 = (__this->fields).DGPKPHAHOJP;
  if ((pGVar1 != (ModelObject_FHHNJPLBKEP_o *)0x0) &&
     (__this_00 = (pGVar1->fields).BPKAMANIECL,
     __this_00 != (System_Collections_Generic_List_string__o *)0x0)) {
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)MEOBNMMHFGG,
               Method_System_Collections_Generic_List<string>_AddRange__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int HDEBEPGIFCJ(int DPJIDNBJIBG)  [RVA 0x342EB44]
// ModelObject$$HDEBEPGIFCJ @ RVA 0x342EB44

int32_t ModelObject__HDEBEPGIFCJ(ModelObject_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *__this_00;
  ModelObject_FHHNJPLBKEP_o *pGVar3;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456815a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_int>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_int>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_int>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_GetEnumerator__);
    DAT_0456815a = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pGVar3 = (__this->fields).DGPKPHAHOJP;
  if ((pGVar3 == (ModelObject_FHHNJPLBKEP_o *)0x0) ||
     (__this_00 = (pGVar3->fields).MAKMHFGIKHL,
     __this_00 == (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_GetEnumerator__);
  while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                           (&local_48,
                            Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_int>>_MoveNext__
                           ), bVar2) {
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = *(int *)((long)&local_48.fields._current[1].klass + 4);
    iVar4 = iVar1;
    if ((*(int *)&local_48.fields._current[1].klass == DPJIDNBJIBG) ||
       (iVar4 = *(int *)&local_48.fields._current[1].klass, iVar1 == DPJIDNBJIBG))
    goto LAB_0352ec14;
  }
  iVar4 = -1;
LAB_0352ec14:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,
             Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_int>>_Dispose__);
  return iVar4;
}


// ===== public void CJHGBHKNDHN(Model CJNHFNHJHPE)  [RVA 0x342ECB0]
// ModelObject$$CJHGBHKNDHN @ RVA 0x342ECB0

void ModelObject__CJHGBHKNDHN(ModelObject_o *__this,Model_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).KOHECBJAFKG = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public List<ModelNode> INDHJCEIEAE()  [RVA 0x342ECB8]
// ModelObject$$INDHJCEIEAE @ RVA 0x342ECB8

System_Collections_Generic_List_IEFEBEDLHNN__o *
ModelObject__INDHJCEIEAE(ModelObject_o *__this,MethodInfo *method)

{
  ModelObject_CMPNJPOADCA_o *pGVar1;
  
  pGVar1 = (__this->fields).EOIPAPCMGGF;
  if (pGVar1 != (ModelObject_CMPNJPOADCA_o *)0x0) {
    return (pGVar1->fields).AMJPHGIJPON;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KJJJHPFIDKH(List<Vector3f> OABFBHCCODF)  [RVA 0x342ECD4]
// ModelObject$$KJJJHPFIDKH @ RVA 0x342ECD4

void ModelObject__KJJJHPFIDKH
               (ModelObject_o *__this,System_Collections_Generic_List_CNDPAJOLKFN__o *OABFBHCCODF,
               MethodInfo *method)

{
  int iVar1;
  int32_t index;
  Vector3f_o *pCVar2;
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar3;
  ModelObject_CMPNJPOADCA_o *pGVar4;
  ModelNode_o *pIVar5;
  Vector3f_o *pCVar6;
  int index_00;
  
  if ((DAT_0456815b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Item__);
    DAT_0456815b = 1;
  }
  index = ModelObject__HBCACOFLPCI(__this,(__this->fields).HICKHACBDAC,method);
  pGVar4 = (__this->fields).EOIPAPCMGGF;
  if (((pGVar4 != (ModelObject_CMPNJPOADCA_o *)0x0) &&
      (pIVar5 = (pGVar4->fields).LNBKBMNLJNG, pIVar5 != (ModelNode_o *)0x0)) &&
     (OABFBHCCODF != (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) {
    pCVar6 = (pIVar5->fields).CNMHHKAMGPI;
    pCVar2 = (Vector3f_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)OABFBHCCODF,index,
                        Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    pCVar2 = Vector3f__MPOCFELGHDK(pCVar6,pCVar2,(MethodInfo *)0x0);
    if (pCVar2 != (Vector3f_o *)0x0) {
      (pCVar2->fields).super.JOLEIODMLFL = 0.0;
      iVar1 = (OABFBHCCODF->fields)._size;
      if (0 < iVar1) {
        index_00 = 0;
        do {
          pGVar4 = (__this->fields).EOIPAPCMGGF;
          if ((pGVar4 == (ModelObject_CMPNJPOADCA_o *)0x0) ||
             (pSVar3 = (pGVar4->fields).DMFCLEMPPIM,
             pSVar3 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) goto LAB_0352ee5c;
          pIVar5 = (ModelNode_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index_00,
                              Method_System_Collections_Generic_List<ModelNode>_get_Item__);
          pCVar6 = (Vector3f_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)OABFBHCCODF,index_00,
                              Method_System_Collections_Generic_List<Vector3f>_get_Item__);
          pCVar6 = Vector3f__DJOFPNGJPFM(pCVar6,pCVar2,(MethodInfo *)0x0);
          if (pIVar5 == (ModelNode_o *)0x0) goto LAB_0352ee5c;
          ModelNode__AGOEHONIGBH(pIVar5,pCVar6,(MethodInfo *)0x0);
          pGVar4 = (__this->fields).EOIPAPCMGGF;
          if ((pGVar4 == (ModelObject_CMPNJPOADCA_o *)0x0) ||
             (pSVar3 = (pGVar4->fields).DMFCLEMPPIM,
             pSVar3 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) goto LAB_0352ee5c;
          pIVar5 = (ModelNode_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index_00,
                              Method_System_Collections_Generic_List<ModelNode>_get_Item__);
          pCVar6 = (Vector3f_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)OABFBHCCODF,index_00,
                              Method_System_Collections_Generic_List<Vector3f>_get_Item__);
          pCVar6 = Vector3f__DJOFPNGJPFM(pCVar6,pCVar2,(MethodInfo *)0x0);
          if (pIVar5 == (ModelNode_o *)0x0) goto LAB_0352ee5c;
          ModelNode__LCOGNIMMOFL(pIVar5,pCVar6,(MethodInfo *)0x0);
          index_00 = index_00 + 1;
        } while (iVar1 != index_00);
      }
      return;
    }
  }
LAB_0352ee5c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool APGEDNDCGJD()  [RVA 0x342EF30]
// ModelObject$$APGEDNDCGJD @ RVA 0x342EF30

bool ModelObject__APGEDNDCGJD(ModelObject_o *__this,MethodInfo *method)

{
  return (__this->fields).FJHAMMNKBPN;
}


// ===== public void KJJJHPFIDKH(List<Vector3f> OABFBHCCODF, ModelNode IIBPJLKGEBP)  [RVA 0x342EF38]
// ModelObject$$KJJJHPFIDKH @ RVA 0x342EF38

void ModelObject__KJJJHPFIDKH
               (ModelObject_o *__this,System_Collections_Generic_List_CNDPAJOLKFN__o *OABFBHCCODF,
               ModelNode_o *IIBPJLKGEBP,MethodInfo *method)

{
  int iVar1;
  Vector3f_o *pCVar2;
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar3;
  ModelNode_o *pIVar4;
  ModelObject_CMPNJPOADCA_o *pGVar5;
  int index;
  Vector3f_o *pCVar6;
  
  if ((DAT_0456815c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Item__);
    DAT_0456815c = 1;
  }
  if ((IIBPJLKGEBP != (ModelNode_o *)0x0) &&
     (OABFBHCCODF != (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) {
    pCVar6 = (IIBPJLKGEBP->fields).CNMHHKAMGPI;
    pCVar2 = (Vector3f_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)OABFBHCCODF,
                        (IIBPJLKGEBP->fields).FLDBGCIKMKA,
                        Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    pCVar2 = Vector3f__MPOCFELGHDK(pCVar6,pCVar2,(MethodInfo *)0x0);
    if (pCVar2 != (Vector3f_o *)0x0) {
      (pCVar2->fields).super.JOLEIODMLFL = 0.0;
      iVar1 = (OABFBHCCODF->fields)._size;
      if (0 < iVar1) {
        index = 0;
        do {
          pGVar5 = (__this->fields).EOIPAPCMGGF;
          if ((pGVar5 == (ModelObject_CMPNJPOADCA_o *)0x0) ||
             (pSVar3 = (pGVar5->fields).DMFCLEMPPIM,
             pSVar3 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) goto LAB_0352f0ac;
          pIVar4 = (ModelNode_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index,
                              Method_System_Collections_Generic_List<ModelNode>_get_Item__);
          pCVar6 = (Vector3f_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)OABFBHCCODF,index,
                              Method_System_Collections_Generic_List<Vector3f>_get_Item__);
          pCVar6 = Vector3f__DJOFPNGJPFM(pCVar6,pCVar2,(MethodInfo *)0x0);
          if (pIVar4 == (ModelNode_o *)0x0) goto LAB_0352f0ac;
          ModelNode__AGOEHONIGBH(pIVar4,pCVar6,(MethodInfo *)0x0);
          pGVar5 = (__this->fields).EOIPAPCMGGF;
          if ((pGVar5 == (ModelObject_CMPNJPOADCA_o *)0x0) ||
             (pSVar3 = (pGVar5->fields).DMFCLEMPPIM,
             pSVar3 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) goto LAB_0352f0ac;
          pIVar4 = (ModelNode_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index,
                              Method_System_Collections_Generic_List<ModelNode>_get_Item__);
          pCVar6 = (Vector3f_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)OABFBHCCODF,index,
                              Method_System_Collections_Generic_List<Vector3f>_get_Item__);
          pCVar6 = Vector3f__DJOFPNGJPFM(pCVar6,pCVar2,(MethodInfo *)0x0);
          if (pIVar4 == (ModelNode_o *)0x0) goto LAB_0352f0ac;
          ModelNode__LCOGNIMMOFL(pIVar4,pCVar6,(MethodInfo *)0x0);
          index = index + 1;
        } while (iVar1 != index);
      }
      return;
    }
  }
LAB_0352f0ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EDJCOAPOMNH(List<ModelNode> OBDMHHJBLKL, List<MGNDHCBAPEN<int, int>> KENFFDHLNDA)  [RVA 0x342E3CC]
// ModelObject$$EDJCOAPOMNH @ RVA 0x342E3CC

/* WARNING: Removing unreachable block (ram,0x0352e698) */

void ModelObject__EDJCOAPOMNH
               (ModelObject_o *__this,System_Collections_Generic_List_IEFEBEDLHNN__o *OBDMHHJBLKL,
               System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *KENFFDHLNDA,
               MethodInfo *method)

{
  int32_t iVar1;
  int32_t JGGJNLLANAE;
  uint uVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  System_String_o *pSVar7;
  System_String_o *a;
  MGNDHCBAPEN_int__int__o *__this_00;
  char **ppcVar8;
  MGNDHCBAPEN_int__int__array *pMVar9;
  Il2CppClass *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456815d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_GetEnumerator__);
    FUN_01bab630(&Method_MGNDHCBAPEN<int,_int>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<int,_int>_TypeInfo);
    FUN_01bab630(&StringLiteral_15915/*"_2"*/);
    FUN_01bab630(&StringLiteral_15914/*"_1"*/);
    DAT_0456815d = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if (KENFFDHLNDA != (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0) {
    iVar1 = (KENFFDHLNDA->fields)._size;
    (KENFFDHLNDA->fields)._size = 0;
    (KENFFDHLNDA->fields)._version = (KENFFDHLNDA->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(KENFFDHLNDA->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    if (OBDMHHJBLKL != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)OBDMHHJBLKL,
                 Method_System_Collections_Generic_List<ModelNode>_GetEnumerator__);
      local_80.fields._index = local_b8.fields._index;
      local_80.fields._version = local_b8.fields._version;
      local_80.fields._list = local_b8.fields._list;
      local_80.fields._current = local_b8.fields._current;
      do {
        do {
          bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<ModelNode>_MoveNext__
                            );
          pIVar5 = local_80.fields._current;
          if (!bVar6) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<ModelNode>_Dispose__);
            return;
          }
          if ((Il2CppClass *)local_80.fields._current == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_01 = ((Il2CppClass_1 *)&(local_80.fields._current)->klass)->castClass;
          if (__this_01 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar7 = System_String__Substring
                             ((System_String_o *)__this_01,0,
                              ((System_String_Fields *)&(__this_01->_1).name)->_stringLength + -2,
                              (MethodInfo *)0x0);
          a = System_String__Substring
                        ((System_String_o *)__this_01,
                         ((System_String_Fields *)&(__this_01->_1).name)->_stringLength + -2,2,
                         (MethodInfo *)0x0);
          bVar6 = System_String__op_Equality(a,StringLiteral_15914/*"_1"*/,(MethodInfo *)0x0);
        } while (!bVar6);
        pSVar7 = System_String__Concat(pSVar7,StringLiteral_15915/*"_2"*/,(MethodInfo *)0x0);
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,(System_Collections_Generic_List_object__o *)OBDMHHJBLKL,
                   Method_System_Collections_Generic_List<ModelNode>_GetEnumerator__);
        local_a0.fields._index = local_b8.fields._index;
        local_a0.fields._version = local_b8.fields._version;
        local_a0.fields._list = local_b8.fields._list;
        local_a0.fields._current = local_b8.fields._current;
        do {
          bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_a0,
                             Method_System_Collections_Generic_List_Enumerator<ModelNode>_MoveNext__
                            );
          pIVar4 = local_a0.fields._current;
          if (!bVar6) goto LAB_0352e684;
          if (local_a0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar6 = System_String__op_Equality
                            (local_a0.fields._current[4].monitor,pSVar7,(MethodInfo *)0x0);
        } while (!bVar6);
        iVar1 = *(int32_t *)((long)&((Il2CppClass_1 *)&pIVar5->klass)->declaringType + 4);
        JGGJNLLANAE = *(int32_t *)((long)&pIVar4[5].klass + 4);
        __this_00 = (MGNDHCBAPEN_int__int__o *)thunk_FUN_01bda818(MGNDHCBAPEN<int,_int>_TypeInfo);
        MGNDHCBAPEN<int,_int>___ctor
                  (__this_00,iVar1,JGGJNLLANAE,Method_MGNDHCBAPEN<int,_int>__ctor__);
        lVar3 = Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Add__;
        pMVar9 = (KENFFDHLNDA->fields)._items;
        (KENFFDHLNDA->fields)._version = (KENFFDHLNDA->fields)._version + 1;
        if (pMVar9 == (MGNDHCBAPEN_int__int__array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (KENFFDHLNDA->fields)._size;
        if (uVar2 < (uint)pMVar9->max_length) {
          (KENFFDHLNDA->fields)._size = uVar2 + 1;
          pMVar9->m_Items[(int)uVar2] = __this_00;
          thunk_FUN_01c20e04(pMVar9->m_Items + (int)uVar2,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,
                     (Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        ppcVar8 = &((Il2CppClass_1 *)&pIVar5->klass)->name;
        *ppcVar8 = (char *)pIVar4;
        thunk_FUN_01c20e04(ppcVar8,pIVar4);
        pIVar4[1].klass = (Il2CppClass *)pIVar5;
        thunk_FUN_01c20e04(pIVar4 + 1,pIVar5);
LAB_0352e684:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<ModelNode>_Dispose__);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<ModelEdge> EKHACIPBPAP()  [RVA 0x342F0B0]
// ModelObject$$EKHACIPBPAP @ RVA 0x342F0B0

System_Collections_Generic_List_GEBHIBIEAJE__o *
ModelObject__EKHACIPBPAP(ModelObject_o *__this,MethodInfo *method)

{
  ModelObject_GOCIPFHDKIO_o *pGVar1;
  
  pGVar1 = (__this->fields).HJCKNKNHFEK;
  if (pGVar1 != (ModelObject_GOCIPFHDKIO_o *)0x0) {
    return (pGVar1->fields).CKBPKJHOEAK;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Vector3f PLEJOMOEFNE()  [RVA 0x342F0CC]
// ModelObject$$PLEJOMOEFNE @ RVA 0x342F0CC

Vector3f_o * ModelObject__PLEJOMOEFNE(ModelObject_o *__this,MethodInfo *method)

{
  ModelNode_o *pIVar1;
  
  pIVar1 = (__this->fields).ADBBKMDIOKI;
  if (pIVar1 != (ModelNode_o *)0x0) {
    return (pIVar1->fields).CNMHHKAMGPI;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GLMFAHPICHD()  [RVA 0x342F0E8]
// ModelObject$$GLMFAHPICHD @ RVA 0x342F0E8

void ModelObject__GLMFAHPICHD(ModelObject_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  undefined8 uVar2;
  ModelObject_CMPNJPOADCA_o *pGVar3;
  undefined1 auVar4 [16];
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_0456815e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_get_Current__);
    auVar4 = FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_GetEnumerator__);
    DAT_0456815e = 1;
  }
  uVar2 = auVar4._0_8_;
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pGVar3 = (__this->fields).EOIPAPCMGGF;
  if ((pGVar3 != (ModelObject_CMPNJPOADCA_o *)0x0) &&
     (__this_00 = (pGVar3->fields).DMFCLEMPPIM, uVar2 = 0,
     __this_00 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<ModelNode>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<ModelNode>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<ModelNode>_Dispose__);
        return;
      }
      if ((ModelNode_o *)local_38.fields._current == (ModelNode_o *)0x0) break;
      ModelNode__NCIPEFNDJEH((ModelNode_o *)local_38.fields._current,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar4._8_8_);
}


// ===== public void .ctor()  [RVA 0x342F23C]
// ModelObject$$.ctor @ RVA 0x342F23C

void ModelObject___ctor(ModelObject_o *__this,MethodInfo *method)

{
  ModelObject_CMPNJPOADCA_o *__this_00;
  ModelObject_GOCIPFHDKIO_o *__this_01;
  ModelObject_GOCIPFHDKIO_o **ppGVar1;
  ModelObject_NKABOJNJJJC_o *__this_02;
  ModelObject_NKABOJNJJJC_o **ppGVar2;
  ModelObject_FHHNJPLBKEP_o *__this_03;
  ModelObject_FHHNJPLBKEP_o **ppGVar3;
  Vector3f_o *pCVar4;
  Vector3f_o **ppCVar5;
  ModelNode_o *__this_04;
  ModelNode_o **ppIVar6;
  Model_o **ppOVar7;
  ModelObject_CMPNJPOADCA_Fields *pGVar8;
  MethodInfo *extraout_x1;
  System_String_o **ppSVar9;
  ModelObject_Fields *pGVar10;
  undefined1 auVar11 [16];
  
  if ((DAT_0456815f & 1) == 0) {
    FUN_01bab630(&ModelObject_CMPNJPOADCA_TypeInfo);
    FUN_01bab630(&Vector3f_TypeInfo);
    FUN_01bab630(&ModelObject_FHHNJPLBKEP_TypeInfo);
    FUN_01bab630(&ModelObject_GOCIPFHDKIO_TypeInfo);
    FUN_01bab630(&ModelNode_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&ModelObject_NKABOJNJJJC_TypeInfo);
    FUN_01bab630(&StringLiteral_15939/*"_CenterOfMass_"*/);
    DAT_0456815f = 1;
    method = extraout_x1;
  }
  auVar11 = thunk_FUN_01bda818(ModelObject_CMPNJPOADCA_TypeInfo,method);
  __this_00 = auVar11._0_8_;
  ModelObject_CMPNJPOADCA___ctor(__this_00,auVar11._8_8_);
  pGVar10 = &__this->fields;
  pGVar10->EOIPAPCMGGF = __this_00;
  thunk_FUN_01c20e04(pGVar10,__this_00);
  auVar11 = thunk_FUN_01bda818(ModelObject_GOCIPFHDKIO_TypeInfo);
  __this_01 = auVar11._0_8_;
  ModelObject_GOCIPFHDKIO___ctor(__this_01,auVar11._8_8_);
  ppGVar1 = &(__this->fields).HJCKNKNHFEK;
  *ppGVar1 = __this_01;
  thunk_FUN_01c20e04(ppGVar1,__this_01);
  auVar11 = thunk_FUN_01bda818(ModelObject_NKABOJNJJJC_TypeInfo);
  __this_02 = auVar11._0_8_;
  ModelObject_NKABOJNJJJC___ctor(__this_02,auVar11._8_8_);
  ppGVar2 = &(__this->fields).CBMCFIGHLLA;
  *ppGVar2 = __this_02;
  thunk_FUN_01c20e04(ppGVar2,__this_02);
  auVar11 = thunk_FUN_01bda818(ModelObject_FHHNJPLBKEP_TypeInfo);
  __this_03 = auVar11._0_8_;
  ModelObject_FHHNJPLBKEP___ctor(__this_03,auVar11._8_8_);
  ppGVar3 = &(__this->fields).DGPKPHAHOJP;
  *ppGVar3 = __this_03;
  thunk_FUN_01c20e04(ppGVar3,__this_03);
  pCVar4 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar4,(MethodInfo *)0x0);
  ppCVar5 = &(__this->fields).ELBDGPANAAB;
  *ppCVar5 = pCVar4;
  thunk_FUN_01c20e04(ppCVar5,pCVar4);
  pCVar4 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar4,(MethodInfo *)0x0);
  ppCVar5 = &(__this->fields).NMMGENFNPLK;
  *ppCVar5 = pCVar4;
  thunk_FUN_01c20e04(ppCVar5,pCVar4);
  pCVar4 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar4,(MethodInfo *)0x0);
  ppCVar5 = &(__this->fields).MLNGAAOOFHI;
  *ppCVar5 = pCVar4;
  thunk_FUN_01c20e04(ppCVar5,pCVar4);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_04 = (ModelNode_o *)thunk_FUN_01bda818(ModelNode_TypeInfo);
  ModelNode___ctor(__this_04,StringLiteral_15939/*"_CenterOfMass_"*/,(MethodInfo *)0x0);
  ppIVar6 = &(__this->fields).ADBBKMDIOKI;
  *ppIVar6 = __this_04;
  thunk_FUN_01c20e04(ppIVar6,__this_04);
  ppOVar7 = &(__this->fields).KOHECBJAFKG;
  *ppOVar7 = (Model_o *)0x0;
  (__this->fields).GNHFLFKFOIO = 0.0;
  (__this->fields).FJHAMMNKBPN = false;
  thunk_FUN_01c20e04(ppOVar7,0);
  if (pGVar10->EOIPAPCMGGF != (ModelObject_CMPNJPOADCA_o *)0x0) {
    pGVar8 = &pGVar10->EOIPAPCMGGF->fields;
    pGVar8->LNBKBMNLJNG = (ModelNode_o *)0x0;
    thunk_FUN_01c20e04(pGVar8,0);
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppSVar9 = &(__this->fields).HICKHACBDAC;
    *ppSVar9 = GameUtils_TypeInfo->static_fields->EJOKLMCEPFG;
    thunk_FUN_01c20e04(ppSVar9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HBFDJOAMHNA(bool CJNHFNHJHPE)  [RVA 0x342F8BC]
// ModelObject$$HBFDJOAMHNA @ RVA 0x342F8BC

void ModelObject__HBFDJOAMHNA(ModelObject_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).FJHAMMNKBPN = CJNHFNHJHPE;
  return;
}


// ===== public void NKGOBNPBCDM(List<MGNDHCBAPEN<string, float>> PCCHGBJONLN)  [RVA 0x342F8C8]
// ModelObject$$NKGOBNPBCDM @ RVA 0x342F8C8

void ModelObject__NKGOBNPBCDM
               (ModelObject_o *__this,
               System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *PCCHGBJONLN,
               MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  ModelNode_o *item;
  System_Object_array *args;
  long lVar4;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  undefined8 uVar5;
  ModelObject_CMPNJPOADCA_o *pGVar6;
  ModelNode_array *pIVar7;
  Il2CppClass *pIVar8;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568160 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__
                );
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_9176/*"ModelObject::addComNodes - no node with name: {0}"*/);
    DAT_04568160 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (PCCHGBJONLN == (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)PCCHGBJONLN,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  while( true ) {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                      );
    pIVar2 = local_80.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
                );
      return;
    }
    if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    item = ModelObject__OCJAHBKIFNO
                     (__this,(System_String_o *)local_80.fields._current[1].klass,method);
    if (item == (ModelNode_o *)0x0) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar8 = pIVar2[1].klass;
      if ((pIVar8 != (Il2CppClass *)0x0) &&
         (lVar4 = thunk_FUN_01bda71c(pIVar8,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
        uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar5,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = (Il2CppObject *)pIVar8;
      thunk_FUN_01c20e04(args->m_Items,pIVar8);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      method = (MethodInfo *)0x0;
      UnityEngine_Debug__LogErrorFormat(StringLiteral_9176/*"ModelObject::addComNodes - no node with name: {0}"*/,args,(MethodInfo *)0x0);
    }
    lVar4 = Method_System_Collections_Generic_List<ModelNode>_Add__;
    pGVar6 = (__this->fields).EOIPAPCMGGF;
    if (pGVar6 == (ModelObject_CMPNJPOADCA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (pGVar6->fields).FMNFMACCAKD;
    if (__this_00 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) break;
    pIVar7 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pIVar7 == (ModelNode_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pIVar7->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pIVar7->m_Items[(int)uVar1] = item;
      thunk_FUN_01c20e04(pIVar7->m_Items + (int)uVar1,item);
    }
    else {
      method = *(MethodInfo **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70);
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 (MethodInfo_26E4DAC *)method);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ModelNode ILECMJOENMK()  [RVA 0x342EF14]
// ModelObject$$ILECMJOENMK @ RVA 0x342EF14

ModelNode_o * ModelObject__ILECMJOENMK(ModelObject_o *__this,MethodInfo *method)

{
  ModelObject_CMPNJPOADCA_o *pGVar1;
  
  pGVar1 = (__this->fields).EOIPAPCMGGF;
  if (pGVar1 != (ModelObject_CMPNJPOADCA_o *)0x0) {
    return (pGVar1->fields).LNBKBMNLJNG;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<ModelNode> HMAAHELNECD()  [RVA 0x342E3B0]
// ModelObject$$HMAAHELNECD @ RVA 0x342E3B0

System_Collections_Generic_List_IEFEBEDLHNN__o *
ModelObject__HMAAHELNECD(ModelObject_o *__this,MethodInfo *method)

{
  ModelObject_CMPNJPOADCA_o *pGVar1;
  
  pGVar1 = (__this->fields).EOIPAPCMGGF;
  if (pGVar1 != (ModelObject_CMPNJPOADCA_o *)0x0) {
    return (pGVar1->fields).DMFCLEMPPIM;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static Vector3f NKPGIFLCKBC(ModelNode FMPJLBLNHMC, ModelNode IHEPHBIPLPM)  [RVA 0x342FBA0]
// ModelObject$$NKPGIFLCKBC @ RVA 0x342FBA0

Vector3f_o *
ModelObject__NKPGIFLCKBC(ModelNode_o *FMPJLBLNHMC,ModelNode_o *IHEPHBIPLPM,MethodInfo *method)

{
  Vector3f_o *pCVar1;
  
  if ((FMPJLBLNHMC != (ModelNode_o *)0x0) && (IHEPHBIPLPM != (ModelNode_o *)0x0)) {
    pCVar1 = Vector3f__NALMKBHIHHJ
                       ((FMPJLBLNHMC->fields).CNMHHKAMGPI,(IHEPHBIPLPM->fields).CNMHHKAMGPI,
                        (MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DGLJCGNHLIG()  [RVA 0x342FBC4]
// ModelObject$$DGLJCGNHLIG @ RVA 0x342FBC4

void ModelObject__DGLJCGNHLIG(ModelObject_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  undefined8 uVar2;
  MethodInfo *method_00;
  ModelObject_CMPNJPOADCA_o *pGVar3;
  undefined1 auVar4 [16];
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_04568161 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_get_Current__);
    auVar4 = FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_GetEnumerator__);
    DAT_04568161 = 1;
  }
  uVar2 = auVar4._0_8_;
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pGVar3 = (__this->fields).EOIPAPCMGGF;
  (__this->fields).FJHAMMNKBPN = false;
  if ((pGVar3 != (ModelObject_CMPNJPOADCA_o *)0x0) &&
     (__this_00 = (pGVar3->fields).DMFCLEMPPIM, uVar2 = 0,
     __this_00 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<ModelNode>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<ModelNode>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<ModelNode>_Dispose__);
        ModelObject__POBIFAEFKHC(__this,method_00);
        return;
      }
      if ((ModelNode_o *)local_38.fields._current == (ModelNode_o *)0x0) break;
      ModelNode__DGLJCGNHLIG((ModelNode_o *)local_38.fields._current,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar4._8_8_);
}


// ===== public List<ModelEdge> ALHGHGNPDMG()  [RVA 0x3430078]
// ModelObject$$ALHGHGNPDMG @ RVA 0x3430078

System_Collections_Generic_List_GEBHIBIEAJE__o *
ModelObject__ALHGHGNPDMG(ModelObject_o *__this,MethodInfo *method)

{
  ModelObject_GOCIPFHDKIO_o *pGVar1;
  
  pGVar1 = (__this->fields).HJCKNKNHFEK;
  if (pGVar1 != (ModelObject_GOCIPFHDKIO_o *)0x0) {
    return (pGVar1->fields).AMJPHGIJPON;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CJDPPIBNAAF()  [RVA 0x3430094]
// ModelObject$$CJDPPIBNAAF @ RVA 0x3430094

void ModelObject__CJDPPIBNAAF(ModelObject_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  MethodInfo *extraout_x1;
  float fVar2;
  float fVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568162 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_GetEnumerator__);
    DAT_04568162 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  (__this->fields).GNHFLFKFOIO = 0.0;
  __this_00 = ModelObject__IBNCHLIHECC(__this,method);
  if (__this_00 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<ModelNode>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<ModelNode>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<ModelNode>_Dispose__);
        return;
      }
      if ((ModelNode_o *)local_48.fields._current == (ModelNode_o *)0x0) break;
      fVar3 = (__this->fields).GNHFLFKFOIO;
      fVar2 = ModelNode__NODBECJPBDC((ModelNode_o *)local_48.fields._current,(MethodInfo *)0x0);
      (__this->fields).GNHFLFKFOIO = fVar3 + fVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FMAGIKOPMNM()  [RVA 0x34301FC]
// ModelObject$$FMAGIKOPMNM @ RVA 0x34301FC

void ModelObject__FMAGIKOPMNM(ModelObject_o *__this,MethodInfo *method)

{
  ModelNode_o *pIVar1;
  ModelObject_CMPNJPOADCA_o *pGVar2;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  MethodInfo *in_x2;
  ModelObject_CMPNJPOADCA_Fields *pGVar3;
  
  if ((DAT_04568163 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Item__);
    DAT_04568163 = 1;
  }
  pIVar1 = ModelObject__OCJAHBKIFNO(__this,(__this->fields).HICKHACBDAC,in_x2);
  if (pIVar1 != (ModelNode_o *)0x0) {
    pGVar2 = (__this->fields).EOIPAPCMGGF;
    if (pGVar2 == (ModelObject_CMPNJPOADCA_o *)0x0) goto LAB_035302c0;
    (pGVar2->fields).LNBKBMNLJNG = pIVar1;
    thunk_FUN_01c20e04();
  }
  pGVar2 = (__this->fields).EOIPAPCMGGF;
  if (pGVar2 != (ModelObject_CMPNJPOADCA_o *)0x0) {
    pGVar3 = &pGVar2->fields;
    if (pGVar3->LNBKBMNLJNG != (ModelNode_o *)0x0) {
      return;
    }
    __this_00 = (pGVar2->fields).DMFCLEMPPIM;
    if (__this_00 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
      if ((__this_00->fields)._size < 1) {
        pIVar1 = (ModelNode_o *)0x0;
      }
      else {
        pIVar1 = (ModelNode_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,0,
                            Method_System_Collections_Generic_List<ModelNode>_get_Item__);
      }
      pGVar3->LNBKBMNLJNG = pIVar1;
      thunk_FUN_01c20e04(pGVar3);
      return;
    }
  }
LAB_035302c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ModelEdge MOEFLHJOFIC(string KGLJICLJHEL)  [RVA 0x34302C4]
// ModelObject$$MOEFLHJOFIC @ RVA 0x34302C4

ModelEdge_o *
ModelObject__MOEFLHJOFIC(ModelObject_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_GEBHIBIEAJE__o *__this_00;
  ModelObject_GOCIPFHDKIO_o *pGVar2;
  ModelEdge_o *pGVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568164 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelEdge>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelEdge>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelEdge>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelEdge>_GetEnumerator__);
    DAT_04568164 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pGVar2 = (__this->fields).HJCKNKNHFEK;
  if ((pGVar2 == (ModelObject_GOCIPFHDKIO_o *)0x0) ||
     (__this_00 = (pGVar2->fields).DMFCLEMPPIM,
     __this_00 == (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ModelEdge>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<ModelEdge>_MoveNext__);
    pGVar3 = (ModelEdge_o *)local_48.fields._current;
    if (!bVar1) {
      pGVar3 = (ModelEdge_o *)0x0;
      break;
    }
    if ((ModelEdge_o *)local_48.fields._current == (ModelEdge_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (KGLJICLJHEL,
                       ((ModelEdge_Fields *)((long)local_48.fields._current + 0x10))->JIJLBFGKNJK,
                       (MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<ModelEdge>_Dispose__);
  return pGVar3;
}


// ===== public ModelNode GPNGBLKCLLF()  [RVA 0x3430428]
// ModelObject$$GPNGBLKCLLF @ RVA 0x3430428

ModelNode_o * ModelObject__GPNGBLKCLLF(ModelObject_o *__this,MethodInfo *method)

{
  return (__this->fields).ADBBKMDIOKI;
}


// ===== public List<Triangle> MNOHLIHHCOI()  [RVA 0x3430430]
// ModelObject$$MNOHLIHHCOI @ RVA 0x3430430

System_Collections_Generic_List_BIDBHCDLLHH__o *
ModelObject__MNOHLIHHCOI(ModelObject_o *__this,MethodInfo *method)

{
  ModelObject_NKABOJNJJJC_o *pGVar1;
  
  pGVar1 = (__this->fields).CBMCFIGHLLA;
  if (pGVar1 != (ModelObject_NKABOJNJJJC_o *)0x0) {
    return (pGVar1->fields).KIDEMGIBKHC;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int HBCACOFLPCI(string KGLJICLJHEL)  [RVA 0x342EE60]
// ModelObject$$HBCACOFLPCI @ RVA 0x342EE60

int32_t ModelObject__HBCACOFLPCI
                  (ModelObject_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  Il2CppObject *pIVar2;
  ModelObject_CMPNJPOADCA_o *pGVar3;
  int index;
  
  if ((DAT_04568165 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Item__);
    DAT_04568165 = 1;
  }
  pGVar3 = (__this->fields).EOIPAPCMGGF;
  if (pGVar3 != (ModelObject_CMPNJPOADCA_o *)0x0) {
    index = 0;
    do {
      __this_00 = (pGVar3->fields).DMFCLEMPPIM;
      if (__this_00 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) break;
      if ((__this_00->fields)._size <= index) {
        return -1;
      }
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<ModelNode>_get_Item__);
      if (pIVar2 == (Il2CppObject *)0x0) break;
      bVar1 = System_String__op_Equality(KGLJICLJHEL,pIVar2[4].monitor,(MethodInfo *)0x0);
      if (bVar1) {
        return index;
      }
      pGVar3 = (__this->fields).EOIPAPCMGGF;
      index = index + 1;
    } while (pGVar3 != (ModelObject_CMPNJPOADCA_o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float IDKOGEBBMOE()  [RVA 0x343044C]
// ModelObject$$IDKOGEBBMOE @ RVA 0x343044C

float ModelObject__IDKOGEBBMOE(ModelObject_o *__this,MethodInfo *method)

{
  return (__this->fields).GNHFLFKFOIO;
}


// ===== public Dictionary<string, ModelNode> FDCEPFOKGKL()  [RVA 0x3430454]
// ModelObject$$FDCEPFOKGKL @ RVA 0x3430454

System_Collections_Generic_Dictionary_string__IEFEBEDLHNN__o *
ModelObject__FDCEPFOKGKL(ModelObject_o *__this,MethodInfo *method)

{
  ModelObject_CMPNJPOADCA_o *pGVar1;
  
  pGVar1 = (__this->fields).EOIPAPCMGGF;
  if (pGVar1 != (ModelObject_CMPNJPOADCA_o *)0x0) {
    return (pGVar1->fields).NHPHHKCGHNM;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void POBIFAEFKHC()  [RVA 0x342FD24]
// ModelObject$$POBIFAEFKHC @ RVA 0x342FD24

void ModelObject__POBIFAEFKHC(ModelObject_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  ModelMacroNode_o *__this_00;
  ModelNode_o *ELHGBMHJKCC;
  System_Object_array *args;
  long lVar4;
  undefined8 uVar5;
  MethodInfo *method_00;
  ModelObject_CMPNJPOADCA_o *pGVar6;
  System_Collections_Generic_List_BCPODJMEKMJ__o *pSVar7;
  int index;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o **ppSVar8;
  Il2CppClass *pIVar9;
  System_String_o *pSVar10;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568166 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelMacroNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelMacroNode>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_9549/*"Nodes '{0}' for macronode '{1}' was not found"*/);
    DAT_04568166 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pGVar6 = (__this->fields).EOIPAPCMGGF;
  if ((pGVar6 != (ModelObject_CMPNJPOADCA_o *)0x0) &&
     (pSVar7 = (pGVar6->fields).NNBACGACIKH,
     pSVar7 != (System_Collections_Generic_List_BCPODJMEKMJ__o *)0x0)) {
    iVar1 = (pSVar7->fields)._size;
    if (iVar1 < 1) {
      return;
    }
    index = 0;
    do {
      pSVar7 = (pGVar6->fields).NNBACGACIKH;
      if ((pSVar7 == (System_Collections_Generic_List_BCPODJMEKMJ__o *)0x0) ||
         (method_00 = Method_System_Collections_Generic_List<ModelMacroNode>_get_Item__,
         __this_00 = (ModelMacroNode_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar7,index,
                                (MethodInfo_26E4ADC *)
                                Method_System_Collections_Generic_List<ModelMacroNode>_get_Item__),
         __this_00 == (ModelMacroNode_o *)0x0)) break;
      ppSVar8 = &(__this_00->fields).AGJPNDANDGC;
      if (*ppSVar8 != (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)*ppSVar8,
                   Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__
                  );
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                                 ), pIVar2 = local_80.fields._current, bVar3) {
          if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          ELHGBMHJKCC = ModelObject__OCJAHBKIFNO
                                  (__this,(System_String_o *)local_80.fields._current[1].klass,
                                   method_00);
          if (ELHGBMHJKCC == (ModelNode_o *)0x0) {
            args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
            if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pIVar9 = pIVar2[1].klass;
            if ((pIVar9 != (Il2CppClass *)0x0) &&
               (lVar4 = thunk_FUN_01bda71c(pIVar9,(((args->obj).klass)->_1).element_class),
               lVar4 == 0)) {
              uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar5,0);
            }
            if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            args->m_Items[0] = (Il2CppObject *)pIVar9;
            thunk_FUN_01c20e04(args->m_Items,pIVar9);
            pSVar10 = (__this_00->fields).super.NPFMOEOIEKM;
            if ((pSVar10 != (System_String_o *)0x0) &&
               (lVar4 = thunk_FUN_01bda71c(pSVar10,(((args->obj).klass)->_1).element_class),
               lVar4 == 0)) {
              uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar5,0);
            }
            if ((uint)args->max_length < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            args->m_Items[1] = (Il2CppObject *)pSVar10;
            thunk_FUN_01c20e04(args->m_Items + 1,pSVar10);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            method_00 = (MethodInfo *)0x0;
            UnityEngine_Debug__LogErrorFormat(StringLiteral_9549/*"Nodes '{0}' for macronode '{1}' was not found"*/,args,(MethodInfo *)0x0);
          }
          else {
            method_00 = (MethodInfo *)0x0;
            ModelMacroNode__BGFNHJFJOLL
                      (__this_00,ELHGBMHJKCC,*(float *)&pIVar2[1].monitor,(MethodInfo *)0x0);
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
                  );
        *ppSVar8 = (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0;
        thunk_FUN_01c20e04(ppSVar8,0);
      }
      index = index + 1;
      if (index == iVar1) {
        return;
      }
      pGVar6 = (__this->fields).EOIPAPCMGGF;
    } while (pGVar6 != (ModelObject_CMPNJPOADCA_o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KBGKNOFPPFE(Vector3f EMLHFAIPGGA)  [RVA 0x3430470]
// ModelObject$$KBGKNOFPPFE @ RVA 0x3430470

void ModelObject__KBGKNOFPPFE(ModelObject_o *__this,Vector3f_o *EMLHFAIPGGA,MethodInfo *method)

{
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  Il2CppObject *pIVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  ModelObject_CMPNJPOADCA_o *pGVar2;
  int index;
  
  method_00 = (MethodInfo *)EMLHFAIPGGA;
  if ((DAT_04568167 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Item__);
    DAT_04568167 = 1;
    method_00 = extraout_x1;
  }
  pGVar2 = (__this->fields).EOIPAPCMGGF;
  if (pGVar2 != (ModelObject_CMPNJPOADCA_o *)0x0) {
    index = 0;
    while (__this_00 = (pGVar2->fields).DMFCLEMPPIM,
          __this_00 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
      if ((__this_00->fields)._size <= index) {
        ModelObject__KFIBHLNFEHH(__this,method_00);
        return;
      }
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<ModelNode>_get_Item__);
      if ((pIVar1 == (Il2CppObject *)0x0) || (pIVar1[3].monitor == (Vector3f_o *)0x0)) break;
      Vector3f__LFENGGKOJDO(pIVar1[3].monitor,EMLHFAIPGGA,(MethodInfo *)0x0);
      if (pIVar1[4].klass == (Il2CppClass *)0x0) break;
      Vector3f__LFENGGKOJDO((Vector3f_o *)pIVar1[4].klass,EMLHFAIPGGA,(MethodInfo *)0x0);
      pGVar2 = (__this->fields).EOIPAPCMGGF;
      index = index + 1;
      method_00 = extraout_x1_00;
      if (pGVar2 == (ModelObject_CMPNJPOADCA_o *)0x0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AHCOLJPJGAO()  [RVA 0x3430538]
// ModelObject$$AHCOLJPJGAO @ RVA 0x3430538

void ModelObject__AHCOLJPJGAO(ModelObject_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  undefined8 uVar2;
  ModelObject_CMPNJPOADCA_o *pGVar3;
  undefined1 auVar4 [16];
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_04568168 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_get_Current__);
    auVar4 = FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_GetEnumerator__);
    DAT_04568168 = 1;
  }
  uVar2 = auVar4._0_8_;
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pGVar3 = (__this->fields).EOIPAPCMGGF;
  if ((pGVar3 != (ModelObject_CMPNJPOADCA_o *)0x0) &&
     (__this_00 = (pGVar3->fields).DMFCLEMPPIM, uVar2 = 0,
     __this_00 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<ModelNode>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<ModelNode>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<ModelNode>_Dispose__);
        return;
      }
      if ((ModelNode_o *)local_38.fields._current == (ModelNode_o *)0x0) break;
      ModelNode__CFAAJCOBAEE((ModelNode_o *)local_38.fields._current,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar4._8_8_);
}


// ===== public List<Capsule> CEIMMODODJC()  [RVA 0x343068C]
// ModelObject$$CEIMMODODJC @ RVA 0x343068C

System_Collections_Generic_List_JGHEMMGMLND__o *
ModelObject__CEIMMODODJC(ModelObject_o *__this,MethodInfo *method)

{
  ModelObject_NKABOJNJJJC_o *pGVar1;
  
  pGVar1 = (__this->fields).CBMCFIGHLLA;
  if (pGVar1 != (ModelObject_NKABOJNJJJC_o *)0x0) {
    return (pGVar1->fields).OFIGHMECPGA;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private List<ModelNode> IBNCHLIHECC()  [RVA 0x342DE18]
// ModelObject$$IBNCHLIHECC @ RVA 0x342DE18

System_Collections_Generic_List_IEFEBEDLHNN__o *
ModelObject__IBNCHLIHECC(ModelObject_o *__this,MethodInfo *method)

{
  long lVar1;
  ModelObject_CMPNJPOADCA_o *pGVar2;
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_04568169 & 1) == 0) {
    auVar4 = FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Count__);
    DAT_04568169 = 1;
  }
  pGVar2 = (__this->fields).EOIPAPCMGGF;
  if ((pGVar2 != (ModelObject_CMPNJPOADCA_o *)0x0) &&
     (pSVar3 = (pGVar2->fields).FMNFMACCAKD,
     pSVar3 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
    lVar1 = 0x38;
    if ((pSVar3->fields)._size < 1) {
      lVar1 = 0x28;
    }
    return *(System_Collections_Generic_List_IEFEBEDLHNN__o **)((long)&pGVar2->klass + lVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
}

