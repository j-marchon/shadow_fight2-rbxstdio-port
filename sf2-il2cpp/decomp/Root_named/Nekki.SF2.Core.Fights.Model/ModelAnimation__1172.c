// Original name: Nekki.SF2.Core.Fights.Model.ModelAnimation  (obfuscated OPNFCOGALLI)
// TypeDefIndex 1172
// Namespace: 
// public class ModelAnimation : OMLLDCIMLBB<object>
// Fields:
//   private ModelAnimation DPNACGKHLGD; // 0x18
//   private ModelAnimation MLANKGMLJBF; // 0x20
//   private HashSet<IntervalAnimation.IMLPLLLPALI> HCDNAGGCLDA; // 0x28
//   private bool AANDHIFMLHC; // 0x30
//   private bool PIODLNMKAGJ; // 0x31
//   private bool FAHOMGFHMAP; // 0x32
//   private bool GOIGJAGADMO; // 0x33
//   private int DMJAJGGGHPF; // 0x34
//   private int NOEPMCHIBOL; // 0x38
//   private ModelNode BAAPAKJGOMG; // 0x40
//   private ObscuredInt KINFMBHKNLA; // 0x48
//   private ObscuredInt IKPNGBKFCOL; // 0x58
//   private int GLFGJDCJGLD; // 0x68
//   private int JJIDKDIGGEK; // 0x6C
//   private int BPIIACENHPE; // 0x70
//   private int KDJBKDMJKHK; // 0x74
//   private int FANDONIBLKC; // 0x78
//   private int FNMEOPOBFBC; // 0x7C
//   private bool IOGCGDKKILK; // 0x80
//   private InfoAnimation FFIBKLFJKAO; // 0x88
//   private ObscuredBool GFPACGPFOPI; // 0x90
//   private ObscuredBool DCDOLDPKAGC; // 0x9C
//   private ObscuredBool BHJAJHGCMIB; // 0xA8
//   private float BDLMOBMPOHM; // 0xB4
//   private ObscuredFloat DLGPCFMIHCC; // 0xB8
//   private ObscuredFloat DELOAPHGBBC; // 0xCC
//   private int FBGLMJNEPOF; // 0xE0
//   private bool NGDBKCCKCKI; // 0xE4
//   private float JDKMKKIDECK; // 0xE8
//   private Vector3f NMLGPAGEDKH; // 0xF0
//   private Vector3f AAOHMLDIGNK; // 0xF8
//   private Vector3f JGJCGMBHINN; // 0x100
//   private Vector3f JLOKLHINMKG; // 0x108
//   private float KPJLPAIIDHB; // 0x110
//   private int OJEODKKHEPE; // 0x114
//   public int GMJBKKIOMCB; // 0x118
//   public int FHJCJEMBKMP; // 0x11C
//   private ModelObject KOHECBJAFKG; // 0x120
//   private float GOIHMJKAHJN; // 0x128
//   private float AOOIIDBOANJ; // 0x12C
//   private KeyFrames EJNOBBDDBDO; // 0x130
//   private List<List<Vector3f>> IFHALHIGBNM; // 0x138
//   private int GICJKGDDOLE; // 0x140
//   private int GAKFAKFDELH; // 0x144
//   private List<IntervalAnimation> ACMNENLJLOL; // 0x148
//   private List<IntervalAnimation> DKLFPMBOOFA; // 0x150
//   private InfoAnimation NDBPNFLAKDL; // 0x158
//   private InfoAnimation NOAFGDFHHMN; // 0x160
//   private List<ModelEdge> HALIJPAEEBE; // 0x168
//   public ModelNode PKADCPJHGDI; // 0x170
//   public ModelNode GGPGDDKHOMJ; // 0x178
//   private readonly BMBCEECINLK KDKAOJIEDCG; // 0x180
//   private readonly Vector3f PHILCIHBBCB; // 0x188

// ===== public IntervalAnimation HIMFHBJAEMJ(IntervalAnimation.IMLPLLLPALI ACCIHBHMFPN)  [RVA 0x31060B8]
// ModelAnimation$$HIMFHBJAEMJ @ RVA 0x31060B8

IntervalAnimation_o *
ModelAnimation__HIMFHBJAEMJ(ModelAnimation_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_JADGCGOJLJB__o *pSVar2;
  IntervalAnimation_o *pJVar3;
  int index;
  
  if ((DAT_04566509 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_get_Item__);
    DAT_04566509 = 1;
  }
  pSVar2 = (__this->fields).ACMNENLJLOL;
  if (pSVar2 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
    index = 0;
    do {
      if ((pSVar2->fields)._size <= index) {
        return (IntervalAnimation_o *)0x0;
      }
      pJVar3 = (IntervalAnimation_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          Method_System_Collections_Generic_List<IntervalAnimation>_get_Item__);
      if (pJVar3 == (IntervalAnimation_o *)0x0) break;
      iVar1 = IntervalAnimation__NHGGBEACKBD(pJVar3,(MethodInfo *)0x0);
      if (iVar1 == ACCIHBHMFPN) {
        pSVar2 = (__this->fields).ACMNENLJLOL;
        if (pSVar2 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
          pJVar3 = (IntervalAnimation_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,index,
                              Method_System_Collections_Generic_List<IntervalAnimation>_get_Item__);
          return pJVar3;
        }
        break;
      }
      pSVar2 = (__this->fields).ACMNENLJLOL;
      index = index + 1;
    } while (pSVar2 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public InfoAnimation FABBCMFIGBM()  [RVA 0x3106180]
// ModelAnimation$$FABBCMFIGBM @ RVA 0x3106180

InfoAnimation_o * ModelAnimation__FABBCMFIGBM(ModelAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).NDBPNFLAKDL;
}


// ===== public List<IntervalAnimation> DBNPENIMBDA()  [RVA 0x3106188]
// ModelAnimation$$DBNPENIMBDA @ RVA 0x3106188

System_Collections_Generic_List_JADGCGOJLJB__o *
ModelAnimation__DBNPENIMBDA(ModelAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).ACMNENLJLOL;
}


// ===== private void AANBBBENGJE(Vector3f PMJFKMILNPN)  [RVA 0x3106190]
// ModelAnimation$$AANBBBENGJE @ RVA 0x3106190

void ModelAnimation__AANBBBENGJE(ModelAnimation_o *__this,Vector3f_o *PMJFKMILNPN,MethodInfo *method)

{
  Vector3f_o *__this_00;
  Vector3f_o *__this_01;
  float OOGPLJBADCD;
  
  if ((DAT_0456650a & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    DAT_0456650a = 1;
  }
  __this_00 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(__this_00,PMJFKMILNPN,(MethodInfo *)0x0);
  OOGPLJBADCD = (__this->fields).KPJLPAIIDHB;
  if (OOGPLJBADCD != 1.0) {
    if (__this_00 == (Vector3f_o *)0x0) goto LAB_03206224;
    Vector3f__PGLILPKGILI(__this_00,OOGPLJBADCD,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).JGJCGMBHINN;
  if (__this_01 != (Vector3f_o *)0x0) {
    Vector3f__LFENGGKOJDO(__this_01,__this_00,(MethodInfo *)0x0);
    return;
  }
LAB_03206224:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ModelNode OCJAHBKIFNO(string KGLJICLJHEL, int OAFGMHOFEKM)  [RVA 0x3106228]
// ModelAnimation$$OCJAHBKIFNO @ RVA 0x3106228

/* WARNING: Type propagation algorithm not settling */

ModelNode_o *
ModelAnimation__OCJAHBKIFNO
          (ModelAnimation_o *__this,System_String_o *KGLJICLJHEL,int32_t OAFGMHOFEKM,MethodInfo *method
          )

{
  bool bVar1;
  uint16_t uVar2;
  ModelObject_o *__this_00;
  ModelNode_o *pIVar3;
  System_Object_array *args;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  Vector3f_o *pCVar7;
  Vector3f_o *pCVar8;
  ModelNode_o *pIVar9;
  int32_t local_24;
  
  if ((DAT_0456650b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_9164/*"ModelAnimation::GetNodeByName: strange sign {0}"*/);
    DAT_0456650b = 1;
  }
  bVar1 = System_String__IsNullOrEmpty(KGLJICLJHEL,(MethodInfo *)0x0);
  if (bVar1) {
    return (ModelNode_o *)0x0;
  }
  __this_00 = (__this->fields).KOHECBJAFKG;
  if (__this_00 != (ModelObject_o *)0x0) {
    pIVar3 = ModelObject__OCJAHBKIFNO(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
    if (pIVar3 == (ModelNode_o *)0x0) {
      return (ModelNode_o *)0x0;
    }
    pIVar9 = (pIVar3->fields).GAFCPEOANDD;
    if (pIVar9 == (ModelNode_o *)0x0) {
      return pIVar3;
    }
    if (KGLJICLJHEL != (System_String_o *)0x0) {
      uVar2 = System_String__get_Chars
                        (KGLJICLJHEL,(KGLJICLJHEL->fields)._stringLength + -1,(MethodInfo *)0x0);
      if (OAFGMHOFEKM == -1) {
        if (uVar2 == 0x32) {
          pCVar7 = (pIVar3->fields).CNMHHKAMGPI;
          if ((pCVar7 != (Vector3f_o *)0x0) &&
             (pCVar8 = (pIVar9->fields).CNMHHKAMGPI, pCVar8 != (Vector3f_o *)0x0)) {
            if ((pCVar7->fields).super.OHHDBINAJCB < (pCVar8->fields).super.OHHDBINAJCB) {
              return pIVar9;
            }
            return pIVar3;
          }
          goto LAB_0320642c;
        }
        if (uVar2 != 0x31) {
          return (ModelNode_o *)0x0;
        }
      }
      else {
        if (OAFGMHOFEKM != 1) {
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
          local_24 = OAFGMHOFEKM;
          pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
          if (args != (System_Object_array *)0x0) {
            if ((pIVar4 != (Il2CppObject *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class),
               lVar5 == 0)) {
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
            UnityEngine_Debug__LogErrorFormat(StringLiteral_9164/*"ModelAnimation::GetNodeByName: strange sign {0}"*/,args,(MethodInfo *)0x0);
            return pIVar3;
          }
          goto LAB_0320642c;
        }
        if (uVar2 != 0x32) {
          if (uVar2 != 0x31) {
            return (ModelNode_o *)0x0;
          }
          pCVar7 = (pIVar3->fields).CNMHHKAMGPI;
          if ((pCVar7 != (Vector3f_o *)0x0) &&
             (pCVar8 = (pIVar9->fields).CNMHHKAMGPI, pCVar8 != (Vector3f_o *)0x0)) {
            if ((pCVar7->fields).super.OHHDBINAJCB < (pCVar8->fields).super.OHHDBINAJCB) {
              return pIVar9;
            }
            return pIVar3;
          }
          goto LAB_0320642c;
        }
      }
      pCVar7 = (pIVar3->fields).CNMHHKAMGPI;
      if ((pCVar7 != (Vector3f_o *)0x0) &&
         (pCVar8 = (pIVar9->fields).CNMHHKAMGPI, pCVar8 != (Vector3f_o *)0x0)) {
        if ((pCVar7->fields).super.OHHDBINAJCB < (pCVar8->fields).super.OHHDBINAJCB) {
          pIVar9 = pIVar3;
        }
        return pIVar9;
      }
    }
  }
LAB_0320642c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EFNENLMNEII(InfoAnimation NLEBDPHNIDI)  [RVA 0x3106440]
// ModelAnimation$$EFNENLMNEII @ RVA 0x3106440

void ModelAnimation__EFNENLMNEII(ModelAnimation_o *__this,InfoAnimation_o *NLEBDPHNIDI,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_0456650c & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_0456650c = 1;
  }
  bVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                     (__this->fields).BHJAJHGCMIB.fields,(MethodInfo *)0x0);
  if (!bVar1) {
    ModelAnimation__CONIPAHFAPH(__this,method_00);
    ModelAnimation__NCBEJDPOLMB(__this,method_01);
  }
  OMLLDCIMLBB<object>__CallEvent
            ((OMLLDCIMLBB_object__o *)__this,1,(Il2CppObject *)NLEBDPHNIDI,
             Method_OMLLDCIMLBB<object>_CallEvent__);
  return;
}


// ===== public void IOPFFFHEDFN(InfoAnimation CJNHFNHJHPE)  [RVA 0x3106658]
// ModelAnimation$$IOPFFFHEDFN @ RVA 0x3106658

void ModelAnimation__IOPFFFHEDFN(ModelAnimation_o *__this,InfoAnimation_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).FFIBKLFJKAO = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private Vector3f MMLLFINLMDJ(List<Vector3f> PKDBOMAHGHC)  [RVA 0x3106660]
// ModelAnimation$$MMLLFINLMDJ @ RVA 0x3106660

Vector3f_o *
ModelAnimation__MMLLFINLMDJ
          (ModelAnimation_o *__this,System_Collections_Generic_List_CNDPAJOLKFN__o *PKDBOMAHGHC,
          MethodInfo *method)

{
  Vector3f_o *pCVar1;
  ModelNode_o *pIVar2;
  Vector3f_o *BJCLOGCDNEG;
  
  if ((DAT_0456650d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    DAT_0456650d = 1;
  }
  pIVar2 = (__this->fields).BAAPAKJGOMG;
  if ((pIVar2 != (ModelNode_o *)0x0) &&
     (PKDBOMAHGHC != (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) {
    BJCLOGCDNEG = (pIVar2->fields).CNMHHKAMGPI;
    pCVar1 = (Vector3f_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)PKDBOMAHGHC,
                        (__this->fields).NOEPMCHIBOL,
                        Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    pCVar1 = Vector3f__MPOCFELGHDK(BJCLOGCDNEG,pCVar1,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float BLCNKBFKEOF()  [RVA 0x31066D4]
// ModelAnimation$$BLCNKBFKEOF @ RVA 0x31066D4

float ModelAnimation__BLCNKBFKEOF(ModelAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).JDKMKKIDECK;
}


// ===== public ModelNode AMANOIKLLAE()  [RVA 0x31066DC]
// ModelAnimation$$AMANOIKLLAE @ RVA 0x31066DC

ModelNode_o * ModelAnimation__AMANOIKLLAE(ModelAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).BAAPAKJGOMG;
}


// ===== public float ALGEGIJADMC()  [RVA 0x31066E4]
// ModelAnimation$$ALGEGIJADMC @ RVA 0x31066E4

float ModelAnimation__ALGEGIJADMC(ModelAnimation_o *__this,MethodInfo *method)

{
  float fVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_30;
  
  local_30.fakeValueActive = (__this->fields).DELOAPHGBBC.fields.fakeValueActive;
  local_30.inited = (__this->fields).DELOAPHGBBC.fields.inited;
  local_30._18_2_ = *(undefined2 *)&(__this->fields).DELOAPHGBBC.fields.field_0x12;
  local_30.hiddenValueOldByte4.fields =
       (__this->fields).DELOAPHGBBC.fields.hiddenValueOldByte4.fields;
  local_30.fakeValue = (__this->fields).DELOAPHGBBC.fields.fakeValue;
  local_30.currentCryptoKey = (__this->fields).DELOAPHGBBC.fields.currentCryptoKey;
  local_30.hiddenValue = (__this->fields).DELOAPHGBBC.fields.hiddenValue;
  fVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_30,
                     (MethodInfo *)0x0);
  return fVar1;
}


// ===== public void NCBEJDPOLMB()  [RVA 0x31065E8]
// ModelAnimation$$NCBEJDPOLMB @ RVA 0x31065E8

void ModelAnimation__NCBEJDPOLMB(ModelAnimation_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_GEBHIBIEAJE__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_0456650e & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<ModelEdge>_Clear__);
    DAT_0456650e = 1;
  }
  pSVar1 = (__this->fields).HALIJPAEEBE;
  if (pSVar1 != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== private void EABJNHKPJOM()  [RVA 0x3106714]
// ModelAnimation$$EABJNHKPJOM @ RVA 0x3106714

void ModelAnimation__EABJNHKPJOM(ModelAnimation_o *__this,MethodInfo *method)

{
  KeyFrames_o *__this_00;
  
  __this_00 = (__this->fields).EJNOBBDDBDO;
  if (__this_00 != (KeyFrames_o *)0x0) {
    KeyFrames__DGLJCGNHLIG(__this_00,(MethodInfo *)0x0);
    (__this->fields).GICJKGDDOLE = 0x7fffffff;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LCEFIPCHKMN()  [RVA 0x3106740]
// ModelAnimation$$LCEFIPCHKMN @ RVA 0x3106740

void ModelAnimation__LCEFIPCHKMN(ModelAnimation_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  int32_t PKDBOMAHGHC;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *extraout_x1;
  InfoAnimation_o *pEVar4;
  InfoAnimation_HJPFANEPGJF_o *pEVar5;
  ModelObject_o *pGVar6;
  System_Object_array *pSVar7;
  System_Collections_Generic_List_IIMNGGHGKOD__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456650f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActionAnimation>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActionAnimation>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActionAnimation>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActionAnimation>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<ActionAnimation>_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_0456650f = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (((__this->fields).FAHOMGFHMAP != false) && ((__this->fields).GOIGJAGADMO != false)) {
    pEVar4 = (__this->fields).NDBPNFLAKDL;
    (__this->fields).FAHOMGFHMAP = false;
    if ((pEVar4 == (InfoAnimation_o *)0x0) ||
       ((pEVar5 = (pEVar4->fields).DMGLMCBIAGL, pEVar5 == (InfoAnimation_HJPFANEPGJF_o *)0x0 ||
        (__this_01 = (pEVar5->fields).NEIJJHEFLHP,
        __this_01 == (System_Collections_Generic_List_IIMNGGHGKOD__o *)0x0)))) {
LAB_0320698c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (0 < (__this_01->fields)._size) {
      PKDBOMAHGHC = ModelAnimation__MKIHMHHJLHE(__this,method);
      __this_00 = (System_Collections_Generic_List_object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<ActionAnimation>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (__this_00,Method_System_Collections_Generic_List<ActionAnimation>__ctor__);
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<ActionAnimation>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_MoveNext__
                          );
        item = local_60.fields._current;
        if (!bVar3) break;
        pGVar6 = (__this->fields).KOHECBJAFKG;
        if (pGVar6 == (ModelObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((ActionAnimation_o *)local_60.fields._current == (ActionAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = ActionAnimation__KOLIFGAJOHA
                          ((ActionAnimation_o *)local_60.fields._current,PKDBOMAHGHC,
                           (__this->fields).NDBPNFLAKDL,(pGVar6->fields).KOHECBJAFKG,
                           (MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<ActionAnimation>_Add__;
        if (bVar3) {
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar7 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pSVar7 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pSVar7->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pSVar7->m_Items[(int)uVar1] = item;
            thunk_FUN_01c20e04(pSVar7->m_Items + (int)uVar1,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_Dispose__)
      ;
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0320698c;
      if (0 < (__this_00->fields)._size) {
        OMLLDCIMLBB<object>__CallEvent
                  ((OMLLDCIMLBB_object__o *)__this,5,(Il2CppObject *)__this_00,
                   Method_OMLLDCIMLBB<object>_CallEvent__);
      }
    }
  }
  return;
}


// ===== private bool ICJLPHPDDEO()  [RVA 0x3106A60]
// ModelAnimation$$ICJLPHPDDEO @ RVA 0x3106A60

bool ModelAnimation__ICJLPHPDDEO(ModelAnimation_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_List_CNDPAJOLKFN___o *__this_00;
  Il2CppObject *pIVar3;
  
  if ((DAT_04566510 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<List<Vector3f>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<Vector3f>>_get_Item__);
    DAT_04566510 = 1;
  }
  __this_00 = (__this->fields).IFHALHIGBNM;
  if (__this_00 != (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0) {
    if ((__this_00->fields)._size < 1) {
      bVar2 = false;
    }
    else {
      iVar1 = (__this->fields).GICJKGDDOLE;
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,
                          Method_System_Collections_Generic_List<List<Vector3f>>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03206af4;
      bVar2 = iVar1 < *(int *)&pIVar3[1].monitor;
    }
    return bVar2;
  }
LAB_03206af4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int MDGBCDECBJH()  [RVA 0x3106AF8]
// ModelAnimation$$MDGBCDECBJH @ RVA 0x3106AF8

int32_t ModelAnimation__MDGBCDECBJH(ModelAnimation_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  
  iVar2 = (__this->fields).JJIDKDIGGEK;
  if (iVar2 == 0) {
    iVar2 = -3;
  }
  else {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + -2;
  }
  return iVar2;
}


// ===== private void BKELDNLBJIB()  [RVA 0x3106B2C]
// ModelAnimation$$BKELDNLBJIB @ RVA 0x3106B2C

void ModelAnimation__BKELDNLBJIB(ModelAnimation_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void KCOKKAHCOLG(int CEGBEKBFMGK = -1, int POEJBIANODB = -1)  [RVA 0x3106B30]
// ModelAnimation$$KCOKKAHCOLG @ RVA 0x3106B30

void ModelAnimation__KCOKKAHCOLG
               (ModelAnimation_o *__this,int32_t CEGBEKBFMGK,int32_t POEJBIANODB,MethodInfo *method)

{
  int32_t iVar1;
  Model_o *__this_00;
  KeyFrames_MJFFMMHJCNB_o *pMVar2;
  Vector3f_o *FCPALKBOIFD;
  Vector3f_o *KMCNNACKBFO;
  Vector3f_o *IHNDAEJMGFP;
  System_Collections_Generic_List_CNDPAJOLKFN__o *KENFFDHLNDA;
  MethodInfo *method_00;
  ModelObject_o *pGVar3;
  KeyFrames_o *pMVar4;
  BMBCEECINLK_o *pBVar5;
  System_Collections_Generic_List_List_CNDPAJOLKFN___o *pSVar6;
  System_Collections_Generic_List_CNDPAJOLKFN__o *__this_01;
  System_Collections_Generic_List_CNDPAJOLKFN__o *__this_02;
  System_Collections_Generic_List_CNDPAJOLKFN__o *__this_03;
  int iVar7;
  
  if ((DAT_04566511 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<List<Vector3f>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<Vector3f>>_get_Item__);
    DAT_04566511 = 1;
  }
  if ((CEGBEKBFMGK == -1) || (POEJBIANODB == -1)) {
    CEGBEKBFMGK = (__this->fields).BPIIACENHPE;
    POEJBIANODB = CEGBEKBFMGK + 1;
  }
  pGVar3 = (__this->fields).KOHECBJAFKG;
  (__this->fields).KDJBKDMJKHK = 1;
  if ((pGVar3 != (ModelObject_o *)0x0) &&
     (__this_00 = (pGVar3->fields).KOHECBJAFKG, __this_00 != (Model_o *)0x0)) {
    iVar1 = Model__HEOILELLFLL(__this_00,(MethodInfo *)0x0);
    (__this->fields).GAKFAKFDELH = iVar1;
    (__this->fields).KPJLPAIIDHB = 1.0 / (float)iVar1;
    iVar1 = ModelAnimation__HAEEPKKJOBL(__this,method_00);
    pMVar4 = (__this->fields).EJNOBBDDBDO;
    if (pMVar4 != (KeyFrames_o *)0x0) {
      iVar7 = (__this->fields).GAKFAKFDELH;
      pMVar2 = KeyFrames__HBMICHOLLMF(pMVar4,CEGBEKBFMGK,(MethodInfo *)0x0);
      if ((pMVar2 != (KeyFrames_MJFFMMHJCNB_o *)0x0) &&
         (pMVar4 = (__this->fields).EJNOBBDDBDO, pMVar4 != (KeyFrames_o *)0x0)) {
        __this_01 = (pMVar2->fields).KOANCCDDBDA;
        pMVar2 = KeyFrames__HBMICHOLLMF(pMVar4,POEJBIANODB,(MethodInfo *)0x0);
        if ((pMVar2 != (KeyFrames_MJFFMMHJCNB_o *)0x0) &&
           (pMVar4 = (__this->fields).EJNOBBDDBDO, pMVar4 != (KeyFrames_o *)0x0)) {
          __this_02 = (pMVar2->fields).KOANCCDDBDA;
          pMVar2 = KeyFrames__HBMICHOLLMF(pMVar4,POEJBIANODB + 1,(MethodInfo *)0x0);
          if ((pMVar2 != (KeyFrames_MJFFMMHJCNB_o *)0x0) &&
             (pBVar5 = (__this->fields).KDKAOJIEDCG, pBVar5 != (BMBCEECINLK_o *)0x0)) {
            __this_03 = (pMVar2->fields).KOANCCDDBDA;
            BMBCEECINLK__GIMAJOGGBHM(pBVar5,iVar7 * (iVar1 + 1),(MethodInfo *)0x0);
            pSVar6 = (__this->fields).IFHALHIGBNM;
            if (pSVar6 != (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0) {
              iVar7 = 0;
              while( true ) {
                if ((pSVar6->fields)._size <= iVar7) {
                  (__this->fields).GICJKGDDOLE = 0;
                  return;
                }
                if (__this_01 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0) break;
                pBVar5 = (__this->fields).KDKAOJIEDCG;
                FCPALKBOIFD = (Vector3f_o *)
                              System_Collections_Generic_List<object>__get_Item
                                        ((System_Collections_Generic_List_object__o *)__this_01,
                                         iVar7,
                                         Method_System_Collections_Generic_List<Vector3f>_get_Item__
                                        );
                if ((__this_02 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0) ||
                   (KMCNNACKBFO = (Vector3f_o *)
                                  System_Collections_Generic_List<object>__get_Item
                                            ((System_Collections_Generic_List_object__o *)__this_02,
                                             iVar7,
                                             Method_System_Collections_Generic_List<Vector3f>_get_Item__
                                            ),
                   __this_03 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) break;
                IHNDAEJMGFP = (Vector3f_o *)
                              System_Collections_Generic_List<object>__get_Item
                                        ((System_Collections_Generic_List_object__o *)__this_03,
                                         iVar7,
                                         Method_System_Collections_Generic_List<Vector3f>_get_Item__
                                        );
                pSVar6 = (__this->fields).IFHALHIGBNM;
                if ((pSVar6 == (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0) ||
                   (KENFFDHLNDA = (System_Collections_Generic_List_CNDPAJOLKFN__o *)
                                  System_Collections_Generic_List<object>__get_Item
                                            ((System_Collections_Generic_List_object__o *)pSVar6,
                                             iVar7,
                                             Method_System_Collections_Generic_List<List<Vector3f>>_get_Item__
                                            ), pBVar5 == (BMBCEECINLK_o *)0x0)) break;
                BMBCEECINLK__APNHOODIJNO
                          (pBVar5,FCPALKBOIFD,KMCNNACKBFO,IHNDAEJMGFP,KENFFDHLNDA,(MethodInfo *)0x0)
                ;
                pSVar6 = (__this->fields).IFHALHIGBNM;
                iVar7 = iVar7 + 1;
                if (pSVar6 == (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0) break;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool NGILHAOFGEA(ModelObject KCLAGHLLOME, string FMFIHPBNGBJ, int OAFGMHOFEKM, Vector3[] PDCJPCDLHCI, bool LBFDGHOEPPM = True)  [RVA 0x3106D64]
// ModelAnimation$$NGILHAOFGEA @ RVA 0x3106D64

bool ModelAnimation__NGILHAOFGEA
               (ModelObject_o *KCLAGHLLOME,System_String_o *FMFIHPBNGBJ,int32_t OAFGMHOFEKM,
               UnityEngine_Vector3_array *PDCJPCDLHCI,bool LBFDGHOEPPM,MethodInfo *method)

{
  bool bVar1;
  ModelNode_o *LFALCONFCGH;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  ModelNode_o *NMGJAKHNCND;
  
  if ((DAT_04566512 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_9167/*"ModelAnimation::mirrorNodes - nodes not found: "{0}""*/);
    DAT_04566512 = 1;
  }
  if (KCLAGHLLOME != (ModelObject_o *)0x0) {
    LFALCONFCGH = ModelObject__OCJAHBKIFNO(KCLAGHLLOME,FMFIHPBNGBJ,(MethodInfo *)0x0);
    if ((LFALCONFCGH != (ModelNode_o *)0x0) &&
       (NMGJAKHNCND = (LFALCONFCGH->fields).GAFCPEOANDD, NMGJAKHNCND != (ModelNode_o *)0x0)) {
      bVar1 = ModelAnimation__NGILHAOFGEA
                        (LFALCONFCGH,NMGJAKHNCND,OAFGMHOFEKM,PDCJPCDLHCI,LBFDGHOEPPM,method);
      return bVar1;
    }
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if (args != (System_Object_array *)0x0) {
      if ((FMFIHPBNGBJ != (System_String_o *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(FMFIHPBNGBJ,(((args->obj).klass)->_1).element_class),
         lVar2 == 0)) {
        uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar3,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = (Il2CppObject *)FMFIHPBNGBJ;
        thunk_FUN_01c20e04(args->m_Items,FMFIHPBNGBJ);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_9167/*"ModelAnimation::mirrorNodes - nodes not found: "{0}""*/,args,(MethodInfo *)0x0);
        return false;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DAAPHDMHHAN(InfoAnimation NLEBDPHNIDI)  [RVA 0x3106FF0]
// ModelAnimation$$DAAPHDMHHAN @ RVA 0x3106FF0

void ModelAnimation__DAAPHDMHHAN(ModelAnimation_o *__this,InfoAnimation_o *NLEBDPHNIDI,MethodInfo *method)

{
  System_Collections_Generic_List_IIMNGGHGKOD__o *PLPFOJADDML;
  InfoAnimation_HJPFANEPGJF_o *pEVar1;
  
  if ((DAT_04566513 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ActionAnimation>_get_Count__);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_04566513 = 1;
  }
  if (((NLEBDPHNIDI != (InfoAnimation_o *)0x0) &&
      (pEVar1 = (NLEBDPHNIDI->fields).DMGLMCBIAGL, pEVar1 != (InfoAnimation_HJPFANEPGJF_o *)0x0)) &&
     (PLPFOJADDML = (pEVar1->fields).NEIJJHEFLHP,
     PLPFOJADDML != (System_Collections_Generic_List_IIMNGGHGKOD__o *)0x0)) {
    if (0 < (PLPFOJADDML->fields)._size) {
      OMLLDCIMLBB<object>__CallEvent
                ((OMLLDCIMLBB_object__o *)__this,5,(Il2CppObject *)PLPFOJADDML,
                 Method_OMLLDCIMLBB<object>_CallEvent__);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DPAGEPIGLEF(Vector3f CIPNNFKDGFP)  [RVA 0x310707C]
// ModelAnimation$$DPAGEPIGLEF @ RVA 0x310707C

void ModelAnimation__DPAGEPIGLEF(ModelAnimation_o *__this,Vector3f_o *CIPNNFKDGFP,MethodInfo *method)

{
  Vector3f_o *__this_00;
  Vector3f_o *__this_01;
  float OOGPLJBADCD;
  
  if ((DAT_04566514 & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    DAT_04566514 = 1;
  }
  __this_00 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(__this_00,CIPNNFKDGFP,(MethodInfo *)0x0);
  OOGPLJBADCD = (__this->fields).KPJLPAIIDHB;
  if (OOGPLJBADCD != 1.0) {
    if (__this_00 == (Vector3f_o *)0x0) goto LAB_03207110;
    Vector3f__PGLILPKGILI(__this_00,OOGPLJBADCD,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).AAOHMLDIGNK;
  if (__this_01 != (Vector3f_o *)0x0) {
    Vector3f__LFENGGKOJDO(__this_01,__this_00,(MethodInfo *)0x0);
    return;
  }
LAB_03207110:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CONIPAHFAPH()  [RVA 0x31064B8]
// ModelAnimation$$CONIPAHFAPH @ RVA 0x31064B8

void ModelAnimation__CONIPAHFAPH(ModelAnimation_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566515 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
    DAT_04566515 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).ACMNENLJLOL;
  if (__this_00 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__
                             ), bVar1) {
      ModelAnimation__JIJHABGAIIN(__this,(IntervalAnimation_o *)local_38.fields._current,in_x2);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private Vector3f MMLLFINLMDJ()  [RVA 0x3107170]
// ModelAnimation$$MMLLFINLMDJ @ RVA 0x3107170

Vector3f_o * ModelAnimation__MMLLFINLMDJ(ModelAnimation_o *__this,MethodInfo *method)

{
  Vector3f_o *pCVar1;
  
  pCVar1 = Vector3f__ALBJPLAPOBO((UnityEngine_Vector3_o)ZEXT812(0),(MethodInfo *)0x0);
  return pCVar1;
}


// ===== public Vector3f JAONOJLAPOG(int DPJIDNBJIBG, int MBKEOJBKPFD)  [RVA 0x3107184]
// ModelAnimation$$JAONOJLAPOG @ RVA 0x3107184

Vector3f_o *
ModelAnimation__JAONOJLAPOG
          (ModelAnimation_o *__this,int32_t DPJIDNBJIBG,int32_t MBKEOJBKPFD,MethodInfo *method)

{
  KeyFrames_o *__this_00;
  KeyFrames_MJFFMMHJCNB_o *pMVar1;
  System_Collections_Generic_List_CNDPAJOLKFN__o *__this_01;
  Vector3f_o *PHCOHKNFGLE;
  Vector3f_o *__this_02;
  
  if ((DAT_04566516 & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    DAT_04566516 = 1;
  }
  __this_00 = (__this->fields).EJNOBBDDBDO;
  if (__this_00 != (KeyFrames_o *)0x0) {
    pMVar1 = KeyFrames__HBMICHOLLMF(__this_00,DPJIDNBJIBG,(MethodInfo *)0x0);
    if (pMVar1 != (KeyFrames_MJFFMMHJCNB_o *)0x0) {
      __this_01 = (pMVar1->fields).KOANCCDDBDA;
      if (__this_01 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0) goto LAB_03207258;
      if (MBKEOJBKPFD < (__this_01->fields)._size) {
        PHCOHKNFGLE = (Vector3f_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_01,MBKEOJBKPFD,
                                 Method_System_Collections_Generic_List<Vector3f>_get_Item__);
        __this_02 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
        Vector3f___ctor(__this_02,PHCOHKNFGLE,(MethodInfo *)0x0);
        return __this_02;
      }
    }
    return (Vector3f_o *)0x0;
  }
LAB_03207258:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EIEAFNFGOHG()  [RVA 0x310725C]
// ModelAnimation$$EIEAFNFGOHG @ RVA 0x310725C

void ModelAnimation__EIEAFNFGOHG(ModelAnimation_o *__this,MethodInfo *method)

{
  Il2CppObject *LEAMIBIAIIN;
  bool bVar1;
  int32_t PKDBOMAHGHC;
  int32_t iVar2;
  int32_t iVar3;
  int iVar4;
  System_Collections_Generic_List_JADGCGOJLJB__o *pSVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  InfoAnimation_o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566517 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
    DAT_04566517 = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  ModelAnimation__NCBEJDPOLMB(__this,method);
  PKDBOMAHGHC = ModelAnimation__MKIHMHHJLHE(__this,method_00);
  __this_00 = (__this->fields).NDBPNFLAKDL;
  if (__this_00 != (InfoAnimation_o *)0x0) {
    method_01 = (MethodInfo *)(__this->fields).ACMNENLJLOL;
    InfoAnimation__PPHOIDGOHAD
              (__this_00,PKDBOMAHGHC,(System_Collections_Generic_List_JADGCGOJLJB__o *)method_01,
               (__this->fields).DKLFPMBOOFA,(__this->fields).HCDNAGGCLDA,(MethodInfo *)0x0);
    pSVar5 = (__this->fields).ACMNENLJLOL;
    if (pSVar5 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)pSVar5,
                 Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__
                          );
        LEAMIBIAIIN = local_60.fields._current;
        if (!bVar1) break;
        if ((IntervalAnimation_o *)local_60.fields._current == (IntervalAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar2 = IntervalAnimation__NHGGBEACKBD
                          ((IntervalAnimation_o *)local_60.fields._current,(MethodInfo *)0x0);
        if (iVar2 == 4) {
          ModelAnimation__IBIGMDGJOAL(__this,(IntervalAnimation_o *)LEAMIBIAIIN,method_01);
        }
        iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
        iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (((IntervalAnimation_Fields *)((long)LEAMIBIAIIN + 0x10))->IELLEFEFFJD).fields,
                           (MethodInfo *)0x0);
        if (iVar3 < iVar2) {
          method_01 = (MethodInfo *)0x0;
          iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
        }
        else {
          method_01 = (MethodInfo *)0x0;
          iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (((IntervalAnimation_Fields *)((long)LEAMIBIAIIN + 0x10))->IELLEFEFFJD).
                             fields,(MethodInfo *)0x0);
        }
        if (iVar4 == PKDBOMAHGHC) {
          ModelAnimation__BCABJDKNOLM(__this,(IntervalAnimation_o *)LEAMIBIAIIN,method_01);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__)
      ;
      pSVar5 = (__this->fields).DKLFPMBOOFA;
      if (pSVar5 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_78,(System_Collections_Generic_List_object__o *)pSVar5,
                   Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
        local_60.fields._index = local_78.fields._index;
        local_60.fields._version = local_78.fields._version;
        local_60.fields._list = local_78.fields._list;
        local_60.fields._current = local_78.fields._current;
        while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_60,
                                  Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__
                                 ), bVar1) {
          ModelAnimation__JIJHABGAIIN(__this,(IntervalAnimation_o *)local_60.fields._current,method_01);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool NAFDIFCGJBK(InfoAnimation NLEBDPHNIDI, int OAFGMHOFEKM, bool INAEABDIHKF = True, bool LGJEEEFEAKB = False, int KGJLIPJNNKB = -1)  [RVA 0x31078B8]
// ModelAnimation$$NAFDIFCGJBK @ RVA 0x31078B8

bool ModelAnimation__NAFDIFCGJBK
               (ModelAnimation_o *__this,InfoAnimation_o *NLEBDPHNIDI,int32_t OAFGMHOFEKM,
               bool INAEABDIHKF,bool LGJEEEFEAKB,int32_t KGJLIPJNNKB,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  undefined2 uVar3;
  bool bVar4;
  int CJNHFNHJHPE;
  int32_t iVar5;
  int32_t iVar6;
  System_Object_array *pSVar7;
  long lVar8;
  Il2CppObject *pIVar9;
  Vector3f_o *pCVar10;
  undefined8 uVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_x1;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *pMVar12;
  InfoAnimation_o *pEVar13;
  UnityEngine_Vector3_array_array *pUVar14;
  Vector3f_o *pCVar15;
  KeyFrames_o *ABKNPBMGHKH;
  InfoAnimation_o **ppEVar16;
  System_String_o *pSVar17;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar18;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar19;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_04566518 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_LJCDLMMMOGD<List<Vector3f>>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    FUN_01bab630(&StringLiteral_9169/*"ModelAnimation::playInfo - empty animation "{0}""*/);
    FUN_01bab630(&StringLiteral_2971/*"Animation error need: '{0}' (Priority {1}); Animation played: '{2}' (Priority {3})"*/);
    DAT_04566518 = 1;
  }
  if (NLEBDPHNIDI == (InfoAnimation_o *)0x0) {
    return false;
  }
  ppEVar16 = &(__this->fields).FFIBKLFJKAO;
  pEVar13 = *ppEVar16;
  if (((pEVar13 != (InfoAnimation_o *)0x0) && (pEVar13 != NLEBDPHNIDI)) &&
     (pEVar13 != (NLEBDPHNIDI->fields).CPCDDBKNDAC)) {
    pSVar7 = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
    if ((*ppEVar16 == (InfoAnimation_o *)0x0) || (pSVar7 == (System_Object_array *)0x0))
    goto LAB_03207e8c;
    pSVar17 = ((*ppEVar16)->fields).JIJLBFGKNJK;
    if ((pSVar17 != (System_String_o *)0x0) &&
       (lVar8 = thunk_FUN_01bda71c(pSVar17,(((pSVar7->obj).klass)->_1).element_class), lVar8 == 0))
    goto LAB_03207e94;
    if ((int)pSVar7->max_length == 0) goto LAB_03207e90;
    pSVar7->m_Items[0] = (Il2CppObject *)pSVar17;
    thunk_FUN_01c20e04(pSVar7->m_Items,pSVar17);
    pEVar13 = *ppEVar16;
    if (pEVar13 == (InfoAnimation_o *)0x0) goto LAB_03207e8c;
    uStack_68._0_4_ = (pEVar13->fields).EAFPDFHFBOM.fields.fakeValue;
    uStack_68._4_1_ = (pEVar13->fields).EAFPDFHFBOM.fields.fakeValueActive;
    uStack_68._5_1_ = (pEVar13->fields).EAFPDFHFBOM.fields.inited;
    uStack_68._6_2_ = *(undefined2 *)&(pEVar13->fields).EAFPDFHFBOM.fields.field_0xe;
    local_70._0_4_ = (pEVar13->fields).EAFPDFHFBOM.fields.currentCryptoKey;
    local_70._4_4_ = (pEVar13->fields).EAFPDFHFBOM.fields.hiddenValue;
    pIVar9 = (Il2CppObject *)
             thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,&local_70);
    if ((pIVar9 != (Il2CppObject *)0x0) &&
       (lVar8 = thunk_FUN_01bda71c(pIVar9,(((pSVar7->obj).klass)->_1).element_class), lVar8 == 0))
    goto LAB_03207e94;
    if ((uint)pSVar7->max_length < 2) goto LAB_03207e90;
    pSVar7->m_Items[1] = pIVar9;
    thunk_FUN_01c20e04(pSVar7->m_Items + 1,pIVar9);
    pSVar17 = (NLEBDPHNIDI->fields).JIJLBFGKNJK;
    if ((pSVar17 != (System_String_o *)0x0) &&
       (lVar8 = thunk_FUN_01bda71c(pSVar17,(((pSVar7->obj).klass)->_1).element_class), lVar8 == 0))
    goto LAB_03207e94;
    if ((uint)pSVar7->max_length < 3) goto LAB_03207e90;
    pSVar7->m_Items[2] = (Il2CppObject *)pSVar17;
    thunk_FUN_01c20e04(pSVar7->m_Items + 2,pSVar17);
    uStack_78._0_4_ = (NLEBDPHNIDI->fields).EAFPDFHFBOM.fields.fakeValue;
    uStack_78._4_1_ = (NLEBDPHNIDI->fields).EAFPDFHFBOM.fields.fakeValueActive;
    uStack_78._5_1_ = (NLEBDPHNIDI->fields).EAFPDFHFBOM.fields.inited;
    uStack_78._6_2_ = *(undefined2 *)&(NLEBDPHNIDI->fields).EAFPDFHFBOM.fields.field_0xe;
    local_80._0_4_ = (NLEBDPHNIDI->fields).EAFPDFHFBOM.fields.currentCryptoKey;
    local_80._4_4_ = (NLEBDPHNIDI->fields).EAFPDFHFBOM.fields.hiddenValue;
    pIVar9 = (Il2CppObject *)
             thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,&local_80);
    if ((pIVar9 != (Il2CppObject *)0x0) &&
       (lVar8 = thunk_FUN_01bda71c(pIVar9,(((pSVar7->obj).klass)->_1).element_class), lVar8 == 0))
    goto LAB_03207e94;
    if ((uint)pSVar7->max_length < 4) goto LAB_03207e90;
    pSVar7->m_Items[3] = pIVar9;
    thunk_FUN_01c20e04(pSVar7->m_Items + 3,pIVar9);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_2971/*"Animation error need: '{0}' (Priority {1}); Animation played: '{2}' (Priority {3})"*/,pSVar7,(MethodInfo *)0x0);
  }
  if ((__this->fields).AANDHIFMLHC != false) {
    OMLLDCIMLBB<object>__CallEvent
              ((OMLLDCIMLBB_object__o *)__this,2,(Il2CppObject *)NLEBDPHNIDI,
               Method_OMLLDCIMLBB<object>_CallEvent__);
  }
  (__this->fields).FFIBKLFJKAO = (InfoAnimation_o *)0x0;
  thunk_FUN_01c20e04(ppEVar16,0);
  bVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                     (__this->fields).BHJAJHGCMIB.fields,(MethodInfo *)0x0);
  if (bVar4) {
    ModelAnimation__CONIPAHFAPH(__this,method_00);
    ModelAnimation__NCBEJDPOLMB(__this,method_01);
  }
  pMVar12 = (MethodInfo *)0x0;
  CJNHFNHJHPE = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (NLEBDPHNIDI->fields).LCLBPCMKHPM.fields,(MethodInfo *)0x0);
  if (LGJEEEFEAKB) {
    iVar5 = ModelAnimation__MKIHMHHJLHE(__this,method_02);
    method_03 = extraout_x1;
    CJNHFNHJHPE = KGJLIPJNNKB + iVar5 + 1;
  }
  else {
    method_03 = method_02;
    if (-1 < KGJLIPJNNKB) {
      CJNHFNHJHPE = KGJLIPJNNKB;
    }
  }
  ModelAnimation__EABJNHKPJOM(__this,method_03);
  ModelAnimation__HONNLNIEELE(__this,OAFGMHOFEKM,pMVar12);
  ppEVar16 = &(__this->fields).NDBPNFLAKDL;
  (__this->fields).NDBPNFLAKDL = NLEBDPHNIDI;
  thunk_FUN_01c20e04(ppEVar16,NLEBDPHNIDI);
  CVar18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0)
  ;
  pEVar13 = (__this->fields).NDBPNFLAKDL;
  (__this->fields).KINFMBHKNLA.fields = CVar18;
  if (pEVar13 != (InfoAnimation_o *)0x0) {
    bVar1 = (pEVar13->fields).IPAGCJKIPEN.fields.fakeValueActive;
    bVar2 = (pEVar13->fields).IPAGCJKIPEN.fields.inited;
    uVar3 = *(undefined2 *)&(pEVar13->fields).IPAGCJKIPEN.fields.field_0xe;
    iVar5 = (pEVar13->fields).IPAGCJKIPEN.fields.currentCryptoKey;
    iVar6 = (pEVar13->fields).IPAGCJKIPEN.fields.hiddenValue;
    (__this->fields).IKPNGBKFCOL.fields.fakeValue = (pEVar13->fields).IPAGCJKIPEN.fields.fakeValue;
    (__this->fields).IKPNGBKFCOL.fields.fakeValueActive = bVar1;
    (__this->fields).IKPNGBKFCOL.fields.inited = bVar2;
    *(undefined2 *)&(__this->fields).IKPNGBKFCOL.fields.field_0xe = uVar3;
    (__this->fields).IKPNGBKFCOL.fields.currentCryptoKey = iVar5;
    (__this->fields).IKPNGBKFCOL.fields.hiddenValue = iVar6;
    bVar4 = InfoAnimation__FIDJFEGCIIL(pEVar13,(MethodInfo *)0x0);
    CVar19 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(bVar4,(MethodInfo *)0x0);
    (__this->fields).GFPACGPFOPI.fields = CVar19;
    iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
    pMVar12 = (MethodInfo *)0x0;
    iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (__this->fields).IKPNGBKFCOL.fields,(MethodInfo *)0x0);
    if (iVar6 + -1 < iVar5) {
      pMVar12 = (MethodInfo *)0x0;
      iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).IKPNGBKFCOL.fields,(MethodInfo *)0x0);
      CVar18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                         (iVar5 + -1,(MethodInfo *)0x0);
      (__this->fields).KINFMBHKNLA.fields = CVar18;
    }
    if (*ppEVar16 != (InfoAnimation_o *)0x0) {
      pUVar14 = ((*ppEVar16)->fields).MMENPDNBNHN;
      if ((pUVar14 == (UnityEngine_Vector3_array_array *)0x0) || (pUVar14->max_length == 0)) {
        pSVar7 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        if ((*ppEVar16 != (InfoAnimation_o *)0x0) && (pSVar7 != (System_Object_array *)0x0)) {
          pSVar17 = ((*ppEVar16)->fields).JIJLBFGKNJK;
          if ((pSVar17 == (System_String_o *)0x0) ||
             (lVar8 = thunk_FUN_01bda71c(pSVar17,(((pSVar7->obj).klass)->_1).element_class),
             lVar8 != 0)) {
            if ((int)pSVar7->max_length != 0) {
              pSVar7->m_Items[0] = (Il2CppObject *)pSVar17;
              thunk_FUN_01c20e04(pSVar7->m_Items,pSVar17);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogErrorFormat(StringLiteral_9169/*"ModelAnimation::playInfo - empty animation "{0}""*/,pSVar7,(MethodInfo *)0x0);
              (__this->fields).AANDHIFMLHC = false;
              return false;
            }
LAB_03207e90:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
LAB_03207e94:
          uVar11 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar11,0);
        }
      }
      else {
        CVar19 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                 CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                           (INAEABDIHKF,(MethodInfo *)0x0);
        (__this->fields).DCDOLDPKAGC.fields = CVar19;
        if (INAEABDIHKF) {
          if (*ppEVar16 == (InfoAnimation_o *)0x0) goto LAB_03207e8c;
          iVar5 = InfoAnimation__DINOEMMMNBJ(*ppEVar16,(MethodInfo *)0x0);
          ModelAnimation__HJCNIFHFOIH(__this,iVar5,pMVar12);
          CVar19 = (__this->fields).DCDOLDPKAGC.fields;
        }
        pEVar13 = (__this->fields).NDBPNFLAKDL;
        ABKNPBMGHKH = (__this->fields).EJNOBBDDBDO;
        bVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)CVar19,
                           (MethodInfo *)0x0);
        if (pEVar13 != (InfoAnimation_o *)0x0) {
          InfoAnimation__AMMECKCJFAM
                    (pEVar13,ABKNPBMGHKH,CJNHFNHJHPE,(bool)(~bVar4 & 1),(MethodInfo *)0x0);
          ModelAnimation__PHCDAOEAKHE(__this,method_04);
          ModelAnimation__AECCPFDPPOK(__this,method_05);
          ModelAnimation__IGAJHAMEBNO(__this,method_06);
          ModelAnimation__BIAPOHJPBCM(__this,method_07);
          iVar5 = InfoAnimation__DINOEMMMNBJ(NLEBDPHNIDI,(MethodInfo *)0x0);
          DJNBJHPDKDP__LJCDLMMMOGD<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).IFHALHIGBNM,iVar5,
                     Method_DJNBJHPDKDP_LJCDLMMMOGD<List<Vector3f>>__);
          pCVar10 = (__this->fields).AAOHMLDIGNK;
          (__this->fields).AANDHIFMLHC = true;
          (__this->fields).PIODLNMKAGJ = false;
          (__this->fields).FNMEOPOBFBC = 0x7fffffff;
          (__this->fields).GICJKGDDOLE = 0x7fffffff;
          (__this->fields).KDJBKDMJKHK = -3;
          (__this->fields).FANDONIBLKC = 0;
          (__this->fields).JJIDKDIGGEK = 0;
          (__this->fields).BPIIACENHPE = 0;
          if (pCVar10 != (Vector3f_o *)0x0) {
            Vector3f__DGLJCGNHLIG(pCVar10,(MethodInfo *)0x0);
            if (*ppEVar16 != (InfoAnimation_o *)0x0) {
              bVar4 = InfoAnimation__EIBIEFALKLG(*ppEVar16,(MethodInfo *)0x0);
              if (!bVar4) {
                pEVar13 = (__this->fields).NDBPNFLAKDL;
                if (pEVar13 == (InfoAnimation_o *)0x0) goto LAB_03207e8c;
                pCVar15 = (__this->fields).JGJCGMBHINN;
                pCVar10 = InfoAnimation__KHNKHIJEFIC(pEVar13,(MethodInfo *)0x0);
                if (pCVar15 == (Vector3f_o *)0x0) goto LAB_03207e8c;
                Vector3f__FOOHBJNHOKK(pCVar15,pCVar10,(MethodInfo *)0x0);
                pCVar10 = (__this->fields).JGJCGMBHINN;
                if (pCVar10 == (Vector3f_o *)0x0) goto LAB_03207e8c;
                (pCVar10->fields).super.OHHDBINAJCB =
                     (pCVar10->fields).super.OHHDBINAJCB * (float)(__this->fields).DMJAJGGGHPF;
              }
              pEVar13 = (__this->fields).NDBPNFLAKDL;
              if (pEVar13 != (InfoAnimation_o *)0x0) {
                pCVar15 = (__this->fields).JLOKLHINMKG;
                pCVar10 = InfoAnimation__OKGBDLBEJIP(pEVar13,(MethodInfo *)0x0);
                if (pCVar15 != (Vector3f_o *)0x0) {
                  pMVar12 = (MethodInfo *)0x0;
                  Vector3f__FOOHBJNHOKK(pCVar15,pCVar10,(MethodInfo *)0x0);
                  pCVar10 = (__this->fields).JLOKLHINMKG;
                  if (pCVar10 != (Vector3f_o *)0x0) {
                    (pCVar10->fields).super.OHHDBINAJCB =
                         (pCVar10->fields).super.OHHDBINAJCB * (float)(__this->fields).DMJAJGGGHPF;
                    ModelAnimation__PPPACEMNFGM(__this,method_08);
                    ModelAnimation__OIHAEHJGCDA(__this,(__this->fields).NDBPNFLAKDL,pMVar12);
                    return true;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03207e8c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ModelObject BBGBNLKMBMG()  [RVA 0x3108EBC]
// ModelAnimation$$BBGBNLKMBMG @ RVA 0x3108EBC

ModelObject_o * ModelAnimation__BBGBNLKMBMG(ModelAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).KOHECBJAFKG;
}


// ===== public ModelNode KEFBNMNGEEL(int OGPGLGPMEPD)  [RVA 0x3108EC4]
// ModelAnimation$$KEFBNMNGEEL @ RVA 0x3108EC4

ModelNode_o *
ModelAnimation__KEFBNMNGEEL(ModelAnimation_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  ModelObject_o *__this_00;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_01;
  ModelNode_o *pIVar1;
  
  if ((DAT_04566519 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Item__);
    DAT_04566519 = 1;
  }
  __this_00 = (__this->fields).KOHECBJAFKG;
  if ((__this_00 != (ModelObject_o *)0x0) &&
     (__this_01 = ModelObject__HMAAHELNECD(__this_00,(MethodInfo *)0x0),
     __this_01 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
    pIVar1 = (ModelNode_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_01,OGPGLGPMEPD,
                        Method_System_Collections_Generic_List<ModelNode>_get_Item__);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IGAJHAMEBNO()  [RVA 0x31084D0]
// ModelAnimation$$IGAJHAMEBNO @ RVA 0x31084D0

void ModelAnimation__IGAJHAMEBNO(ModelAnimation_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  KeyFrames_o *__this_00;
  KeyFrames_MJFFMMHJCNB_o *pMVar3;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_01;
  ModelNode_o *pIVar4;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *BODACGEEGLE;
  MethodInfo *extraout_x1;
  MethodInfo *in_x5;
  InfoAnimation_MNDFKOHIAHI_o *pEVar5;
  InfoAnimation_o *pEVar6;
  ModelObject_o *pGVar7;
  
  if ((DAT_0456651a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Item__);
    DAT_0456651a = 1;
    method = extraout_x1;
  }
  ModelAnimation__NIDHGNCCKOM(__this,method);
  pEVar6 = (__this->fields).NDBPNFLAKDL;
  if (pEVar6 != (InfoAnimation_o *)0x0) {
    pEVar5 = (pEVar6->fields).FGEAOBODDAP;
    (__this->fields).IOGCGDKKILK = false;
    if (pEVar5 != (InfoAnimation_MNDFKOHIAHI_o *)0x0) {
      if ((pEVar5->fields)._FCHBJLJDDOH_k__BackingField != false) {
        return;
      }
      __this_00 = (__this->fields).EJNOBBDDBDO;
      if (__this_00 != (KeyFrames_o *)0x0) {
        pGVar7 = (__this->fields).KOHECBJAFKG;
        iVar2 = (__this->fields).DMJAJGGGHPF;
        pMVar3 = KeyFrames__HBMICHOLLMF(__this_00,2,(MethodInfo *)0x0);
        if (pMVar3 != (KeyFrames_MJFFMMHJCNB_o *)0x0) {
          bVar1 = ModelAnimation__NGILHAOFGEA
                            (pGVar7,pEVar6,iVar2,(pMVar3->fields).KOANCCDDBDA,true,in_x5);
          (__this->fields).IOGCGDKKILK = bVar1;
          if (!bVar1) {
            return;
          }
          pGVar7 = (__this->fields).KOHECBJAFKG;
          if (pGVar7 != (ModelObject_o *)0x0) {
            iVar2 = ModelObject__HDEBEPGIFCJ(pGVar7,(__this->fields).NOEPMCHIBOL,(MethodInfo *)0x0);
            if (-1 < iVar2) {
              pGVar7 = (__this->fields).KOHECBJAFKG;
              (__this->fields).NOEPMCHIBOL = iVar2;
              if ((pGVar7 == (ModelObject_o *)0x0) ||
                 (__this_01 = ModelObject__HMAAHELNECD(pGVar7,(MethodInfo *)0x0),
                 __this_01 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0))
              goto LAB_0320860c;
              pIVar4 = (ModelNode_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_01,
                                  (__this->fields).NOEPMCHIBOL,
                                  Method_System_Collections_Generic_List<ModelNode>_get_Item__);
              (__this->fields).BAAPAKJGOMG = pIVar4;
              thunk_FUN_01c20e04();
            }
            pGVar7 = (__this->fields).KOHECBJAFKG;
            if (pGVar7 != (ModelObject_o *)0x0) {
              pEVar6 = (__this->fields).NDBPNFLAKDL;
              BODACGEEGLE = ModelObject__JNAHGJHEIOE(pGVar7,(MethodInfo *)0x0);
              if (pEVar6 != (InfoAnimation_o *)0x0) {
                InfoAnimation__LDNCMJNKHPO
                          (pEVar6,BODACGEEGLE,(__this->fields).EJNOBBDDBDO,2,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0320860c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BAHMCAAGBLP(int NBHHBBOJJME)  [RVA 0x31090EC]
// ModelAnimation$$BAHMCAAGBLP @ RVA 0x31090EC

void ModelAnimation__BAHMCAAGBLP(ModelAnimation_o *__this,int32_t NBHHBBOJJME,MethodInfo *method)

{
  (__this->fields).GAKFAKFDELH = NBHHBBOJJME;
  (__this->fields).KPJLPAIIDHB = 1.0 / (float)NBHHBBOJJME;
  return;
}


// ===== public int MKIHMHHJLHE()  [RVA 0x3106A18]
// ModelAnimation$$MKIHMHHJLHE @ RVA 0x3106A18

int32_t ModelAnimation__MKIHMHHJLHE(ModelAnimation_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int iVar3;
  InfoAnimation_o *pEVar4;
  
  pEVar4 = (__this->fields).NDBPNFLAKDL;
  if (pEVar4 != (InfoAnimation_o *)0x0) {
    iVar3 = (__this->fields).BPIIACENHPE;
    if ((pEVar4->fields).BFMPHOCJIHP == false) {
      iVar1 = 0;
      if (2 < iVar3) {
        iVar1 = iVar3 + -2;
      }
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
      iVar3 = iVar2 + iVar1;
    }
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HAKBGOLHNOK(ModelAnimation CJNHFNHJHPE)  [RVA 0x3109134]
// ModelAnimation$$HAKBGOLHNOK @ RVA 0x3109134

void ModelAnimation__HAKBGOLHNOK(ModelAnimation_o *__this,ModelAnimation_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).DPNACGKHLGD = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void PCKGHFDGHHJ(Vector3f CJNHFNHJHPE)  [RVA 0x310913C]
// ModelAnimation$$PCKGHFDGHHJ @ RVA 0x310913C

void ModelAnimation__PCKGHFDGHHJ(ModelAnimation_o *__this,Vector3f_o *CJNHFNHJHPE,MethodInfo *method)

{
  Vector3f_o *__this_00;
  
  __this_00 = (__this->fields).NMLGPAGEDKH;
  if (__this_00 != (Vector3f_o *)0x0) {
    Vector3f__FOOHBJNHOKK(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PHCDAOEAKHE()  [RVA 0x31081EC]
// ModelAnimation$$PHCDAOEAKHE @ RVA 0x31081EC

void ModelAnimation__PHCDAOEAKHE(ModelAnimation_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ModelObject_o *pGVar2;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  System_Object_array *args;
  long lVar3;
  Il2CppObject *pIVar4;
  ModelNode_o *__this_01;
  undefined8 uVar5;
  InfoAnimation_o *pEVar6;
  int index;
  System_String_o *pSVar7;
  int32_t local_28;
  int32_t local_24;
  
  if ((DAT_0456651b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_7360/*"In {0} animation {1} nodes, but in model only {2}"*/);
    DAT_0456651b = 1;
  }
  pGVar2 = (__this->fields).KOHECBJAFKG;
  if (pGVar2 != (ModelObject_o *)0x0) {
    ModelObject__GLMFAHPICHD(pGVar2,(MethodInfo *)0x0);
    pGVar2 = (__this->fields).KOHECBJAFKG;
    if (pGVar2 != (ModelObject_o *)0x0) {
      __this_00 = ModelObject__HMAAHELNECD(pGVar2,(MethodInfo *)0x0);
      pEVar6 = (__this->fields).NDBPNFLAKDL;
      if (pEVar6 != (InfoAnimation_o *)0x0) {
        iVar1 = InfoAnimation__DINOEMMMNBJ(pEVar6,(MethodInfo *)0x0);
        if (__this_00 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
          if (iVar1 <= (__this_00->fields)._size) {
LAB_032083cc:
            if (0 < iVar1) {
              index = 0;
              do {
                __this_01 = (ModelNode_o *)
                            System_Collections_Generic_List<object>__get_Item
                                      ((System_Collections_Generic_List_object__o *)__this_00,index,
                                       Method_System_Collections_Generic_List<ModelNode>_get_Item__
                                      );
                if (__this_01 == (ModelNode_o *)0x0) goto LAB_03208418;
                ModelNode__JKBONAAMFIL(__this_01,(MethodInfo *)0x0);
                index = index + 1;
              } while (iVar1 != index);
            }
            return;
          }
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
          pEVar6 = (__this->fields).NDBPNFLAKDL;
          if ((pEVar6 != (InfoAnimation_o *)0x0) && (args != (System_Object_array *)0x0)) {
            pSVar7 = (pEVar6->fields).JIJLBFGKNJK;
            if ((pSVar7 != (System_String_o *)0x0) &&
               (lVar3 = thunk_FUN_01bda71c(pSVar7,(((args->obj).klass)->_1).element_class),
               lVar3 == 0)) {
LAB_03208420:
              uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar5,0);
            }
            if ((int)args->max_length != 0) {
              args->m_Items[0] = (Il2CppObject *)pSVar7;
              thunk_FUN_01c20e04(args->m_Items,pSVar7);
              local_24 = iVar1;
              pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
              if ((pIVar4 != (Il2CppObject *)0x0) &&
                 (lVar3 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class),
                 lVar3 == 0)) goto LAB_03208420;
              if (1 < (uint)args->max_length) {
                args->m_Items[1] = pIVar4;
                thunk_FUN_01c20e04(args->m_Items + 1,pIVar4);
                local_28 = (__this_00->fields)._size;
                pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_28);
                if ((pIVar4 != (Il2CppObject *)0x0) &&
                   (lVar3 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class),
                   lVar3 == 0)) goto LAB_03208420;
                if (2 < (uint)args->max_length) {
                  args->m_Items[2] = pIVar4;
                  thunk_FUN_01c20e04(args->m_Items + 2,pIVar4);
                  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  UnityEngine_Debug__LogErrorFormat(StringLiteral_7360/*"In {0} animation {1} nodes, but in model only {2}"*/,args,(MethodInfo *)0x0);
                  iVar1 = (__this_00->fields)._size;
                  goto LAB_032083cc;
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
        }
      }
    }
  }
LAB_03208418:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BIAPOHJPBCM()  [RVA 0x3108610]
// ModelAnimation$$BIAPOHJPBCM @ RVA 0x3108610

void ModelAnimation__BIAPOHJPBCM(ModelAnimation_o *__this,MethodInfo *method)

{
  ModelAnimation_o *__this_00;
  long lVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  ModelAnimation_o *pOVar4;
  ModelAnimation_o *pOVar5;
  Vector3f_o *pCVar6;
  Vector3f_o *pCVar7;
  ShiftValue_o *pFVar8;
  KeyFrames_o *pMVar9;
  ModelObject_o *pGVar10;
  ModelNode_o *pIVar11;
  KeyFrames_MJFFMMHJCNB_o *pMVar12;
  System_Collections_Generic_List_CNDPAJOLKFN__o *pSVar13;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_01;
  MethodInfo *in_x2;
  InfoAnimation_o *pEVar14;
  InfoAnimation_HJPFANEPGJF_o *pEVar15;
  Vector3f_o *pCVar16;
  int32_t iVar17;
  InfoAnimation_KFMLLPPCPHI_o *pEVar18;
  float fVar19;
  float BCPIEFABCEC;
  float fVar20;
  int iVar21;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_0456651c & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    FUN_01bab630(&StringLiteral_3359/*"Back"*/);
    DAT_0456651c = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pEVar14 = (__this->fields).NDBPNFLAKDL;
  if (((pEVar14 == (InfoAnimation_o *)0x0) ||
      (pEVar15 = (pEVar14->fields).DMGLMCBIAGL, pEVar15 == (InfoAnimation_HJPFANEPGJF_o *)0x0)) ||
     (pEVar18 = (pEVar15->fields).EJNDOMGCGFL, pEVar18 == (InfoAnimation_KFMLLPPCPHI_o *)0x0))
  goto LAB_03208be0;
  pOVar4 = ModelAnimation__EOKACGOFPDN(__this,(pEVar18->fields).HGPLMIHMEBA,in_x2);
  pOVar5 = ModelAnimation__EOKACGOFPDN(__this,(pEVar18->fields).AIJIIAOLNNJ,in_x2);
  pCVar6 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar6,(MethodInfo *)0x0);
  pCVar7 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar7,(MethodInfo *)0x0);
  __this_00 = __this;
  if (pOVar5 != (ModelAnimation_o *)0x0) {
    __this_00 = pOVar5;
  }
  switch((pEVar18->fields).LBDADFDEMPE) {
  case 1:
    if (pOVar4 == (ModelAnimation_o *)0x0) goto LAB_03208be0;
    if ((((pOVar4->fields).IOGCGDKKILK == false) ||
        (iVar17 = (pEVar18->fields).ADHOLLAMHDG, iVar17 < 0)) &&
       (iVar17 = (pEVar18->fields).HHLJNICBMDA, iVar17 < 0)) {
LAB_03208778:
      iVar17 = 0;
    }
    else {
      pMVar9 = (__this->fields).EJNOBBDDBDO;
      if ((pMVar9 == (KeyFrames_o *)0x0) ||
         (pMVar12 = KeyFrames__HBMICHOLLMF(pMVar9,2,(MethodInfo *)0x0),
         pMVar12 == (KeyFrames_MJFFMMHJCNB_o *)0x0)) goto LAB_03208be0;
      if ((pMVar12->fields).ONGLGHIKBJF <= iVar17) goto LAB_03208778;
    }
    pMVar9 = (__this->fields).EJNOBBDDBDO;
    if (((pMVar9 == (KeyFrames_o *)0x0) ||
        (pMVar12 = KeyFrames__HBMICHOLLMF(pMVar9,2,(MethodInfo *)0x0),
        pMVar12 == (KeyFrames_MJFFMMHJCNB_o *)0x0)) ||
       (pSVar13 = (pMVar12->fields).KOANCCDDBDA,
       pSVar13 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) goto LAB_03208be0;
    goto LAB_032087ec;
  case 2:
    if (pCVar6 == (Vector3f_o *)0x0) goto LAB_03208be0;
    Vector3f__DGLJCGNHLIG(pCVar6,(MethodInfo *)0x0);
    iVar21 = (__this->fields).DMJAJGGGHPF;
    in_x2 = (MethodInfo *)0x0;
    bVar3 = System_String__op_Equality
                      ((pEVar18->fields).OBBONHJFLBG,StringLiteral_3359/*"Back"*/,(MethodInfo *)0x0);
    lVar1 = 0x128;
    if ((iVar21 != 1) == bVar3) {
      lVar1 = 300;
    }
    (pCVar6->fields).super.OHHDBINAJCB = -*(float *)((long)&__this->klass + lVar1);
    break;
  case 3:
    if (pCVar6 == (Vector3f_o *)0x0) goto LAB_03208be0;
    Vector3f__DGLJCGNHLIG(pCVar6,(MethodInfo *)0x0);
    break;
  case 4:
    pMVar9 = (__this->fields).EJNOBBDDBDO;
    if (((pMVar9 == (KeyFrames_o *)0x0) ||
        (pMVar12 = KeyFrames__HBMICHOLLMF(pMVar9,2,(MethodInfo *)0x0),
        pMVar12 == (KeyFrames_MJFFMMHJCNB_o *)0x0)) ||
       (pSVar13 = (pMVar12->fields).KOANCCDDBDA,
       pSVar13 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) goto LAB_03208be0;
    iVar17 = (__this->fields).NOEPMCHIBOL;
LAB_032087ec:
    pCVar16 = (Vector3f_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar13,iVar17,
                         Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    if (pCVar6 == (Vector3f_o *)0x0) goto LAB_03208be0;
    in_x2 = (MethodInfo *)0x0;
    Vector3f__FOOHBJNHOKK(pCVar6,pCVar16,(MethodInfo *)0x0);
  }
  switch((pEVar18->fields).LGNNMJOCKFL) {
  case 1:
    if (__this_00 == (ModelAnimation_o *)0x0) goto LAB_03208be0;
    if (((__this_00->fields).IOGCGDKKILK == false) ||
       (iVar21 = (pEVar18->fields).DEDEEJDBALF, iVar21 < 0)) {
      iVar21 = (pEVar18->fields).AFHPNIKKMBM;
    }
    pIVar11 = ModelAnimation__KEFBNMNGEEL(__this_00,iVar21,in_x2);
    if ((pIVar11 == (ModelNode_o *)0x0) || (pCVar7 == (Vector3f_o *)0x0)) goto LAB_03208be0;
    pCVar16 = (pIVar11->fields).CNMHHKAMGPI;
    goto LAB_032088dc;
  case 2:
    if (pCVar7 == (Vector3f_o *)0x0) goto LAB_03208be0;
    Vector3f__DGLJCGNHLIG(pCVar7,(MethodInfo *)0x0);
    iVar21 = (__this->fields).DMJAJGGGHPF;
    bVar3 = System_String__op_Equality
                      ((pEVar18->fields).CCFODMDLKFD,StringLiteral_3359/*"Back"*/,(MethodInfo *)0x0);
    lVar1 = 0x128;
    if ((iVar21 != 1) == bVar3) {
      lVar1 = 300;
    }
    (pCVar7->fields).super.OHHDBINAJCB = *(float *)((long)&__this->klass + lVar1);
    break;
  case 3:
    if ((__this_00 == (ModelAnimation_o *)0x0) || (pCVar7 == (Vector3f_o *)0x0)) goto LAB_03208be0;
    pCVar16 = (__this_00->fields).NMLGPAGEDKH;
LAB_032088dc:
    Vector3f__FOOHBJNHOKK(pCVar7,pCVar16,(MethodInfo *)0x0);
    break;
  case 4:
    if (__this_00 == (ModelAnimation_o *)0x0) goto LAB_03208be0;
    pIVar11 = (__this_00->fields).BAAPAKJGOMG;
    if (pIVar11 != (ModelNode_o *)0x0) {
      if (pCVar7 == (Vector3f_o *)0x0) goto LAB_03208be0;
      pCVar16 = (pIVar11->fields).CNMHHKAMGPI;
      goto LAB_032088dc;
    }
  }
  pFVar8 = (pEVar18->fields).IJILGOMOKCM;
  if (pFVar8 != (ShiftValue_o *)0x0) {
    if (pCVar7 == (Vector3f_o *)0x0) goto LAB_03208be0;
    fVar20 = (pCVar7->fields).super.OHHDBINAJCB;
    iVar21 = (__this->fields).DMJAJGGGHPF;
    fVar19 = ShiftValue__PPOKEOHAHFG(pFVar8,(__this->fields).KOHECBJAFKG,(MethodInfo *)0x0);
    (pCVar7->fields).super.OHHDBINAJCB = fVar20 + fVar19 * (float)iVar21;
  }
  pFVar8 = (pEVar18->fields).MECKAKAENEM;
  if (pFVar8 == (ShiftValue_o *)0x0) {
    if (pCVar7 == (Vector3f_o *)0x0) goto LAB_03208be0;
  }
  else {
    if (pCVar7 == (Vector3f_o *)0x0) goto LAB_03208be0;
    fVar20 = (pCVar7->fields).super.JOLEIODMLFL;
    fVar19 = ShiftValue__PPOKEOHAHFG(pFVar8,(__this->fields).KOHECBJAFKG,(MethodInfo *)0x0);
    (pCVar7->fields).super.JOLEIODMLFL = fVar20 + fVar19;
  }
  pCVar16 = (__this->fields).NMLGPAGEDKH;
  (__this->fields).BDLMOBMPOHM = (pCVar7->fields).super.OHHDBINAJCB;
  pCVar6 = Vector3f__MPOCFELGHDK(pCVar7,pCVar6,(MethodInfo *)0x0);
  if (pCVar16 != (Vector3f_o *)0x0) {
    Vector3f__FOOHBJNHOKK(pCVar16,pCVar6,(MethodInfo *)0x0);
    if ((pEVar18->fields).LBOJHMPHLGC == false) {
      pFVar8 = (pEVar18->fields).IJILGOMOKCM;
      if (pFVar8 == (ShiftValue_o *)0x0) {
        fVar19 = 0.0;
      }
      else {
        fVar19 = ShiftValue__PPOKEOHAHFG(pFVar8,(__this->fields).KOHECBJAFKG,(MethodInfo *)0x0);
      }
    }
    else {
      pCVar6 = (__this->fields).NMLGPAGEDKH;
      if (pCVar6 == (Vector3f_o *)0x0) goto LAB_03208be0;
      fVar19 = (pCVar6->fields).super.OHHDBINAJCB;
    }
    if ((pEVar18->fields).FPPCPCFBFCL == false) {
      pFVar8 = (pEVar18->fields).MECKAKAENEM;
      if (pFVar8 == (ShiftValue_o *)0x0) {
        fVar20 = 0.0;
      }
      else {
        fVar20 = ShiftValue__PPOKEOHAHFG(pFVar8,(__this->fields).KOHECBJAFKG,(MethodInfo *)0x0);
      }
    }
    else {
      pCVar6 = (__this->fields).NMLGPAGEDKH;
      if (pCVar6 == (Vector3f_o *)0x0) goto LAB_03208be0;
      fVar20 = (pCVar6->fields).super.JOLEIODMLFL;
    }
    if ((pEVar18->fields).ICPKNBPKPIF == false) {
      BCPIEFABCEC = 0.0;
    }
    else {
      pCVar6 = (__this->fields).NMLGPAGEDKH;
      if (pCVar6 == (Vector3f_o *)0x0) goto LAB_03208be0;
      BCPIEFABCEC = (pCVar6->fields).PPOPAMHBMGG;
    }
    pMVar9 = (__this->fields).EJNOBBDDBDO;
    if (pMVar9 != (KeyFrames_o *)0x0) {
      KeyFrames__GHKNFJJOIDM(pMVar9,fVar19,fVar20,BCPIEFABCEC,(MethodInfo *)0x0);
      bVar3 = System_String__IsNullOrEmpty((pEVar18->fields).GOJLAPEHHAM,(MethodInfo *)0x0);
      if (bVar3) {
        return;
      }
      pGVar10 = (__this->fields).KOHECBJAFKG;
      if (((pGVar10 != (ModelObject_o *)0x0) &&
          (pIVar11 = ModelObject__OCJAHBKIFNO
                               (pGVar10,(pEVar18->fields).GOJLAPEHHAM,(MethodInfo *)0x0),
          pIVar11 != (ModelNode_o *)0x0)) &&
         (pMVar9 = (__this->fields).EJNOBBDDBDO, pMVar9 != (KeyFrames_o *)0x0)) {
        iVar17 = (pIVar11->fields).FLDBGCIKMKA;
        pMVar12 = KeyFrames__HBMICHOLLMF(pMVar9,2,(MethodInfo *)0x0);
        if ((pMVar12 != (KeyFrames_MJFFMMHJCNB_o *)0x0) &&
           (pSVar13 = (pMVar12->fields).KOANCCDDBDA,
           pSVar13 != (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) {
          pCVar6 = (Vector3f_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar13,iVar17,
                              Method_System_Collections_Generic_List<Vector3f>_get_Item__);
          pCVar7 = Vector3f__MPOCFELGHDK(pCVar6,(pIVar11->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
          pCVar16 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
          Vector3f___ctor(pCVar16,pCVar7,(MethodInfo *)0x0);
          pCVar6 = Vector3f__MPOCFELGHDK(pCVar6,(pIVar11->fields).BJKKHONDAKP,(MethodInfo *)0x0);
          pCVar7 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
          Vector3f___ctor(pCVar7,pCVar6,(MethodInfo *)0x0);
          pGVar10 = (__this->fields).KOHECBJAFKG;
          if ((pGVar10 != (ModelObject_o *)0x0) &&
             (__this_01 = ModelObject__HMAAHELNECD(pGVar10,(MethodInfo *)0x0),
             __this_01 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
                       Method_System_Collections_Generic_List<ModelNode>_GetEnumerator__);
            local_70.fields._index = local_88.fields._index;
            local_70.fields._version = local_88.fields._version;
            local_70.fields._list = local_88.fields._list;
            local_70.fields._current = local_88.fields._current;
            while( true ) {
              bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_70,
                                 Method_System_Collections_Generic_List_Enumerator<ModelNode>_MoveNext__
                                );
              pIVar2 = local_70.fields._current;
              if (!bVar3) {
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<ModelNode>_Dispose__)
                ;
                return;
              }
              if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if (local_70.fields._current[3].monitor == (Vector3f_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              Vector3f__LFENGGKOJDO
                        (local_70.fields._current[3].monitor,pCVar16,(MethodInfo *)0x0);
              if (pIVar2[4].klass == (Il2CppClass *)0x0) break;
              Vector3f__LFENGGKOJDO((Vector3f_o *)pIVar2[4].klass,pCVar7,(MethodInfo *)0x0);
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
      }
    }
  }
LAB_03208be0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HONNLNIEELE(int CJNHFNHJHPE)  [RVA 0x3107EA0]
// ModelAnimation$$HONNLNIEELE @ RVA 0x3107EA0

void ModelAnimation__HONNLNIEELE(ModelAnimation_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_0456651d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_20763/*"set sign value != -1 or 1"*/);
    DAT_0456651d = 1;
  }
  if (CJNHFNHJHPE < 0) {
    (__this->fields).DMJAJGGGHPF = -1;
  }
  else {
    (__this->fields).DMJAJGGGHPF = 1;
    if (CJNHFNHJHPE == 0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_20763/*"set sign value != -1 or 1"*/,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ===== public int GDHKDIHBBKC()  [RVA 0x31092B4]
// ModelAnimation$$GDHKDIHBBKC @ RVA 0x31092B4

int32_t ModelAnimation__GDHKDIHBBKC(ModelAnimation_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public int MALPGCALHNK()  [RVA 0x31092C4]
// ModelAnimation$$MALPGCALHNK @ RVA 0x31092C4

int32_t ModelAnimation__MALPGCALHNK(ModelAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).DMJAJGGGHPF;
}


// ===== public void OIHAEHJGCDA(InfoAnimation NLEBDPHNIDI)  [RVA 0x3108E60]
// ModelAnimation$$OIHAEHJGCDA @ RVA 0x3108E60

void ModelAnimation__OIHAEHJGCDA(ModelAnimation_o *__this,InfoAnimation_o *NLEBDPHNIDI,MethodInfo *method)

{
  if ((DAT_0456651e & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_0456651e = 1;
  }
  OMLLDCIMLBB<object>__CallEvent
            ((OMLLDCIMLBB_object__o *)__this,0,(Il2CppObject *)NLEBDPHNIDI,
             Method_OMLLDCIMLBB<object>_CallEvent__);
  return;
}


// ===== public static bool NGILHAOFGEA(ModelNode LFALCONFCGH, ModelNode NMGJAKHNCND, int OAFGMHOFEKM, List<Vector3f> PDCJPCDLHCI, bool LBFDGHOEPPM = True)  [RVA 0x31092CC]
// ModelAnimation$$NGILHAOFGEA @ RVA 0x31092CC

bool ModelAnimation__NGILHAOFGEA
               (ModelNode_o *LFALCONFCGH,ModelNode_o *NMGJAKHNCND,int32_t OAFGMHOFEKM,
               System_Collections_Generic_List_CNDPAJOLKFN__o *PDCJPCDLHCI,bool LBFDGHOEPPM,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Vector3f_o *pCVar2;
  Vector3f_o *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int32_t local_60;
  int32_t iStack_5c;
  ModelNode_o *local_58;
  ModelNode_o *local_48;
  
  local_58 = NMGJAKHNCND;
  local_48 = LFALCONFCGH;
  if ((DAT_0456651f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    FUN_01bab630(&Method_Util_JGJFNOOGAEP<ModelNode>__);
    FUN_01bab630(&Method_Util_JGJFNOOGAEP<int>__);
    DAT_0456651f = 1;
  }
  local_60 = 0;
  iStack_5c = 0;
  if (OAFGMHOFEKM == -1) {
    Util__JGJFNOOGAEP<object>
              ((Il2CppObject **)&local_48,(Il2CppObject **)&local_58,
               Method_Util_JGJFNOOGAEP<ModelNode>__);
    LFALCONFCGH = local_48;
  }
  if (((((LFALCONFCGH != (ModelNode_o *)0x0) &&
        (iStack_5c = (LFALCONFCGH->fields).FLDBGCIKMKA, local_58 != (ModelNode_o *)0x0)) &&
       ((local_60 = (local_58->fields).FLDBGCIKMKA, OAFGMHOFEKM != -1 ||
        ((LBFDGHOEPPM ||
         (Util__JGJFNOOGAEP<int>(&iStack_5c,&local_60,Method_Util_JGJFNOOGAEP<int>__),
         LFALCONFCGH = local_48, local_48 != (ModelNode_o *)0x0)))))) &&
      (pCVar2 = (LFALCONFCGH->fields).CNMHHKAMGPI, pCVar2 != (Vector3f_o *)0x0)) &&
     (((local_58 != (ModelNode_o *)0x0 &&
       (pCVar3 = (local_58->fields).CNMHHKAMGPI, pCVar3 != (Vector3f_o *)0x0)) &&
      (PDCJPCDLHCI != (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)))) {
    fVar4 = (pCVar2->fields).super.OHHDBINAJCB;
    fVar5 = (pCVar3->fields).super.OHHDBINAJCB;
    pIVar1 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)PDCJPCDLHCI,iStack_5c,
                        Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    if (pIVar1 != (Il2CppObject *)0x0) {
      fVar6 = *(float *)&pIVar1[1].klass;
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)PDCJPCDLHCI,local_60,
                          Method_System_Collections_Generic_List<Vector3f>_get_Item__);
      if (pIVar1 != (Il2CppObject *)0x0) {
        return fVar5 <= fVar4 != *(float *)&pIVar1[1].klass <= fVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public InfoAnimation CDFAMOHHLDM()  [RVA 0x3109434]
// ModelAnimation$$CDFAMOHHLDM @ RVA 0x3109434

InfoAnimation_o * ModelAnimation__CDFAMOHHLDM(ModelAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).NOAFGDFHHMN;
}


// ===== public void BDHAMOEKNNK()  [RVA 0x310943C]
// ModelAnimation$$BDHAMOEKNNK @ RVA 0x310943C

void ModelAnimation__BDHAMOEKNNK(ModelAnimation_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  KeyFrames_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_x1;
  MethodInfo *method_04;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_05;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_06;
  MethodInfo *extraout_x1_03;
  MethodInfo *pMVar5;
  MethodInfo *method_07;
  MethodInfo *in_x3;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (__this->fields).FBGLMJNEPOF = (__this->fields).FBGLMJNEPOF + 1;
  if ((__this->fields).AANDHIFMLHC == false) {
    if ((__this->fields).PIODLNMKAGJ == false) {
      return;
    }
    if ((__this->fields).NDBPNFLAKDL == (InfoAnimation_o *)0x0) {
      return;
    }
    (__this->fields).BPIIACENHPE = (__this->fields).BPIIACENHPE + 3;
    ModelAnimation__FJCKMGLHDGG(__this,method);
    (__this->fields).PIODLNMKAGJ = false;
    return;
  }
  iVar1 = (__this->fields).KDJBKDMJKHK;
  if (iVar1 == -3) {
    if ((__this->fields).JJIDKDIGGEK == 0) {
      (__this->fields).FANDONIBLKC = 0;
    }
  }
  else {
    (__this->fields).KDJBKDMJKHK = iVar1 + 1;
  }
  ModelAnimation__CNJDMGLAFNA(__this,method);
  __this_00 = (__this->fields).EJNOBBDDBDO;
  if (__this_00 == (KeyFrames_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar3 = KeyFrames__CGBLCMEMAPH(__this_00,(MethodInfo *)0x0);
  bVar2 = ModelAnimation__ICJLPHPDDEO(__this,method_00);
  if (bVar2) {
    ModelAnimation__BGEKGOEAPKE(__this,method_01);
    (__this->fields).FANDONIBLKC = (__this->fields).FANDONIBLKC + 1;
    ModelAnimation__LCEFIPCHKMN(__this,method_02);
    bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                       (__this->fields).BHJAJHGCMIB.fields,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    bVar2 = ModelAnimation__ICJLPHPDDEO(__this,method_03);
    if (bVar2) {
      return;
    }
    if ((__this->fields).BPIIACENHPE + 2 < iVar3) {
      return;
    }
    method_07 = (MethodInfo *)0x0;
    bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                       (__this->fields).GFPACGPFOPI.fields,(MethodInfo *)0x0);
    pMVar5 = extraout_x1;
    if (bVar2) {
      iVar3 = (__this->fields).BPIIACENHPE;
      iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
      ModelAnimation__KCOKKAHCOLG(__this,iVar3,iVar4 + 1,in_x3);
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
      (__this->fields).BPIIACENHPE = iVar3;
      return;
    }
  }
  else {
    bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                       (__this->fields).BHJAJHGCMIB.fields,(MethodInfo *)0x0);
    iVar1 = (__this->fields).BPIIACENHPE + 2;
    if ((bVar2) || (iVar1 < iVar3)) {
      pMVar5 = method_04;
      if ((iVar1 < iVar3) &&
         (bVar2 = ModelAnimation__ICJLPHPDDEO(__this,method_04), pMVar5 = extraout_x1_01, !bVar2)) {
        ModelAnimation__KCOKKAHCOLG(__this,-1,-1,in_x3);
        pMVar5 = extraout_x1_02;
      }
      bVar2 = ModelAnimation__ICJLPHPDDEO(__this,pMVar5);
      pMVar5 = method_06;
      if (bVar2) {
        ModelAnimation__BGEKGOEAPKE(__this,method_06);
        pMVar5 = extraout_x1_03;
      }
      uVar6 = (__this->fields).JJIDKDIGGEK;
      uVar7 = (__this->fields).BPIIACENHPE;
      (__this->fields).FANDONIBLKC = (__this->fields).FANDONIBLKC + 1;
      (__this->fields).JJIDKDIGGEK = uVar6 + 1;
      (__this->fields).BPIIACENHPE = uVar7 + 1;
      ModelAnimation__FJCKMGLHDGG(__this,pMVar5);
      return;
    }
    method_07 = (MethodInfo *)0x0;
    bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                       (__this->fields).GFPACGPFOPI.fields,(MethodInfo *)0x0);
    pMVar5 = extraout_x1_00;
    if (bVar2) {
      iVar3 = (__this->fields).BPIIACENHPE;
      iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
      ModelAnimation__KCOKKAHCOLG(__this,iVar3,iVar4 + 1,in_x3);
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
      (__this->fields).BPIIACENHPE = iVar3 + 1;
      ModelAnimation__BGEKGOEAPKE(__this,method_05);
      (__this->fields).FANDONIBLKC = (__this->fields).FANDONIBLKC + 1;
      return;
    }
  }
  (__this->fields).AANDHIFMLHC = false;
  ModelAnimation__EABJNHKPJOM(__this,pMVar5);
  ModelAnimation__EFNENLMNEII(__this,(__this->fields).NDBPNFLAKDL,method_07);
  (__this->fields).AANDHIFMLHC = false;
  (__this->fields).PIODLNMKAGJ = true;
  return;
}


// ===== public void IBIGMDGJOAL(IntervalAnimation LEAMIBIAIIN)  [RVA 0x310751C]
// ModelAnimation$$IBIGMDGJOAL @ RVA 0x310751C

void ModelAnimation__IBIGMDGJOAL(ModelAnimation_o *__this,IntervalAnimation_o *LEAMIBIAIIN,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint16_t uVar5;
  uint16_t uVar6;
  System_String_o *pSVar7;
  ModelObject_o *__this_00;
  ModelEdge_o *item;
  System_Collections_Generic_List_GEBHIBIEAJE__o *__this_01;
  ModelEdge_array *pGVar8;
  IntervalAnimation_c *pJVar9;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566520 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelEdge>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&IntervalAttack_TypeInfo);
    FUN_01bab630(&StringLiteral_1943/*"2"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    DAT_04566520 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (LEAMIBIAIIN != (IntervalAnimation_o *)0x0) {
    pJVar9 = LEAMIBIAIIN->klass;
    bVar1 = (IntervalAttack_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (pJVar9->_2).naturalAligment) &&
       ((pJVar9->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)IntervalAttack_TypeInfo)) {
      if ((pJVar9->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)IntervalAttack_TypeInfo) {
        LEAMIBIAIIN = (IntervalAnimation_o *)0x0;
      }
      if (LEAMIBIAIIN[3].klass != (IntervalAnimation_c *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_88,(System_Collections_Generic_List_object__o *)LEAMIBIAIIN[3].klass,
                   Method_System_Collections_Generic_List<string>_GetEnumerator__);
        local_70.fields._index = local_88.fields._index;
        local_70.fields._version = local_88.fields._version;
        local_70.fields._list = local_88.fields._list;
        local_70.fields._current = local_88.fields._current;
        while( true ) {
          do {
            bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_70,
                               Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__)
            ;
            pSVar7 = (System_String_o *)local_70.fields._current;
            if (!bVar4) {
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
              return;
            }
            if ((__this->fields).IOGCGDKKILK != false) {
              if ((System_String_o *)local_70.fields._current == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar5 = System_String__get_Chars
                                ((System_String_o *)local_70.fields._current,
                                 ((System_String_Fields *)((long)local_70.fields._current + 0x10))->
                                 _stringLength + -2,(MethodInfo *)0x0);
              uVar6 = System_String__get_Chars
                                (pSVar7,((System_String_Fields *)((long)pSVar7 + 0x10))->
                                        _stringLength + -1,(MethodInfo *)0x0);
              if (uVar5 == 0x5f) {
                if (uVar6 == 0x32) {
                  pSVar7 = System_String__Remove
                                     (pSVar7,((System_String_Fields *)((long)pSVar7 + 0x10))->
                                             _stringLength + -1,1,(MethodInfo *)0x0);
                  pSVar7 = System_String__Concat(pSVar7,StringLiteral_1606/*"1"*/,(MethodInfo *)0x0);
                }
                else if (uVar6 == 0x31) {
                  pSVar7 = System_String__Remove
                                     (pSVar7,((System_String_Fields *)((long)pSVar7 + 0x10))->
                                             _stringLength + -1,1,(MethodInfo *)0x0);
                  pSVar7 = System_String__Concat(pSVar7,StringLiteral_1943/*"2"*/,(MethodInfo *)0x0);
                }
              }
            }
            __this_00 = (__this->fields).KOHECBJAFKG;
            if (__this_00 == (ModelObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            item = ModelObject__MOEFLHJOFIC(__this_00,pSVar7,(MethodInfo *)0x0);
            lVar3 = Method_System_Collections_Generic_List<ModelEdge>_Add__;
          } while (item == (ModelEdge_o *)0x0);
          __this_01 = (__this->fields).HALIJPAEEBE;
          if (__this_01 == (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pGVar8 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pGVar8 == (ModelEdge_array *)0x0) break;
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pGVar8->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pGVar8->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04(pGVar8->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CLJDNOHAAND(ModelAnimation CJNHFNHJHPE)  [RVA 0x3109B58]
// ModelAnimation$$CLJDNOHAAND @ RVA 0x3109B58

void ModelAnimation__CLJDNOHAAND(ModelAnimation_o *__this,ModelAnimation_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MLANKGMLJBF = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void JFFEFOIHEIG()  [RVA 0x3109B60]
// ModelAnimation$$JFFEFOIHEIG @ RVA 0x3109B60

void ModelAnimation__JFFEFOIHEIG(ModelAnimation_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (__this->fields).JJIDKDIGGEK;
  uVar2 = (__this->fields).BPIIACENHPE;
  (__this->fields).JJIDKDIGGEK = uVar1 + 1;
  (__this->fields).BPIIACENHPE = uVar2 + 1;
  ModelAnimation__FJCKMGLHDGG(__this,method);
  return;
}


// ===== private void AANBBBENGJE()  [RVA 0x3109B74]
// ModelAnimation$$AANBBBENGJE @ RVA 0x3109B74

void ModelAnimation__AANBBBENGJE(ModelAnimation_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  ModelAnimation__AANBBBENGJE(__this,(__this->fields).JLOKLHINMKG,in_x2);
  return;
}


// ===== private float FCDDJKKOCIJ(List<Vector3f> PKDBOMAHGHC)  [RVA 0x3109B7C]
// ModelAnimation$$FCDDJKKOCIJ @ RVA 0x3109B7C

float ModelAnimation__FCDDJKKOCIJ
                (ModelAnimation_o *__this,System_Collections_Generic_List_CNDPAJOLKFN__o *PKDBOMAHGHC,
                MethodInfo *method)

{
  Il2CppObject *pIVar1;
  ModelNode_o *pIVar2;
  Vector3f_o *pCVar3;
  float fVar4;
  
  if ((DAT_04566521 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    DAT_04566521 = 1;
  }
  pIVar2 = (__this->fields).BAAPAKJGOMG;
  if (((pIVar2 != (ModelNode_o *)0x0) &&
      (pCVar3 = (pIVar2->fields).CNMHHKAMGPI, pCVar3 != (Vector3f_o *)0x0)) &&
     (PKDBOMAHGHC != (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) {
    fVar4 = (pCVar3->fields).super.JOLEIODMLFL;
    pIVar1 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)PKDBOMAHGHC,
                        (__this->fields).NOEPMCHIBOL,
                        Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    if (pIVar1 != (Il2CppObject *)0x0) {
      return fVar4 - *(float *)((long)&pIVar1[1].klass + 4);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool HIEIGJFFBFA(List<string> OKAINPMIKKD)  [RVA 0x3109C00]
// ModelAnimation$$HIEIGJFFBFA @ RVA 0x3109C00

bool ModelAnimation__HIEIGJFFBFA
               (ModelAnimation_o *__this,System_Collections_Generic_List_string__o *OKAINPMIKKD,
               MethodInfo *method)

{
  int iVar1;
  System_String_o *OONIBCILJBN;
  IntervalAnimation_o *pJVar2;
  MethodInfo *method_00;
  int iVar3;
  bool bVar4;
  
  if ((DAT_04566522 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_04566522 = 1;
  }
  if (OKAINPMIKKD != (System_Collections_Generic_List_string__o *)0x0) {
    iVar3 = (OKAINPMIKKD->fields)._size;
    bVar4 = 0 < iVar3;
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        method_00 = Method_System_Collections_Generic_List<string>_get_Item__;
        OONIBCILJBN = (System_String_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)OKAINPMIKKD,iVar3,
                                 (MethodInfo_26E4ADC *)
                                 Method_System_Collections_Generic_List<string>_get_Item__);
        pJVar2 = ModelAnimation__HIMFHBJAEMJ(__this,OONIBCILJBN,method_00);
        if (pJVar2 != (IntervalAnimation_o *)0x0) {
          return bVar4;
        }
        iVar1 = (OKAINPMIKKD->fields)._size;
        iVar3 = iVar3 + 1;
        bVar4 = iVar3 < iVar1;
      } while (iVar3 < iVar1);
    }
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HJCNIFHFOIH(int KCKJHNCJDGD)  [RVA 0x3107F34]
// ModelAnimation$$HJCNIFHFOIH @ RVA 0x3107F34

void ModelAnimation__HJCNIFHFOIH(ModelAnimation_o *__this,int32_t KCKJHNCJDGD,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  KeyFrames_o *pMVar3;
  KeyFrames_MJFFMMHJCNB_o *pMVar4;
  KeyFrames_MJFFMMHJCNB_o *pMVar5;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  Il2CppObject *pIVar6;
  System_Collections_Generic_List_CNDPAJOLKFN__o *pSVar7;
  Vector3f_o *pCVar8;
  InfoAnimation_o *pEVar9;
  ModelObject_o *__this_01;
  Il2CppClass *pIVar10;
  int index;
  Vector3f_o *pCVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((DAT_04566523 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Item__);
    FUN_01bab630(&StringLiteral_9165/*"ModelAnimation::SetInterruptFrames: _AnimationInfo=null"*/);
    DAT_04566523 = 1;
  }
  if ((__this->fields).NDBPNFLAKDL == (InfoAnimation_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_9165/*"ModelAnimation::SetInterruptFrames: _AnimationInfo=null"*/,(MethodInfo *)0x0);
    return;
  }
  pMVar3 = (__this->fields).EJNOBBDDBDO;
  if (pMVar3 != (KeyFrames_o *)0x0) {
    KeyFrames__PIIOPLBOFKA(pMVar3,KCKJHNCJDGD,(MethodInfo *)0x0);
    pEVar9 = (__this->fields).NDBPNFLAKDL;
    if (pEVar9 != (InfoAnimation_o *)0x0) {
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (pEVar9->fields).FECCBIOBKAF.fields,(MethodInfo *)0x0);
      pMVar3 = (__this->fields).EJNOBBDDBDO;
      iVar1 = iVar2 + 2;
      if (-1 < iVar2 + 1) {
        iVar1 = iVar2 + 1;
      }
      if (pMVar3 != (KeyFrames_o *)0x0) {
        pMVar4 = KeyFrames__HBMICHOLLMF(pMVar3,0,(MethodInfo *)0x0);
        pMVar3 = (__this->fields).EJNOBBDDBDO;
        if (pMVar3 != (KeyFrames_o *)0x0) {
          pMVar5 = KeyFrames__HBMICHOLLMF(pMVar3,1,(MethodInfo *)0x0);
          __this_01 = (__this->fields).KOHECBJAFKG;
          if ((__this_01 != (ModelObject_o *)0x0) &&
             (__this_00 = ModelObject__HMAAHELNECD(__this_01,(MethodInfo *)0x0),
             pMVar4 != (KeyFrames_MJFFMMHJCNB_o *)0x0)) {
            if (0 < (pMVar4->fields).ONGLGHIKBJF) {
              index = 0;
              fVar15 = (float)(iVar1 >> 1);
              do {
                if ((__this_00 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) ||
                   (pIVar6 = System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)__this_00,index
                                        ,
                                        Method_System_Collections_Generic_List<ModelNode>_get_Item__
                                       ), pIVar6 == (Il2CppObject *)0x0)) goto LAB_032081e8;
                pCVar11 = pIVar6[3].monitor;
                pIVar6 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)__this_00,index,
                                    Method_System_Collections_Generic_List<ModelNode>_get_Item__);
                if ((pIVar6 == (Il2CppObject *)0x0) ||
                   (((pCVar11 == (Vector3f_o *)0x0 ||
                     (pIVar10 = pIVar6[4].klass, pIVar10 == (Il2CppClass *)0x0)) ||
                    (pSVar7 = (pMVar4->fields).KOANCCDDBDA,
                    pSVar7 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0))))
                goto LAB_032081e8;
                fVar12 = (pCVar11->fields).super.OHHDBINAJCB;
                fVar13 = (pCVar11->fields).super.JOLEIODMLFL;
                fVar18 = *(float *)&(pIVar10->_1).name;
                fVar16 = *(float *)((long)&(pIVar10->_1).name + 4);
                fVar14 = (pCVar11->fields).PPOPAMHBMGG;
                fVar17 = *(float *)&(pIVar10->_1).namespaze;
                pCVar8 = (Vector3f_o *)
                         System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar7,index,
                                    Method_System_Collections_Generic_List<Vector3f>_get_Item__);
                if (pCVar8 == (Vector3f_o *)0x0) goto LAB_032081e8;
                Vector3f__FOOHBJNHOKK(pCVar8,pCVar11,(MethodInfo *)0x0);
                pSVar7 = (pMVar4->fields).KOANCCDDBDA;
                if ((pSVar7 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0) ||
                   (pCVar8 = (Vector3f_o *)
                             System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)pSVar7,index,
                                        Method_System_Collections_Generic_List<Vector3f>_get_Item__
                                       ), pCVar8 == (Vector3f_o *)0x0)) goto LAB_032081e8;
                fVar18 = (fVar12 - fVar18) * fVar15;
                fVar13 = (fVar13 - fVar16) * fVar15;
                fVar12 = (fVar14 - fVar17) * fVar15;
                Vector3f__LOPALOLIHBH(pCVar8,fVar18,fVar13,fVar12,(MethodInfo *)0x0);
                if ((pMVar5 == (KeyFrames_MJFFMMHJCNB_o *)0x0) ||
                   ((pSVar7 = (pMVar5->fields).KOANCCDDBDA,
                    pSVar7 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0 ||
                    (pCVar8 = (Vector3f_o *)
                              System_Collections_Generic_List<object>__get_Item
                                        ((System_Collections_Generic_List_object__o *)pSVar7,index,
                                         Method_System_Collections_Generic_List<Vector3f>_get_Item__
                                        ), pCVar8 == (Vector3f_o *)0x0)))) goto LAB_032081e8;
                Vector3f__FOOHBJNHOKK(pCVar8,pCVar11,(MethodInfo *)0x0);
                pSVar7 = (pMVar5->fields).KOANCCDDBDA;
                if ((pSVar7 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0) ||
                   (pCVar11 = (Vector3f_o *)
                              System_Collections_Generic_List<object>__get_Item
                                        ((System_Collections_Generic_List_object__o *)pSVar7,index,
                                         Method_System_Collections_Generic_List<Vector3f>_get_Item__
                                        ), pCVar11 == (Vector3f_o *)0x0)) goto LAB_032081e8;
                Vector3f__LFENGGKOJDO(pCVar11,fVar18,fVar13,fVar12,(MethodInfo *)0x0);
                index = index + 1;
              } while (index < (pMVar4->fields).ONGLGHIKBJF);
            }
            return;
          }
        }
      }
    }
  }
LAB_032081e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int IKJKKGOMCLO()  [RVA 0x3109D7C]
// ModelAnimation$$IKJKKGOMCLO @ RVA 0x3109D7C

int32_t ModelAnimation__IKJKKGOMCLO(ModelAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).FBGLMJNEPOF;
}


// ===== public float PDDIMGPPDJG()  [RVA 0x3109D84]
// ModelAnimation$$PDDIMGPPDJG @ RVA 0x3109D84

float ModelAnimation__PDDIMGPPDJG(ModelAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).GOIHMJKAHJN;
}


// ===== public ModelNode ILECMJOENMK()  [RVA 0x3109D8C]
// ModelAnimation$$ILECMJOENMK @ RVA 0x3109D8C

ModelNode_o * ModelAnimation__ILECMJOENMK(ModelAnimation_o *__this,MethodInfo *method)

{
  if ((__this->fields).AANDHIFMLHC != false) {
    return (__this->fields).BAAPAKJGOMG;
  }
  return (ModelNode_o *)0x0;
}


// ===== public void BGJNOONKFCH(IntervalAnimation.IMLPLLLPALI ACCIHBHMFPN)  [RVA 0x3109DA4]
// ModelAnimation$$BGJNOONKFCH @ RVA 0x3109DA4

void ModelAnimation__BGJNOONKFCH(ModelAnimation_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  System_Collections_Generic_HashSet_JADGCGOJLJB_IMLPLLLPALI__o *pSVar1;
  System_Collections_Generic_HashSet_JADGCGOJLJB_IMLPLLLPALI__o **ppSVar2;
  
  if ((DAT_04566524 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<IntervalAnimation_IMLPLLLPALI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<IntervalAnimation_IMLPLLLPALI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<IntervalAnimation_IMLPLLLPALI>_TypeInfo);
    DAT_04566524 = 1;
  }
  ppSVar2 = &(__this->fields).HCDNAGGCLDA;
  pSVar1 = *ppSVar2;
  if (pSVar1 == (System_Collections_Generic_HashSet_JADGCGOJLJB_IMLPLLLPALI__o *)0x0) {
    pSVar1 = (System_Collections_Generic_HashSet_JADGCGOJLJB_IMLPLLLPALI__o *)
             thunk_FUN_01bda818(System_Collections_Generic_HashSet<IntervalAnimation_IMLPLLLPALI>_TypeInfo
                               );
    System_Collections_Generic_HashSet<Int32Enum>___ctor
              ((System_Collections_Generic_HashSet_T__o *)pSVar1,
               Method_System_Collections_Generic_HashSet<IntervalAnimation_IMLPLLLPALI>__ctor__);
    *ppSVar2 = pSVar1;
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
    pSVar1 = *ppSVar2;
    if (pSVar1 == (System_Collections_Generic_HashSet_JADGCGOJLJB_IMLPLLLPALI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  System_Collections_Generic_HashSet<Int32Enum>__Add
            ((System_Collections_Generic_HashSet_T__o *)pSVar1,ACCIHBHMFPN,
             Method_System_Collections_Generic_HashSet<IntervalAnimation_IMLPLLLPALI>_Add__);
  return;
}


// ===== private void HFBJGGAJFGK()  [RVA 0x3109E50]
// ModelAnimation$$HFBJGGAJFGK @ RVA 0x3109E50

void ModelAnimation__HFBJGGAJFGK(ModelAnimation_o *__this,MethodInfo *method)

{
  int iVar1;
  ModelObject_o *pGVar2;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  DistancePoint_o *pPVar3;
  ModelNode_o *__this_01;
  Vector3f_o *CJNHFNHJHPE;
  InfoAnimation_o *pEVar4;
  System_Collections_Generic_List_List_CNDPAJOLKFN___o *pSVar5;
  Model_o *pOVar6;
  int index;
  float fVar7;
  float fVar8;
  float in_s1;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  float local_68;
  float fStack_64;
  
  if ((DAT_04566525 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<List<Vector3f>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Item__);
    DAT_04566525 = 1;
  }
  pGVar2 = (__this->fields).KOHECBJAFKG;
  if (pGVar2 != (ModelObject_o *)0x0) {
    __this_00 = ModelObject__HMAAHELNECD(pGVar2,(MethodInfo *)0x0);
    pEVar4 = (__this->fields).NDBPNFLAKDL;
    if ((((pEVar4 != (InfoAnimation_o *)0x0) &&
         (pGVar2 = (__this->fields).KOHECBJAFKG, pGVar2 != (ModelObject_o *)0x0)) &&
        (pOVar6 = (pGVar2->fields).KOHECBJAFKG, pOVar6 != (Model_o *)0x0)) &&
       (pPVar3 = (pEVar4->fields).JCKNGNJBIIF, pPVar3 != (DistancePoint_o *)0x0)) {
      fVar7 = (float)(*(pPVar3->klass->vtable)._7_KILOIOEILFL.methodPtr)
                               (pPVar3,(pOVar6->fields).FNEAAHOOHAA,
                                (pPVar3->klass->vtable)._7_KILOIOEILFL.method);
      pSVar5 = (__this->fields).IFHALHIGBNM;
      if (pSVar5 != (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0) {
        iVar1 = (pSVar5->fields)._size;
        if (0 < iVar1) {
          if (__this_00 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) goto LAB_03209ffc;
          index = 0;
          do {
            __this_01 = (ModelNode_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_00,index,
                                   Method_System_Collections_Generic_List<ModelNode>_get_Item__);
            pGVar2 = (__this->fields).KOHECBJAFKG;
            if (pGVar2 == (ModelObject_o *)0x0) goto LAB_03209ffc;
            if ((pGVar2->fields).FJHAMMNKBPN == false) {
              if (__this_01 == (ModelNode_o *)0x0) goto LAB_03209ffc;
LAB_03209f50:
              UVar11 = Vector3f__ALBJPLAPOBO((__this_01->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
              pEVar4 = (__this->fields).NDBPNFLAKDL;
              if (pEVar4 == (InfoAnimation_o *)0x0) goto LAB_03209ffc;
              fVar8 = InfoAnimation__BMOIBLLELCL(pEVar4,(MethodInfo *)0x0);
              fVar9 = UVar11.fields.x - fVar7;
              fVar10 = UVar11.fields.y - in_s1;
              sincosf(fVar8 * 0.017453292,&fStack_64,&local_68);
              UVar11.fields.y = in_s1 + fVar9 * fStack_64 + fVar10 * local_68;
              UVar11.fields.x = fVar7 + (fVar9 * local_68 - fVar10 * fStack_64);
              UVar11.fields.z = 0.0;
              CJNHFNHJHPE = Vector3f__ALBJPLAPOBO(UVar11,(MethodInfo *)0x0);
              ModelNode__AGOEHONIGBH(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
            }
            else {
              if (__this_01 == (ModelNode_o *)0x0) goto LAB_03209ffc;
              if ((__this_01->fields).FJHAMMNKBPN == false) goto LAB_03209f50;
            }
            index = index + 1;
          } while (iVar1 != index);
        }
        return;
      }
    }
  }
LAB_03209ffc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RandomizeObscuredVars()  [RVA 0x310A06C]
// ModelAnimation$$RandomizeObscuredVars @ RVA 0x310A06C

void ModelAnimation__RandomizeObscuredVars(ModelAnimation_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_02;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_03;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_04;
  
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &(__this->fields).KINFMBHKNLA;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  __this_01.fields.fakeValue = 0;
  __this_01.fields.fakeValueActive = false;
  __this_01.fields.inited = false;
  __this_01.fields._14_2_ = 0;
  __this_01.fields._0_8_ = &(__this->fields).IKPNGBKFCOL;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_01,in_x2);
  __this_02.fields.fakeValue = false;
  __this_02.fields.inited = false;
  __this_02.fields.fakeValueActive = false;
  __this_02.fields._11_1_ = 0;
  __this_02.fields._0_8_ = &(__this->fields).GFPACGPFOPI;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_02,in_x2);
  __this_03.fields.fakeValue = false;
  __this_03.fields.inited = false;
  __this_03.fields.fakeValueActive = false;
  __this_03.fields._11_1_ = 0;
  __this_03.fields._0_8_ = &(__this->fields).DCDOLDPKAGC;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_03,in_x2);
  __this_04.fields.fakeValue = false;
  __this_04.fields.inited = false;
  __this_04.fields.fakeValueActive = false;
  __this_04.fields._11_1_ = 0;
  __this_04.fields._0_8_ = &(__this->fields).BHJAJHGCMIB;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_04,in_x2);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).DLGPCFMIHCC,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).DELOAPHGBBC,(MethodInfo *)0x0);
  return;
}


// ===== public int PABGGIPFBLF()  [RVA 0x310A0CC]
// ModelAnimation$$PABGGIPFBLF @ RVA 0x310A0CC

int32_t ModelAnimation__PABGGIPFBLF(ModelAnimation_o *__this,MethodInfo *method)

{
  long lVar1;
  
  lVar1 = 0x11c;
  if ((__this->fields).DMJAJGGGHPF < 1) {
    lVar1 = 0x118;
  }
  return *(int32_t *)((long)&__this->klass + lVar1);
}


// ===== private float MCPLMIKINJJ(List<Vector3f> PKDBOMAHGHC)  [RVA 0x310A0E8]
// ModelAnimation$$MCPLMIKINJJ @ RVA 0x310A0E8

float ModelAnimation__MCPLMIKINJJ
                (ModelAnimation_o *__this,System_Collections_Generic_List_CNDPAJOLKFN__o *PKDBOMAHGHC,
                MethodInfo *method)

{
  Il2CppObject *pIVar1;
  ModelNode_o *pIVar2;
  Vector3f_o *pCVar3;
  float fVar4;
  
  if ((DAT_04566526 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    DAT_04566526 = 1;
  }
  pIVar2 = (__this->fields).BAAPAKJGOMG;
  if (((pIVar2 != (ModelNode_o *)0x0) &&
      (pCVar3 = (pIVar2->fields).CNMHHKAMGPI, pCVar3 != (Vector3f_o *)0x0)) &&
     (PKDBOMAHGHC != (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) {
    fVar4 = (pCVar3->fields).super.OHHDBINAJCB;
    pIVar1 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)PKDBOMAHGHC,
                        (__this->fields).NOEPMCHIBOL,
                        Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    if (pIVar1 != (Il2CppObject *)0x0) {
      return fVar4 - *(float *)&pIVar1[1].klass;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int DLOKIJCCGOM()  [RVA 0x310A16C]
// ModelAnimation$$DLOKIJCCGOM @ RVA 0x310A16C

int32_t ModelAnimation__DLOKIJCCGOM(ModelAnimation_o *__this,MethodInfo *method)

{
  if ((__this->fields).AANDHIFMLHC != false) {
    return (__this->fields).FANDONIBLKC;
  }
  return 0;
}


// ===== public void JICCEPMNFII()  [RVA 0x3109B00]
// ModelAnimation$$JICCEPMNFII @ RVA 0x3109B00

void ModelAnimation__JICCEPMNFII(ModelAnimation_o *__this,MethodInfo *method)

{
  (__this->fields).AANDHIFMLHC = false;
  ModelAnimation__EABJNHKPJOM(__this,method);
  return;
}


// ===== public float BKDCNNOOIJH()  [RVA 0x310A184]
// ModelAnimation$$BKDCNNOOIJH @ RVA 0x310A184

float ModelAnimation__BKDCNNOOIJH(ModelAnimation_o *__this,MethodInfo *method)

{
  float fVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_30;
  
  if ((__this->fields).AANDHIFMLHC == false) {
    fVar1 = 0.0;
  }
  else {
    local_30.fakeValueActive = (__this->fields).DLGPCFMIHCC.fields.fakeValueActive;
    local_30.inited = (__this->fields).DLGPCFMIHCC.fields.inited;
    local_30._18_2_ = *(undefined2 *)&(__this->fields).DLGPCFMIHCC.fields.field_0x12;
    local_30.hiddenValueOldByte4.fields =
         (__this->fields).DLGPCFMIHCC.fields.hiddenValueOldByte4.fields;
    local_30.fakeValue = (__this->fields).DLGPCFMIHCC.fields.fakeValue;
    local_30.currentCryptoKey = (__this->fields).DLGPCFMIHCC.fields.currentCryptoKey;
    local_30.hiddenValue = (__this->fields).DLGPCFMIHCC.fields.hiddenValue;
    fVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_30,
                       (MethodInfo *)0x0);
  }
  return fVar1;
}


// ===== private void BGEKGOEAPKE()  [RVA 0x31098C8]
// ModelAnimation$$BGEKGOEAPKE @ RVA 0x31098C8

void ModelAnimation__BGEKGOEAPKE(ModelAnimation_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  ModelObject_o *pGVar3;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  ModelNode_o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  Vector3f_o *PHCOHKNFGLE;
  InfoAnimation_o *__this_03;
  Il2CppObject *pIVar4;
  Model_o *__this_04;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  MethodInfo *method_01;
  int iVar5;
  int iVar6;
  System_Collections_Generic_List_List_CNDPAJOLKFN___o *pSVar7;
  int iVar8;
  Vector3f_o *pCVar9;
  float fVar10;
  
  if ((DAT_04566527 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<List<Vector3f>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<Vector3f>>_get_Item__);
    DAT_04566527 = 1;
  }
  ModelAnimation__DPAGEPIGLEF(__this,(__this->fields).JGJCGMBHINN,in_x2);
  pSVar7 = (__this->fields).IFHALHIGBNM;
  if (pSVar7 != (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0) {
    iVar8 = 0;
    do {
      if ((pSVar7->fields)._size <= iVar8) {
        __this_03 = (__this->fields).NDBPNFLAKDL;
        if (__this_03 == (InfoAnimation_o *)0x0) break;
        fVar10 = InfoAnimation__BMOIBLLELCL(__this_03,(MethodInfo *)0x0);
        if (fVar10 != 0.0) {
          ModelAnimation__HFBJGGAJFGK(__this,method_00);
        }
        pSVar7 = (__this->fields).IFHALHIGBNM;
        if ((pSVar7 == (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0) ||
           (method_01 = Method_System_Collections_Generic_List<List<Vector3f>>_get_Item__,
           pIVar4 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar7,0,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<List<Vector3f>>_get_Item__)
           , pIVar4 == (Il2CppObject *)0x0)) break;
        iVar8 = (__this->fields).GICJKGDDOLE;
        iVar6 = *(int *)&pIVar4[1].monitor + -1;
        if (iVar8 == iVar6) {
          iVar6 = iVar8 + 1;
        }
        else {
          iVar1 = (__this->fields).GAKFAKFDELH;
          if (iVar1 < 2) {
            iVar5 = 1;
          }
          else {
            pGVar3 = (__this->fields).KOHECBJAFKG;
            if ((pGVar3 == (ModelObject_o *)0x0) ||
               (__this_04 = (pGVar3->fields).KOHECBJAFKG, __this_04 == (Model_o *)0x0)) break;
            iVar2 = Model__HEOILELLFLL(__this_04,(MethodInfo *)0x0);
            iVar5 = 0;
            if (iVar2 != 0) {
              iVar5 = iVar1 / iVar2;
            }
          }
          if (iVar5 + iVar8 <= iVar6) {
            iVar6 = iVar5 + iVar8;
          }
        }
        (__this->fields).GICJKGDDOLE = iVar6;
        (__this->fields).GOIGJAGADMO = (__this->fields).GAKFAKFDELH <= iVar6;
        ModelAnimation__AANBBBENGJE(__this,(__this->fields).JLOKLHINMKG,method_01);
        return;
      }
      pGVar3 = (__this->fields).KOHECBJAFKG;
      if ((pGVar3 == (ModelObject_o *)0x0) ||
         (__this_00 = ModelObject__HMAAHELNECD(pGVar3,(MethodInfo *)0x0),
         __this_00 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) break;
      __this_01 = (ModelNode_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,iVar8,
                             Method_System_Collections_Generic_List<ModelNode>_get_Item__);
      pGVar3 = (__this->fields).KOHECBJAFKG;
      if (pGVar3 == (ModelObject_o *)0x0) break;
      if ((pGVar3->fields).FJHAMMNKBPN == false) {
        if (__this_01 == (ModelNode_o *)0x0) break;
LAB_032099b0:
        ModelNode__CFAAJCOBAEE(__this_01,(MethodInfo *)0x0);
        pSVar7 = (__this->fields).IFHALHIGBNM;
        if (pSVar7 == (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0) break;
        pCVar9 = (__this->fields).PHILCIHBBCB;
        __this_02 = (System_Collections_Generic_List_object__o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar7,iVar8,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<List<Vector3f>>_get_Item__)
        ;
        if ((__this_02 == (System_Collections_Generic_List_object__o *)0x0) ||
           (PHCOHKNFGLE = (Vector3f_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    (__this_02,(__this->fields).GICJKGDDOLE,
                                     Method_System_Collections_Generic_List<Vector3f>_get_Item__)
           , pCVar9 == (Vector3f_o *)0x0)) break;
        Vector3f__FOOHBJNHOKK(pCVar9,PHCOHKNFGLE,(MethodInfo *)0x0);
        pCVar9 = (__this->fields).PHILCIHBBCB;
        if (pCVar9 == (Vector3f_o *)0x0) break;
        Vector3f__LFENGGKOJDO(pCVar9,(__this->fields).AAOHMLDIGNK,(MethodInfo *)0x0);
        ModelNode__AGOEHONIGBH(__this_01,(__this->fields).PHILCIHBBCB,(MethodInfo *)0x0);
        ModelNode__KGBKLEOMMJL(__this_01,true,(MethodInfo *)0x0);
      }
      else {
        if (__this_01 == (ModelNode_o *)0x0) break;
        if ((__this_01->fields).FJHAMMNKBPN == false) goto LAB_032099b0;
      }
      pSVar7 = (__this->fields).IFHALHIGBNM;
      iVar8 = iVar8 + 1;
    } while (pSVar7 != (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NOEAJHFHOAJ(Vector3f EMLHFAIPGGA)  [RVA 0x310A1CC]
// ModelAnimation$$NOEAJHFHOAJ @ RVA 0x310A1CC

void ModelAnimation__NOEAJHFHOAJ(ModelAnimation_o *__this,Vector3f_o *EMLHFAIPGGA,MethodInfo *method)

{
  System_Collections_Generic_List_List_CNDPAJOLKFN___o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  Vector3f_o *__this_02;
  int index;
  int index_00;
  
  if ((DAT_04566528 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<List<Vector3f>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<Vector3f>>_get_Item__);
    DAT_04566528 = 1;
  }
  __this_00 = (__this->fields).IFHALHIGBNM;
  if (__this_00 != (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return;
      }
      __this_01 = (System_Collections_Generic_List_object__o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             Method_System_Collections_Generic_List<List<Vector3f>>_get_Item__);
      if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
      if (0 < (__this_01->fields)._size) {
        index_00 = 0;
        do {
          __this_02 = (Vector3f_o *)
                      System_Collections_Generic_List<object>__get_Item
                                (__this_01,index_00,
                                 Method_System_Collections_Generic_List<Vector3f>_get_Item__);
          if (__this_02 == (Vector3f_o *)0x0) goto LAB_0320a2b0;
          Vector3f__LFENGGKOJDO(__this_02,EMLHFAIPGGA,(MethodInfo *)0x0);
          index_00 = index_00 + 1;
        } while (index_00 < (__this_01->fields)._size);
      }
      __this_00 = (__this->fields).IFHALHIGBNM;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)0x0);
  }
LAB_0320a2b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Vector3f GFOJGDAGOGD()  [RVA 0x310A2C8]
// ModelAnimation$$GFOJGDAGOGD @ RVA 0x310A2C8

Vector3f_o * ModelAnimation__GFOJGDAGOGD(ModelAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).NMLGPAGEDKH;
}


// ===== public int NNJEDPPIPAC()  [RVA 0x310A2D0]
// ModelAnimation$$NNJEDPPIPAC @ RVA 0x310A2D0

int32_t ModelAnimation__NNJEDPPIPAC(ModelAnimation_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).IKPNGBKFCOL.fields,(MethodInfo *)0x0);
  return iVar1;
}


// ===== private void CNJDMGLAFNA()  [RVA 0x3109680]
// ModelAnimation$$CNJDMGLAFNA @ RVA 0x3109680

void ModelAnimation__CNJDMGLAFNA(ModelAnimation_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int32_t index;
  bool bVar3;
  bool bVar4;
  ModelObject_o *pGVar5;
  ModelNode_o *pIVar6;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  KeyFrames_MJFFMMHJCNB_o *pMVar7;
  System_Collections_Generic_List_CNDPAJOLKFN__o *pSVar8;
  Il2CppObject *pIVar9;
  ModelAnimation_o *pOVar10;
  KeyFrames_o *pMVar11;
  InfoAnimation_o *pEVar12;
  int JJMCKHDALCF;
  int iVar13;
  float fVar14;
  float fVar15;
  
  if ((DAT_04566529 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Item__);
    DAT_04566529 = 1;
  }
  pOVar10 = (__this->fields).DPNACGKHLGD;
  fVar14 = 0.0;
  if (pOVar10 == (ModelAnimation_o *)0x0) {
LAB_032096f0:
    bVar3 = false;
  }
  else {
    pEVar12 = (__this->fields).NDBPNFLAKDL;
    if (pEVar12 == (InfoAnimation_o *)0x0) goto LAB_032098a8;
    if ((pEVar12->fields).LIAEJLADLPH == false) goto LAB_032096f0;
    fVar14 = (pOVar10->fields).JDKMKKIDECK;
    bVar3 = true;
  }
  pMVar11 = (__this->fields).EJNOBBDDBDO;
  if (pMVar11 != (KeyFrames_o *)0x0) {
    iVar13 = (__this->fields).BPIIACENHPE;
    JJMCKHDALCF = iVar13 + 2;
    if ((pMVar11->fields).MONBPDGKCOM + -1 < JJMCKHDALCF) {
LAB_03209714:
      (__this->fields).JDKMKKIDECK = 0.0;
      return;
    }
    pGVar5 = (__this->fields).KOHECBJAFKG;
    if (pGVar5 != (ModelObject_o *)0x0) {
      iVar1 = (__this->fields).GMJBKKIOMCB;
      iVar2 = (__this->fields).FHJCJEMBKMP;
      pIVar6 = ModelObject__ILECMJOENMK(pGVar5,(MethodInfo *)0x0);
      pGVar5 = (__this->fields).KOHECBJAFKG;
      if (pGVar5 != (ModelObject_o *)0x0) {
        if (pIVar6 == (ModelNode_o *)0x0) {
          __this_00 = ModelObject__HMAAHELNECD(pGVar5,(MethodInfo *)0x0);
          if (__this_00 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) goto LAB_032098a8;
          pIVar6 = (ModelNode_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,0,
                              Method_System_Collections_Generic_List<ModelNode>_get_Item__);
        }
        else {
          pIVar6 = ModelObject__ILECMJOENMK(pGVar5,(MethodInfo *)0x0);
        }
        if ((pIVar6 != (ModelNode_o *)0x0) &&
           (pMVar11 = (__this->fields).EJNOBBDDBDO, pMVar11 != (KeyFrames_o *)0x0)) {
          index = (pIVar6->fields).FLDBGCIKMKA;
          pMVar7 = KeyFrames__HBMICHOLLMF(pMVar11,JJMCKHDALCF,(MethodInfo *)0x0);
          if ((pMVar7 != (KeyFrames_MJFFMMHJCNB_o *)0x0) &&
             (((pSVar8 = (pMVar7->fields).KOANCCDDBDA,
               pSVar8 != (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0 &&
               (pIVar9 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar8,index,
                                    Method_System_Collections_Generic_List<Vector3f>_get_Item__),
               pIVar9 != (Il2CppObject *)0x0)) &&
              (pEVar12 = (__this->fields).NDBPNFLAKDL, pEVar12 != (InfoAnimation_o *)0x0)))) {
            fVar15 = *(float *)&pIVar9[1].klass;
            bVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                               (pEVar12->fields).OEGKFPBBLEP.fields,(MethodInfo *)0x0);
            if (!bVar3 && ((bVar4 ^ 0xffU) & 1) == 0) {
              return;
            }
            if (!bVar3) {
              fVar14 = (__this->fields).GOIHMJKAHJN + (float)iVar1;
              if ((fVar14 <= fVar15) &&
                 (fVar14 = (__this->fields).AOOIIDBOANJ - (float)iVar2, fVar15 <= fVar14))
              goto LAB_03209714;
              fVar14 = fVar15 - fVar14;
              (__this->fields).JDKMKKIDECK = fVar14;
              if (fVar14 == 0.0) {
                return;
              }
            }
            pMVar11 = (__this->fields).EJNOBBDDBDO;
            if (pMVar11 != (KeyFrames_o *)0x0) {
              iVar1 = (pMVar11->fields).MONBPDGKCOM;
              iVar13 = iVar13 + 4;
              if (iVar13 <= iVar1) {
                iVar1 = iVar13;
              }
              if (iVar1 <= JJMCKHDALCF) {
                return;
              }
              while (pMVar7 = KeyFrames__HBMICHOLLMF(pMVar11,JJMCKHDALCF,(MethodInfo *)0x0),
                    pMVar7 != (KeyFrames_MJFFMMHJCNB_o *)0x0) {
                if (0 < (pMVar7->fields).ONGLGHIKBJF) {
                  iVar13 = 0;
                  do {
                    pSVar8 = (pMVar7->fields).KOANCCDDBDA;
                    if ((pSVar8 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0) ||
                       (pIVar9 = System_Collections_Generic_List<object>__get_Item
                                           ((System_Collections_Generic_List_object__o *)pSVar8,
                                            iVar13,
                                            Method_System_Collections_Generic_List<Vector3f>_get_Item__
                                           ), pIVar9 == (Il2CppObject *)0x0)) goto LAB_032098a8;
                    iVar13 = iVar13 + 1;
                    *(float *)&pIVar9[1].klass = *(float *)&pIVar9[1].klass - fVar14;
                  } while (iVar13 < (pMVar7->fields).ONGLGHIKBJF);
                }
                JJMCKHDALCF = JJMCKHDALCF + 1;
                if (JJMCKHDALCF == iVar1) {
                  return;
                }
                pMVar11 = (__this->fields).EJNOBBDDBDO;
                if (pMVar11 == (KeyFrames_o *)0x0) break;
              }
            }
          }
        }
      }
    }
  }
LAB_032098a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GIENGNEGHPJ()  [RVA 0x310A2E0]
// ModelAnimation$$GIENGNEGHPJ @ RVA 0x310A2E0

void ModelAnimation__GIENGNEGHPJ(ModelAnimation_o *__this,MethodInfo *method)

{
  ModelObject_o *pGVar1;
  ModelNode_o *pIVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_0456652a & 1) == 0) {
    FUN_01bab630(&StringLiteral_9292/*"NHeel_2"*/);
    FUN_01bab630(&StringLiteral_9291/*"NHeel_1"*/);
    DAT_0456652a = 1;
    method = extraout_x1;
  }
  pGVar1 = (__this->fields).KOHECBJAFKG;
  if (pGVar1 != (ModelObject_o *)0x0) {
    pIVar2 = ModelObject__OCJAHBKIFNO(pGVar1,StringLiteral_9291/*"NHeel_1"*/,(MethodInfo *)0x0);
    (__this->fields).PKADCPJHGDI = pIVar2;
    thunk_FUN_01c20e04(&(__this->fields).PKADCPJHGDI);
    pGVar1 = (__this->fields).KOHECBJAFKG;
    method = extraout_x1_00;
    if (pGVar1 != (ModelObject_o *)0x0) {
      pIVar2 = ModelObject__OCJAHBKIFNO(pGVar1,StringLiteral_9292/*"NHeel_2"*/,(MethodInfo *)0x0);
      (__this->fields).GGPGDDKHOMJ = pIVar2;
      thunk_FUN_01c20e04(&(__this->fields).GGPGDDKHOMJ);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public static bool NGILHAOFGEA(ModelNode LFALCONFCGH, ModelNode NMGJAKHNCND, int OAFGMHOFEKM, Vector3[] PDCJPCDLHCI, bool LBFDGHOEPPM = True)  [RVA 0x3106EA8]
// ModelAnimation$$NGILHAOFGEA @ RVA 0x3106EA8

bool ModelAnimation__NGILHAOFGEA
               (ModelNode_o *LFALCONFCGH,ModelNode_o *NMGJAKHNCND,int32_t OAFGMHOFEKM,
               UnityEngine_Vector3_array *PDCJPCDLHCI,bool LBFDGHOEPPM,MethodInfo *method)

{
  uint uVar1;
  Vector3f_o *pCVar2;
  Vector3f_o *pCVar3;
  uint local_48;
  uint uStack_44;
  ModelNode_o *local_40;
  ModelNode_o *local_38;
  
  local_40 = NMGJAKHNCND;
  local_38 = LFALCONFCGH;
  if ((DAT_0456652b & 1) == 0) {
    FUN_01bab630(&Method_Util_JGJFNOOGAEP<ModelNode>__);
    FUN_01bab630(&Method_Util_JGJFNOOGAEP<int>__);
    DAT_0456652b = 1;
  }
  local_48 = 0;
  uStack_44 = 0;
  if (OAFGMHOFEKM == -1) {
    Util__JGJFNOOGAEP<object>
              ((Il2CppObject **)&local_38,(Il2CppObject **)&local_40,
               Method_Util_JGJFNOOGAEP<ModelNode>__);
    LFALCONFCGH = local_38;
  }
  if (((((LFALCONFCGH != (ModelNode_o *)0x0) &&
        (uStack_44 = (LFALCONFCGH->fields).FLDBGCIKMKA, local_40 != (ModelNode_o *)0x0)) &&
       ((local_48 = (local_40->fields).FLDBGCIKMKA, OAFGMHOFEKM != -1 ||
        ((LBFDGHOEPPM ||
         (Util__JGJFNOOGAEP<int>
                    ((int32_t *)&uStack_44,(int32_t *)&local_48,Method_Util_JGJFNOOGAEP<int>__),
         LFALCONFCGH = local_38, local_38 != (ModelNode_o *)0x0)))))) &&
      (pCVar2 = (LFALCONFCGH->fields).CNMHHKAMGPI, pCVar2 != (Vector3f_o *)0x0)) &&
     (((local_40 != (ModelNode_o *)0x0 &&
       (pCVar3 = (local_40->fields).CNMHHKAMGPI, pCVar3 != (Vector3f_o *)0x0)) &&
      (PDCJPCDLHCI != (UnityEngine_Vector3_array *)0x0)))) {
    uVar1 = (uint)PDCJPCDLHCI->max_length;
    if ((uStack_44 < uVar1) && (local_48 < uVar1)) {
      return (pCVar3->fields).super.OHHDBINAJCB <= (pCVar2->fields).super.OHHDBINAJCB !=
             PDCJPCDLHCI->m_Items[(int)local_48].fields.x <=
             PDCJPCDLHCI->m_Items[(int)uStack_44].fields.x;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(ModelObject BCKBBGCOMJD)  [RVA 0x310A37C]
// ModelAnimation$$.ctor @ RVA 0x310A37C

void ModelAnimation___ctor(ModelAnimation_o *__this,ModelObject_o *BCKBBGCOMJD,MethodInfo *method)

{
  Vector3f_o *pCVar1;
  Vector3f_o **ppCVar2;
  KeyFrames_o *__this_00;
  System_Collections_Generic_List_List_CNDPAJOLKFN___o *__this_01;
  System_Collections_Generic_List_JADGCGOJLJB__o *pSVar3;
  System_Collections_Generic_List_GEBHIBIEAJE__o *__this_02;
  BMBCEECINLK_o *__this_03;
  ModelAnimation_o **ppOVar4;
  ModelNode_o **ppIVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  MethodInfo *method_00;
  Model_o *pOVar8;
  System_Collections_Generic_HashSet_JADGCGOJLJB_IMLPLLLPALI__o **ppSVar9;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar10;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar11;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o CVar12;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_b8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_80;
  
  if ((DAT_0456652c & 1) == 0) {
    FUN_01bab630(&BMBCEECINLK_TypeInfo);
    FUN_01bab630(&Vector3f_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelEdge>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<Vector3f>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<List<Vector3f>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<IntervalAnimation>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<ModelEdge>_TypeInfo);
    FUN_01bab630(&KeyFrames_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>__ctor__);
    DAT_0456652c = 1;
  }
  pCVar1 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar1,(MethodInfo *)0x0);
  ppCVar2 = &(__this->fields).NMLGPAGEDKH;
  *ppCVar2 = pCVar1;
  thunk_FUN_01c20e04(ppCVar2,pCVar1);
  pCVar1 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar1,(MethodInfo *)0x0);
  ppCVar2 = &(__this->fields).AAOHMLDIGNK;
  *ppCVar2 = pCVar1;
  thunk_FUN_01c20e04(ppCVar2,pCVar1);
  pCVar1 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar1,(MethodInfo *)0x0);
  (__this->fields).JGJCGMBHINN = pCVar1;
  thunk_FUN_01c20e04(&(__this->fields).JGJCGMBHINN,pCVar1);
  pCVar1 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar1,(MethodInfo *)0x0);
  (__this->fields).JLOKLHINMKG = pCVar1;
  thunk_FUN_01c20e04(&(__this->fields).JLOKLHINMKG,pCVar1);
  __this_00 = (KeyFrames_o *)thunk_FUN_01bda818(KeyFrames_TypeInfo);
  KeyFrames___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).EJNOBBDDBDO = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).EJNOBBDDBDO,__this_00);
  __this_01 = (System_Collections_Generic_List_List_CNDPAJOLKFN___o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<List<Vector3f>>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<List<Vector3f>>__ctor__);
  (__this->fields).IFHALHIGBNM = __this_01;
  thunk_FUN_01c20e04(&(__this->fields).IFHALHIGBNM,__this_01);
  pSVar3 = (System_Collections_Generic_List_JADGCGOJLJB__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<IntervalAnimation>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<IntervalAnimation>__ctor__);
  (__this->fields).ACMNENLJLOL = pSVar3;
  thunk_FUN_01c20e04(&(__this->fields).ACMNENLJLOL,pSVar3);
  pSVar3 = (System_Collections_Generic_List_JADGCGOJLJB__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<IntervalAnimation>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<IntervalAnimation>__ctor__);
  (__this->fields).DKLFPMBOOFA = pSVar3;
  thunk_FUN_01c20e04(&(__this->fields).DKLFPMBOOFA,pSVar3);
  __this_02 = (System_Collections_Generic_List_GEBHIBIEAJE__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ModelEdge>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<ModelEdge>__ctor__);
  (__this->fields).HALIJPAEEBE = __this_02;
  thunk_FUN_01c20e04(&(__this->fields).HALIJPAEEBE,__this_02);
  __this_03 = (BMBCEECINLK_o *)thunk_FUN_01bda818(BMBCEECINLK_TypeInfo);
  BMBCEECINLK___ctor(__this_03,(MethodInfo *)0x0);
  (__this->fields).KDKAOJIEDCG = __this_03;
  thunk_FUN_01c20e04(&(__this->fields).KDKAOJIEDCG,__this_03);
  pCVar1 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar1,(MethodInfo *)0x0);
  (__this->fields).PHILCIHBBCB = pCVar1;
  thunk_FUN_01c20e04(&(__this->fields).PHILCIHBBCB,pCVar1);
  OMLLDCIMLBB<object>___ctor((OMLLDCIMLBB_object__o *)__this,Method_OMLLDCIMLBB<object>__ctor__);
  (__this->fields).PKADCPJHGDI = (ModelNode_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).PKADCPJHGDI,0);
  (__this->fields).GGPGDDKHOMJ = (ModelNode_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).GGPGDDKHOMJ,0);
  ppOVar4 = &(__this->fields).MLANKGMLJBF;
  *ppOVar4 = (ModelAnimation_o *)0x0;
  thunk_FUN_01c20e04(ppOVar4,0);
  ppOVar4 = &(__this->fields).DPNACGKHLGD;
  *ppOVar4 = (ModelAnimation_o *)0x0;
  thunk_FUN_01c20e04(ppOVar4,0);
  (__this->fields).KDJBKDMJKHK = -3;
  (__this->fields).KOHECBJAFKG = BCKBBGCOMJD;
  thunk_FUN_01c20e04(&(__this->fields).KOHECBJAFKG,BCKBBGCOMJD);
  (__this->fields).AANDHIFMLHC = false;
  (__this->fields).DMJAJGGGHPF = 1;
  (__this->fields).NOEPMCHIBOL = 0;
  ppIVar5 = &(__this->fields).BAAPAKJGOMG;
  *ppIVar5 = (ModelNode_o *)0x0;
  thunk_FUN_01c20e04(ppIVar5,0);
  CVar10 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).KINFMBHKNLA.fields = CVar10;
  (__this->fields).JJIDKDIGGEK = 0;
  (__this->fields).BPIIACENHPE = 0;
  (__this->fields).FNMEOPOBFBC = 0x7fffffff;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_a0,0.0,(MethodInfo *)0x0);
  local_80.fakeValueActive = local_a0.fakeValueActive;
  local_80.inited = local_a0.inited;
  local_80._18_2_ = local_a0._18_2_;
  local_80.hiddenValueOldByte4.fields = local_a0.hiddenValueOldByte4.fields;
  local_80.fakeValue = local_a0.fakeValue;
  local_80.currentCryptoKey = local_a0.currentCryptoKey;
  local_80.hiddenValue = local_a0.hiddenValue;
  (__this->fields).DLGPCFMIHCC.fields.fakeValueActive = local_a0.fakeValueActive;
  (__this->fields).DLGPCFMIHCC.fields.inited = local_a0.inited;
  *(undefined2 *)&(__this->fields).DLGPCFMIHCC.fields.field_0x12 = local_a0._18_2_;
  (__this->fields).DLGPCFMIHCC.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_a0.hiddenValueOldByte4.fields;
  (__this->fields).DLGPCFMIHCC.fields.fakeValue = local_a0.fakeValue;
  (__this->fields).DLGPCFMIHCC.fields.currentCryptoKey = local_a0.currentCryptoKey;
  (__this->fields).DLGPCFMIHCC.fields.hiddenValue = local_a0.hiddenValue;
  (__this->fields).NDBPNFLAKDL = (InfoAnimation_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).NDBPNFLAKDL,0);
  (__this->fields).NOAFGDFHHMN = (InfoAnimation_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).NOAFGDFHHMN,0);
  ppSVar9 = &(__this->fields).HCDNAGGCLDA;
  *ppSVar9 = (System_Collections_Generic_HashSet_JADGCGOJLJB_IMLPLLLPALI__o *)0x0;
  (__this->fields).IOGCGDKKILK = false;
  (__this->fields).GMJBKKIOMCB = 0;
  (__this->fields).FHJCJEMBKMP = 0;
  (__this->fields).PIODLNMKAGJ = false;
  thunk_FUN_01c20e04(ppSVar9,0);
  (__this->fields).OJEODKKHEPE = 0;
  CVar11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
  (__this->fields).GFPACGPFOPI.fields = CVar11;
  if ((BCKBBGCOMJD != (ModelObject_o *)0x0) &&
     (pOVar8 = (BCKBBGCOMJD->fields).KOHECBJAFKG, pOVar8 != (Model_o *)0x0)) {
    CVar12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                       ((pOVar8->fields).NFMBPIPEKGF != (Model_o *)0x0,(MethodInfo *)0x0);
    uVar7 = CVar12.fields._8_4_;
    uVar6 = CVar12.fields._0_8_;
    (__this->fields).BHJAJHGCMIB.fields.currentCryptoKey = (char)uVar6;
    *(int3 *)&(__this->fields).BHJAJHGCMIB.fields.field_0x1 = (int3)((ulong)uVar6 >> 8);
    (__this->fields).BHJAJHGCMIB.fields.hiddenValue = (int)((ulong)uVar6 >> 0x20);
    (__this->fields).KPJLPAIIDHB = 1.0;
    (__this->fields).BHJAJHGCMIB.fields.fakeValue = (bool_conflict)(char)uVar7;
    (__this->fields).BHJAJHGCMIB.fields.inited = (bool_conflict)(char)((uint)uVar7 >> 8);
    (__this->fields).BHJAJHGCMIB.fields.fakeValueActive = (bool_conflict)(char)((uint)uVar7 >> 0x10)
    ;
    (__this->fields).BHJAJHGCMIB.fields.field_0xb = (char)((uint)uVar7 >> 0x18);
    (__this->fields).JDKMKKIDECK = 0.0;
    (__this->fields).FAHOMGFHMAP = false;
    (__this->fields).GOIGJAGADMO = false;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_b8,0.0,(MethodInfo *)0x0)
    ;
    local_a0.fakeValueActive = local_b8.fakeValueActive;
    local_a0.inited = local_b8.inited;
    local_a0._18_2_ = local_b8._18_2_;
    local_a0.hiddenValueOldByte4.fields = local_b8.hiddenValueOldByte4.fields;
    local_a0.fakeValue = local_b8.fakeValue;
    local_a0.currentCryptoKey = local_b8.currentCryptoKey;
    local_a0.hiddenValue = local_b8.hiddenValue;
    (__this->fields).DELOAPHGBBC.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)local_b8.hiddenValueOldByte4.fields;
    (__this->fields).DELOAPHGBBC.fields.fakeValue = local_b8.fakeValue;
    (__this->fields).DELOAPHGBBC.fields.currentCryptoKey = local_b8.currentCryptoKey;
    (__this->fields).DELOAPHGBBC.fields.hiddenValue = local_b8.hiddenValue;
    (__this->fields).DELOAPHGBBC.fields.fakeValueActive = local_b8.fakeValueActive;
    (__this->fields).DELOAPHGBBC.fields.inited = local_b8.inited;
    *(undefined2 *)&(__this->fields).DELOAPHGBBC.fields.field_0x12 = local_b8._18_2_;
    (__this->fields).FBGLMJNEPOF = 0;
    (__this->fields).NGDBKCCKCKI = false;
    ModelAnimation__EABJNHKPJOM(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public InfoAnimation BPLICKJOHGO()  [RVA 0x310A7C0]
// ModelAnimation$$BPLICKJOHGO @ RVA 0x310A7C0

InfoAnimation_o * ModelAnimation__BPLICKJOHGO(ModelAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).FFIBKLFJKAO;
}


// ===== public void JIJHABGAIIN(IntervalAnimation LEAMIBIAIIN)  [RVA 0x3107114]
// ModelAnimation$$JIJHABGAIIN @ RVA 0x3107114

void ModelAnimation__JIJHABGAIIN(ModelAnimation_o *__this,IntervalAnimation_o *LEAMIBIAIIN,MethodInfo *method)

{
  if ((DAT_0456652d & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_0456652d = 1;
  }
  OMLLDCIMLBB<object>__CallEvent
            ((OMLLDCIMLBB_object__o *)__this,4,(Il2CppObject *)LEAMIBIAIIN,
             Method_OMLLDCIMLBB<object>_CallEvent__);
  return;
}


// ===== public float OANHDICAGKJ()  [RVA 0x310A7C8]
// ModelAnimation$$OANHDICAGKJ @ RVA 0x310A7C8

float ModelAnimation__OANHDICAGKJ(ModelAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).AOOIIDBOANJ;
}


// ===== public void NIDHGNCCKOM()  [RVA 0x3108F28]
// ModelAnimation$$NIDHGNCCKOM @ RVA 0x3108F28

void ModelAnimation__NIDHGNCCKOM(ModelAnimation_o *__this,MethodInfo *method)

{
  KeyFrames_o *__this_00;
  
  if ((__this->fields).DMJAJGGGHPF != -1) {
    return;
  }
  __this_00 = (__this->fields).EJNOBBDDBDO;
  if (__this_00 != (KeyFrames_o *)0x0) {
    KeyFrames__FAOMJIPNHPL(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FNKJAPBJFAN(float EDCGCMAKCOM, float PFHCGPLGLHC = 0, float BCPIEFABCEC = 0)  [RVA 0x3109298]
// ModelAnimation$$FNKJAPBJFAN @ RVA 0x3109298

void ModelAnimation__FNKJAPBJFAN
               (ModelAnimation_o *__this,float EDCGCMAKCOM,float PFHCGPLGLHC,float BCPIEFABCEC,
               MethodInfo *method)

{
  KeyFrames_o *__this_00;
  
  __this_00 = (__this->fields).EJNOBBDDBDO;
  if (__this_00 != (KeyFrames_o *)0x0) {
    KeyFrames__GHKNFJJOIDM(__this_00,EDCGCMAKCOM,PFHCGPLGLHC,BCPIEFABCEC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ModelAnimation NMKIJMOJLLH()  [RVA 0x310A7D0]
// ModelAnimation$$NMKIJMOJLLH @ RVA 0x310A7D0

ModelAnimation_o * ModelAnimation__NMKIJMOJLLH(ModelAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).MLANKGMLJBF;
}


// ===== public IntervalAnimation HIMFHBJAEMJ(string OONIBCILJBN)  [RVA 0x3109CB0]
// ModelAnimation$$HIMFHBJAEMJ @ RVA 0x3109CB0

IntervalAnimation_o *
ModelAnimation__HIMFHBJAEMJ(ModelAnimation_o *__this,System_String_o *OONIBCILJBN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_JADGCGOJLJB__o *pSVar2;
  Il2CppObject *pIVar3;
  IntervalAnimation_o *pJVar4;
  int index;
  
  if ((DAT_0456652e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_get_Item__);
    DAT_0456652e = 1;
  }
  pSVar2 = (__this->fields).ACMNENLJLOL;
  if (pSVar2 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
    index = 0;
    do {
      if ((pSVar2->fields)._size <= index) {
        return (IntervalAnimation_o *)0x0;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          Method_System_Collections_Generic_List<IntervalAnimation>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      bVar1 = System_String__op_Equality
                        ((System_String_o *)pIVar3[5].klass,OONIBCILJBN,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar2 = (__this->fields).ACMNENLJLOL;
        if (pSVar2 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
          pJVar4 = (IntervalAnimation_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,index,
                              Method_System_Collections_Generic_List<IntervalAnimation>_get_Item__);
          return pJVar4;
        }
        break;
      }
      pSVar2 = (__this->fields).ACMNENLJLOL;
      index = index + 1;
    } while (pSVar2 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HJHDCBDLGBC()  [RVA 0x310A7D8]
// ModelAnimation$$HJHDCBDLGBC @ RVA 0x310A7D8

void ModelAnimation__HJHDCBDLGBC(ModelAnimation_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_JADGCGOJLJB__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_0456652f & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_Clear__);
    DAT_0456652f = 1;
  }
  pSVar1 = (__this->fields).ACMNENLJLOL;
  if (pSVar1 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void BCABJDKNOLM(IntervalAnimation LEAMIBIAIIN)  [RVA 0x310785C]
// ModelAnimation$$BCABJDKNOLM @ RVA 0x310785C

void ModelAnimation__BCABJDKNOLM(ModelAnimation_o *__this,IntervalAnimation_o *LEAMIBIAIIN,MethodInfo *method)

{
  if ((DAT_04566530 & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_04566530 = 1;
  }
  OMLLDCIMLBB<object>__CallEvent
            ((OMLLDCIMLBB_object__o *)__this,3,(Il2CppObject *)LEAMIBIAIIN,
             Method_OMLLDCIMLBB<object>_CallEvent__);
  return;
}


// ===== public void DKPGGGILMJE(InfoAnimation CJNHFNHJHPE)  [RVA 0x310A848]
// ModelAnimation$$DKPGGGILMJE @ RVA 0x310A848

void ModelAnimation__DKPGGGILMJE(ModelAnimation_o *__this,InfoAnimation_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).NDBPNFLAKDL = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).NDBPNFLAKDL);
  return;
}


// ===== private void PPPACEMNFGM()  [RVA 0x3108C78]
// ModelAnimation$$PPPACEMNFGM @ RVA 0x3108C78

/* WARNING: Type propagation algorithm not settling */

void ModelAnimation__PPPACEMNFGM(ModelAnimation_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool_conflict bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int32_t iVar6;
  InfoAnimation_o *pEVar7;
  UnityEngine_Vector3_array *pUVar8;
  InfoAnimation_HJPFANEPGJF_o *pEVar9;
  InfoAnimation_KFMLLPPCPHI_o *pEVar10;
  int32_t *piVar11;
  UnityEngine_Vector3_array_array *pUVar12;
  UnityEngine_Vector3_array *pUVar13;
  ModelNode_o *pIVar14;
  float fVar15;
  float fVar16;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_68;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
  if ((__this->fields).AANDHIFMLHC == false) {
    pIVar14 = (ModelNode_o *)0x0;
  }
  else {
    pIVar14 = (__this->fields).BAAPAKJGOMG;
  }
  pEVar7 = (__this->fields).NDBPNFLAKDL;
  if (pEVar7 == (InfoAnimation_o *)0x0) goto LAB_03208e58;
  fVar16 = (__this->fields).BDLMOBMPOHM;
  uVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (pEVar7->fields).LCLBPCMKHPM.fields,(MethodInfo *)0x0);
  uVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
  pEVar7 = (__this->fields).NDBPNFLAKDL;
  if (pEVar7 == (InfoAnimation_o *)0x0) goto LAB_03208e58;
  iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (pEVar7->fields).FECCBIOBKAF.fields,(MethodInfo *)0x0);
  iVar3 = (iVar6 + 1) * (uVar5 - uVar4);
  fVar15 = 0.0;
  (__this->fields).OJEODKKHEPE = iVar3;
  if (iVar3 < 1) goto LAB_03208db8;
  pEVar7 = (__this->fields).NDBPNFLAKDL;
  if (((pEVar7 == (InfoAnimation_o *)0x0) ||
      (pEVar9 = (pEVar7->fields).DMGLMCBIAGL, pEVar9 == (InfoAnimation_HJPFANEPGJF_o *)0x0)) ||
     (pEVar10 = (pEVar9->fields).EJNDOMGCGFL, pEVar10 == (InfoAnimation_KFMLLPPCPHI_o *)0x0))
  goto LAB_03208e58;
  if ((pEVar10->fields).LBDADFDEMPE != 1) goto LAB_03208db8;
  if ((__this->fields).IOGCGDKKILK == false) {
LAB_03208d48:
    piVar11 = &(__this->fields).NOEPMCHIBOL;
  }
  else {
    if (pIVar14 == (ModelNode_o *)0x0) goto LAB_03208e58;
    pIVar14 = (pIVar14->fields).GAFCPEOANDD;
    if (pIVar14 == (ModelNode_o *)0x0) goto LAB_03208d48;
    piVar11 = &(pIVar14->fields).FLDBGCIKMKA;
  }
  pUVar12 = (pEVar7->fields).MMENPDNBNHN;
  if (pUVar12 != (UnityEngine_Vector3_array_array *)0x0) {
    uVar1 = (uint)pUVar12->max_length;
    if (uVar5 < uVar1) {
      pUVar8 = pUVar12->m_Items[(int)uVar5];
      if (pUVar8 == (UnityEngine_Vector3_array *)0x0) goto LAB_03208e58;
      uVar5 = *piVar11;
      if ((uVar5 < (uint)pUVar8->max_length) && (uVar4 < uVar1)) {
        pUVar13 = pUVar12->m_Items[(int)uVar4];
        if (pUVar13 == (UnityEngine_Vector3_array *)0x0) goto LAB_03208e58;
        if (uVar5 < (uint)pUVar13->max_length) {
          fVar15 = pUVar8->m_Items[(int)uVar5].fields.x - pUVar13->m_Items[(int)uVar5].fields.x;
LAB_03208db8:
          fVar16 = fVar16 + fVar15 * (float)(__this->fields).DMJAJGGGHPF;
          CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_68,fVar16,
                     (MethodInfo *)0x0);
          local_50.fakeValueActive = local_68.fakeValueActive;
          local_50.inited = local_68.inited;
          local_50._18_2_ = local_68._18_2_;
          local_50.hiddenValueOldByte4.fields = local_68.hiddenValueOldByte4.fields;
          local_50.fakeValue = local_68.fakeValue;
          local_50.currentCryptoKey = local_68.currentCryptoKey;
          local_50.hiddenValue = local_68.hiddenValue;
          bVar2 = (__this->fields).NGDBKCCKCKI;
          (__this->fields).DLGPCFMIHCC.fields.fakeValueActive = local_68.fakeValueActive;
          (__this->fields).DLGPCFMIHCC.fields.inited = local_68.inited;
          *(undefined2 *)&(__this->fields).DLGPCFMIHCC.fields.field_0x12 = local_68._18_2_;
          (__this->fields).DLGPCFMIHCC.fields.hiddenValueOldByte4 =
               (CodeStage_AntiCheat_Common_ACTkByte4_o)local_68.hiddenValueOldByte4.fields;
          (__this->fields).DLGPCFMIHCC.fields.fakeValue = local_68.fakeValue;
          (__this->fields).DLGPCFMIHCC.fields.currentCryptoKey = local_68.currentCryptoKey;
          (__this->fields).DLGPCFMIHCC.fields.hiddenValue = local_68.hiddenValue;
          if (bVar2 == false) {
            CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_68,fVar16,
                       (MethodInfo *)0x0);
            local_50.fakeValueActive = local_68.fakeValueActive;
            local_50.inited = local_68.inited;
            local_50._18_2_ = local_68._18_2_;
            local_50.hiddenValueOldByte4.fields = local_68.hiddenValueOldByte4.fields;
            local_50.fakeValue = local_68.fakeValue;
            local_50.currentCryptoKey = local_68.currentCryptoKey;
            local_50.hiddenValue = local_68.hiddenValue;
            pEVar7 = (__this->fields).NDBPNFLAKDL;
            (__this->fields).DELOAPHGBBC.fields.fakeValueActive = local_68.fakeValueActive;
            (__this->fields).DELOAPHGBBC.fields.inited = local_68.inited;
            *(undefined2 *)&(__this->fields).DELOAPHGBBC.fields.field_0x12 = local_68._18_2_;
            (__this->fields).DELOAPHGBBC.fields.hiddenValueOldByte4 =
                 (CodeStage_AntiCheat_Common_ACTkByte4_o)local_68.hiddenValueOldByte4.fields;
            (__this->fields).DELOAPHGBBC.fields.fakeValue = local_68.fakeValue;
            (__this->fields).DELOAPHGBBC.fields.currentCryptoKey = local_68.currentCryptoKey;
            (__this->fields).DELOAPHGBBC.fields.hiddenValue = local_68.hiddenValue;
            (__this->fields).NOAFGDFHHMN = pEVar7;
            thunk_FUN_01c20e04(&(__this->fields).NOAFGDFHHMN);
            (__this->fields).FBGLMJNEPOF = -4;
            (__this->fields).NGDBKCCKCKI = true;
          }
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_03208e58:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AECCPFDPPOK()  [RVA 0x310842C]
// ModelAnimation$$AECCPFDPPOK @ RVA 0x310842C

void ModelAnimation__AECCPFDPPOK(ModelAnimation_o *__this,MethodInfo *method)

{
  int iVar1;
  ModelObject_o *__this_00;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_01;
  ModelNode_o *pIVar2;
  InfoAnimation_o *pEVar3;
  InfoAnimation_HJPFANEPGJF_o *pEVar4;
  InfoAnimation_KFMLLPPCPHI_o *pEVar5;
  
  if ((DAT_04566531 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Item__);
    DAT_04566531 = 1;
  }
  pEVar3 = (__this->fields).NDBPNFLAKDL;
  if (((pEVar3 != (InfoAnimation_o *)0x0) &&
      (pEVar4 = (pEVar3->fields).DMGLMCBIAGL, pEVar4 != (InfoAnimation_HJPFANEPGJF_o *)0x0)) &&
     (pEVar5 = (pEVar4->fields).EJNDOMGCGFL, pEVar5 != (InfoAnimation_KFMLLPPCPHI_o *)0x0)) {
    iVar1 = (pEVar5->fields).HHLJNICBMDA;
    if (iVar1 < 0) {
      (__this->fields).BAAPAKJGOMG = (ModelNode_o *)0x0;
      pIVar2 = (ModelNode_o *)0x0;
    }
    else {
      __this_00 = (__this->fields).KOHECBJAFKG;
      (__this->fields).NOEPMCHIBOL = iVar1;
      if ((__this_00 == (ModelObject_o *)0x0) ||
         (__this_01 = ModelObject__HMAAHELNECD(__this_00,(MethodInfo *)0x0),
         __this_01 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) goto LAB_032084cc;
      pIVar2 = (ModelNode_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,
                          (__this->fields).NOEPMCHIBOL,
                          Method_System_Collections_Generic_List<ModelNode>_get_Item__);
      (__this->fields).BAAPAKJGOMG = pIVar2;
    }
    thunk_FUN_01c20e04(&(__this->fields).BAAPAKJGOMG,pIVar2);
    return;
  }
LAB_032084cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int ACIPGNDNBCG()  [RVA 0x310A858]
// ModelAnimation$$ACIPGNDNBCG @ RVA 0x310A858

int32_t ModelAnimation__ACIPGNDNBCG(ModelAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).OJEODKKHEPE;
}


// ===== public int JLPBAGDBDEI()  [RVA 0x310A860]
// ModelAnimation$$JLPBAGDBDEI @ RVA 0x310A860

int32_t ModelAnimation__JLPBAGDBDEI(ModelAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).NOEPMCHIBOL;
}


// ===== public void DGLJCGNHLIG()  [RVA 0x310A868]
// ModelAnimation$$DGLJCGNHLIG @ RVA 0x310A868

void ModelAnimation__DGLJCGNHLIG(ModelAnimation_o *__this,MethodInfo *method)

{
  ModelNode_o **ppIVar1;
  MethodInfo *method_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar2;
  
  (__this->fields).AANDHIFMLHC = false;
  (__this->fields).DMJAJGGGHPF = 1;
  (__this->fields).NOEPMCHIBOL = 0;
  ppIVar1 = &(__this->fields).BAAPAKJGOMG;
  *ppIVar1 = (ModelNode_o *)0x0;
  thunk_FUN_01c20e04(ppIVar1,0);
  CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).KINFMBHKNLA.fields = CVar2;
  (__this->fields).JJIDKDIGGEK = 0;
  (__this->fields).BPIIACENHPE = 0;
  (__this->fields).PIODLNMKAGJ = false;
  (__this->fields).FNMEOPOBFBC = 0x7fffffff;
  (__this->fields).NDBPNFLAKDL = (InfoAnimation_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).NDBPNFLAKDL,0);
  ModelAnimation__EABJNHKPJOM(__this,method_00);
  return;
}


// ===== public void JEBLJHPJMBA(EventAnimation.MIFHAKDMDJH ACCIHBHMFPN)  [RVA 0x310A8C8]
// ModelAnimation$$JEBLJHPJMBA @ RVA 0x310A8C8

void ModelAnimation__JEBLJHPJMBA(ModelAnimation_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  InfoAnimation_o *pEVar4;
  InfoAnimation_HJPFANEPGJF_o *pEVar5;
  ModelObject_o *pGVar6;
  System_Object_array *pSVar7;
  System_Collections_Generic_List_IIMNGGHGKOD__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566532 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActionAnimation>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActionAnimation>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActionAnimation>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActionAnimation>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<ActionAnimation>_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_04566532 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pEVar4 = (__this->fields).NDBPNFLAKDL;
  if (pEVar4 != (InfoAnimation_o *)0x0) {
    pEVar5 = (pEVar4->fields).DMGLMCBIAGL;
    if ((pEVar5 == (InfoAnimation_HJPFANEPGJF_o *)0x0) ||
       (__this_01 = (pEVar5->fields).NEIJJHEFLHP,
       __this_01 == (System_Collections_Generic_List_IIMNGGHGKOD__o *)0x0)) {
LAB_0320aaf4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (0 < (__this_01->fields)._size) {
      __this_00 = (System_Collections_Generic_List_object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<ActionAnimation>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (__this_00,Method_System_Collections_Generic_List<ActionAnimation>__ctor__);
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<ActionAnimation>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_MoveNext__
                          );
        item = local_60.fields._current;
        if (!bVar3) break;
        pGVar6 = (__this->fields).KOHECBJAFKG;
        if (pGVar6 == (ModelObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((ActionAnimation_o *)local_60.fields._current == (ActionAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = ActionAnimation__KOLIFGAJOHA
                          ((ActionAnimation_o *)local_60.fields._current,ACCIHBHMFPN,
                           (__this->fields).NDBPNFLAKDL,(pGVar6->fields).KOHECBJAFKG,
                           (MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<ActionAnimation>_Add__;
        if (bVar3) {
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar7 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pSVar7 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pSVar7->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pSVar7->m_Items[(int)uVar1] = item;
            thunk_FUN_01c20e04(pSVar7->m_Items + (int)uVar1,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_Dispose__)
      ;
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0320aaf4;
      if (0 < (__this_00->fields)._size) {
        OMLLDCIMLBB<object>__CallEvent
                  ((OMLLDCIMLBB_object__o *)__this,5,(Il2CppObject *)__this_00,
                   Method_OMLLDCIMLBB<object>_CallEvent__);
      }
    }
  }
  return;
}


// ===== public void FGNGCBDEBDN(List<string> OKAINPMIKKD)  [RVA 0x310AB80]
// ModelAnimation$$FGNGCBDEBDN @ RVA 0x310AB80

void ModelAnimation__FGNGCBDEBDN
               (ModelAnimation_o *__this,System_Collections_Generic_List_string__o *OKAINPMIKKD,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566533 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    DAT_04566533 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (OKAINPMIKKD != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)OKAINPMIKKD,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__),
          bVar1) {
      ModelAnimation__GNAKNCBOLOI(__this,(System_String_o *)local_48.fields._current,method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IICPADFDNMO()  [RVA 0x310AD88]
// ModelAnimation$$IICPADFDNMO @ RVA 0x310AD88

bool ModelAnimation__IICPADFDNMO(ModelAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).IOGCGDKKILK;
}


// ===== internal static Vector3 MINCEEOFBNG(float AFPEODJFNID, Vector3 EKEMKOCPHPO, Vector3 KJIKOOEABPG)  [RVA 0x310A000]
// ModelAnimation$$MINCEEOFBNG @ RVA 0x310A000

UnityEngine_Vector3_o
ModelAnimation__MINCEEOFBNG
          (float AFPEODJFNID,UnityEngine_Vector3_o EKEMKOCPHPO,UnityEngine_Vector3_o KJIKOOEABPG,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Vector3_o UVar3;
  float local_8;
  float fStack_4;
  
  fVar1 = EKEMKOCPHPO.fields.x - KJIKOOEABPG.fields.x;
  fVar2 = EKEMKOCPHPO.fields.y - KJIKOOEABPG.fields.y;
  sincosf(AFPEODJFNID * 0.017453292,&fStack_4,&local_8);
  UVar3.fields.y = KJIKOOEABPG.fields.y + fStack_4 * fVar1 + local_8 * fVar2;
  UVar3.fields.x = KJIKOOEABPG.fields.x + (local_8 * fVar1 - fStack_4 * fVar2);
  UVar3.fields.z = 0.0;
  return (UnityEngine_Vector3_o)UVar3.fields;
}


// ===== public void GNAKNCBOLOI(string KGLJICLJHEL)  [RVA 0x310ACBC]
// ModelAnimation$$GNAKNCBOLOI @ RVA 0x310ACBC

void ModelAnimation__GNAKNCBOLOI(ModelAnimation_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_JADGCGOJLJB__o *pSVar2;
  Il2CppObject *pIVar3;
  int index;
  
  if ((DAT_04566534 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_get_Item__);
    DAT_04566534 = 1;
  }
  pSVar2 = (__this->fields).ACMNENLJLOL;
  if (pSVar2 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
    index = (pSVar2->fields)._size + -1;
    if (index < 0) {
      return;
    }
    do {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          Method_System_Collections_Generic_List<IntervalAnimation>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      bVar1 = System_String__op_Equality
                        (KGLJICLJHEL,(System_String_o *)pIVar3[5].klass,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar2 = (__this->fields).ACMNENLJLOL;
                    /* try { // try from 0320ad54 to 0330ae07 has its CatchHandler @ 0320ad54
                       catch() { ... } // from try @ 0320ad54 with catch @ 0320ad54
                       catch() { ... } // from try @ 0320ae5c with catch @ 0320ad54
                       catch() { ... } // from try @ 0320ae88 with catch @ 0320ad54
                       catch() { ... } // from try @ 0320aeb8 with catch @ 0320ad54
                       catch() { ... } // from try @ 0320aeec with catch @ 0320ad54 */
        if (pSVar2 == (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) break;
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar2,index,
                   Method_System_Collections_Generic_List<IntervalAnimation>_RemoveAt__);
      }
      index = index + -1;
      if (index < 0) {
        return;
      }
      pSVar2 = (__this->fields).ACMNENLJLOL;
    } while (pSVar2 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GEIAIGHBEPD(Vector3f ANGBPBINHBL, bool CAPKFFELPCN, bool CIHOIIEAACO)  [RVA 0x310AD90]
// ModelAnimation$$GEIAIGHBEPD @ RVA 0x310AD90

void ModelAnimation__GEIAIGHBEPD
               (ModelAnimation_o *__this,Vector3f_o *ANGBPBINHBL,bool CAPKFFELPCN,bool CIHOIIEAACO,
               MethodInfo *method)

{
  Vector3f_o *pCVar1;
  KeyFrames_o *pMVar2;
  KeyFrames_MJFFMMHJCNB_o *pMVar3;
  System_Collections_Generic_List_CNDPAJOLKFN__o *__this_00;
  Vector3f_o *pCVar4;
  float EDCGCMAKCOM;
  float PFHCGPLGLHC;
  
  if ((DAT_04566535 & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector3f>_get_Item__);
    DAT_04566535 = 1;
  }
  pCVar1 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar1,(MethodInfo *)0x0);
  pMVar2 = (__this->fields).EJNOBBDDBDO;
  if (pMVar2 != (KeyFrames_o *)0x0) {
                    /* try { // try from 0320ae08 to 0330ae0f has its CatchHandler @ 0320aea0 */
    KeyFrames__HBMICHOLLMF(pMVar2,2,(MethodInfo *)0x0);
    pMVar2 = (__this->fields).EJNOBBDDBDO;
                    /* try { // try from 0320ae24 to 0330ae27 has its CatchHandler @ 0320ae8c */
                    /* try { // try from 0320ae28 to 0330ae37 has its CatchHandler @ 0320ae9c */
                    /* try { // try from 0320ae40 to 0330ae5b has its CatchHandler @ 0320ae98 */
    if ((((pMVar2 != (KeyFrames_o *)0x0) &&
         (pMVar3 = KeyFrames__HBMICHOLLMF(pMVar2,2,(MethodInfo *)0x0),
         pMVar3 != (KeyFrames_MJFFMMHJCNB_o *)0x0)) &&
        (__this_00 = (pMVar3->fields).KOANCCDDBDA,
        __this_00 != (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) &&
       ((pCVar4 = (Vector3f_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (__this->fields).NOEPMCHIBOL,
                             Method_System_Collections_Generic_List<Vector3f>_get_Item__),
        pCVar1 != (Vector3f_o *)0x0 &&
        (Vector3f__FOOHBJNHOKK(pCVar1,pCVar4,(MethodInfo *)0x0),
        ANGBPBINHBL != (Vector3f_o *)0x0)))) {
                    /* try { // try from 0320ae5c to 0330ae7f has its CatchHandler @ 0320ad54 */
      pCVar4 = (__this->fields).NMLGPAGEDKH;
      (__this->fields).BDLMOBMPOHM = (ANGBPBINHBL->fields).super.OHHDBINAJCB;
      pCVar1 = Vector3f__MPOCFELGHDK(ANGBPBINHBL,pCVar1,(MethodInfo *)0x0);
      if (pCVar4 != (Vector3f_o *)0x0) {
                    /* try { // try from 0320ae80 to 0330ae83 has its CatchHandler @ 0320ae94 */
                    /* try { // try from 0320ae84 to 0330ae87 has its CatchHandler @ 0320ae90 */
        Vector3f__FOOHBJNHOKK(pCVar4,pCVar1,(MethodInfo *)0x0);
                    /* try { // try from 0320ae88 to 0330aeb3 has its CatchHandler @ 0320ad54 */
        PFHCGPLGLHC = 0.0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320ae24 with catch @ 0320ae8c
                        */
        EDCGCMAKCOM = 0.0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320ae84 with catch @ 0320ae90
                        */
        if (CAPKFFELPCN) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320ae80 with catch @ 0320ae94
                        */
          pCVar1 = (__this->fields).NMLGPAGEDKH;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320ae40 with catch @ 0320ae98
                        */
          if (pCVar1 == (Vector3f_o *)0x0) goto LAB_0320aed4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320ae28 with catch @ 0320ae9c
                        */
          EDCGCMAKCOM = (pCVar1->fields).super.OHHDBINAJCB;
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320ae08 with catch @ 0320aea0
                        */
        if (CIHOIIEAACO) {
          pCVar1 = (__this->fields).NMLGPAGEDKH;
          if (pCVar1 == (Vector3f_o *)0x0) goto LAB_0320aed4;
          PFHCGPLGLHC = (pCVar1->fields).super.JOLEIODMLFL;
        }
        pMVar2 = (__this->fields).EJNOBBDDBDO;
                    /* try { // try from 0320aeb4 to 0330aeb7 has its CatchHandler @ 0320aedc */
        if (pMVar2 != (KeyFrames_o *)0x0) {
                    /* try { // try from 0320aeb8 to 0330aee3 has its CatchHandler @ 0320ad54 */
          KeyFrames__GHKNFJJOIDM(pMVar2,EDCGCMAKCOM,PFHCGPLGLHC,0.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0320aed4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LGEOBKJGNFH(float ALCNAHEDJLE, float GPIMPFAHIJE, int LBKPCLHLLDP, int HDLMCNFOMEE)  [RVA 0x310AED8]
// ModelAnimation$$LGEOBKJGNFH @ RVA 0x310AED8

void ModelAnimation__LGEOBKJGNFH
               (ModelAnimation_o *__this,float ALCNAHEDJLE,float GPIMPFAHIJE,int32_t LBKPCLHLLDP,
               int32_t HDLMCNFOMEE,MethodInfo *method)

{
  (__this->fields).GMJBKKIOMCB = LBKPCLHLLDP;
                    /* catch() { ... } // from try @ 0320aeb4 with catch @ 0320aedc */
  (__this->fields).FHJCJEMBKMP = HDLMCNFOMEE;
  (__this->fields).GOIHMJKAHJN = ALCNAHEDJLE;
                    /* try { // try from 0320aee4 to 0330aeeb has its CatchHandler @ 0320af04 */
  (__this->fields).AOOIIDBOANJ = GPIMPFAHIJE;
  return;
}


// ===== public void GNAKNCBOLOI(IntervalAnimation.IMLPLLLPALI ACCIHBHMFPN)  [RVA 0x310AEEC]
// ModelAnimation$$GNAKNCBOLOI @ RVA 0x310AEEC

void ModelAnimation__GNAKNCBOLOI(ModelAnimation_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_JADGCGOJLJB__o *pSVar2;
  IntervalAnimation_o *__this_00;
  int index;
  
                    /* try { // try from 0320aeec to 0330aefb has its CatchHandler @ 0320ad54 */
                    /* try { // try from 0320aefc to 0330af03 has its CatchHandler @ 0320af04 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0320aee4 with catch @ 0320af04
                       catch(type#2 @ 00000000) { ... } // from try @ 0320aefc with catch @ 0320af04
                        */
  if ((DAT_04566536 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_get_Item__);
    DAT_04566536 = 1;
  }
  pSVar2 = (__this->fields).ACMNENLJLOL;
  if (pSVar2 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
    index = (pSVar2->fields)._size + -1;
    if (index < 0) {
      return;
    }
    do {
      __this_00 = (IntervalAnimation_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar2,index,
                             Method_System_Collections_Generic_List<IntervalAnimation>_get_Item__);
      if (__this_00 == (IntervalAnimation_o *)0x0) break;
      iVar1 = IntervalAnimation__NHGGBEACKBD(__this_00,(MethodInfo *)0x0);
      if (iVar1 == ACCIHBHMFPN) {
        pSVar2 = (__this->fields).ACMNENLJLOL;
        if (pSVar2 == (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) break;
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar2,index,
                   Method_System_Collections_Generic_List<IntervalAnimation>_RemoveAt__);
      }
      index = index + -1;
      if (index < 0) {
        return;
      }
      pSVar2 = (__this->fields).ACMNENLJLOL;
    } while (pSVar2 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BKMANKPEDJN(Vector3f CIPNNFKDGFP)  [RVA 0x310AFB4]
// ModelAnimation$$BKMANKPEDJN @ RVA 0x310AFB4

void ModelAnimation__BKMANKPEDJN(ModelAnimation_o *__this,Vector3f_o *CIPNNFKDGFP,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  ModelObject_o *__this_00;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_01;
  Vector3f_o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566537 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelNode>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_GetEnumerator__);
    DAT_04566537 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KOHECBJAFKG;
  if ((__this_00 != (ModelObject_o *)0x0) &&
     (__this_01 = ModelObject__HMAAHELNECD(__this_00,(MethodInfo *)0x0),
     __this_01 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<ModelNode>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<ModelNode>_MoveNext__);
      pIVar1 = local_48.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<ModelNode>_Dispose__);
        return;
      }
      if ((ModelNode_o *)local_48.fields._current == (ModelNode_o *)0x0) break;
      ModelNode__CFAAJCOBAEE((ModelNode_o *)local_48.fields._current,(MethodInfo *)0x0);
      __this_02 = ((ModelNode_Fields *)((long)pIVar1 + 0x10))->CNMHHKAMGPI;
      if (__this_02 == (Vector3f_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Vector3f__LFENGGKOJDO(__this_02,CIPNNFKDGFP,(MethodInfo *)0x0);
                    /* try { // try from 0320b088 to 0330b12b has its CatchHandler @ 0320b088
                       catch() { ... } // from try @ 0320b088 with catch @ 0320b088
                       catch() { ... } // from try @ 0320b18c with catch @ 0320b088
                       catch() { ... } // from try @ 0320b1b4 with catch @ 0320b088
                       catch() { ... } // from try @ 0320b1e8 with catch @ 0320b088
                       catch() { ... } // from try @ 0320b228 with catch @ 0320b088 */
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool NGILHAOFGEA(ModelObject HBHPFKJMGCK, InfoAnimation MDFMIOAIAHH, int OAFGMHOFEKM, List<Vector3f> PDCJPCDLHCI, bool LBFDGHOEPPM = True)  [RVA 0x3108F58]
// ModelAnimation$$NGILHAOFGEA @ RVA 0x3108F58

bool ModelAnimation__NGILHAOFGEA
               (ModelObject_o *HBHPFKJMGCK,InfoAnimation_o *MDFMIOAIAHH,int32_t OAFGMHOFEKM,
               System_Collections_Generic_List_CNDPAJOLKFN__o *PDCJPCDLHCI,bool LBFDGHOEPPM,
               MethodInfo *method)

{
  bool bVar1;
  InfoAnimation_MNDFKOHIAHI_o *__this;
  System_String_o *pSVar2;
  ModelNode_o *LFALCONFCGH;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  ModelNode_o *NMGJAKHNCND;
  
  if ((DAT_04566538 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_9168/*"ModelAnimation::mirrorNodes - nodes not found: "{0}" for animation : {1}"*/);
    DAT_04566538 = 1;
  }
  if (((MDFMIOAIAHH != (InfoAnimation_o *)0x0) &&
      (__this = (MDFMIOAIAHH->fields).FGEAOBODDAP, __this != (InfoAnimation_MNDFKOHIAHI_o *)0x0)) &&
     (pSVar2 = InfoAnimation_MNDFKOHIAHI__LELBMBHAPOM(__this,(MethodInfo *)0x0),
     HBHPFKJMGCK != (ModelObject_o *)0x0)) {
    LFALCONFCGH = ModelObject__OCJAHBKIFNO(HBHPFKJMGCK,pSVar2,(MethodInfo *)0x0);
    if ((LFALCONFCGH != (ModelNode_o *)0x0) &&
       (NMGJAKHNCND = (LFALCONFCGH->fields).GAFCPEOANDD, NMGJAKHNCND != (ModelNode_o *)0x0)) {
      bVar1 = ModelAnimation__NGILHAOFGEA
                        (LFALCONFCGH,NMGJAKHNCND,OAFGMHOFEKM,PDCJPCDLHCI,LBFDGHOEPPM,method);
      return bVar1;
    }
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
    if (args != (System_Object_array *)0x0) {
      if ((pSVar2 != (System_String_o *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_032090e0:
        uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = (Il2CppObject *)pSVar2;
        thunk_FUN_01c20e04(args->m_Items,pSVar2);
        pSVar2 = (MDFMIOAIAHH->fields).JIJLBFGKNJK;
        if ((pSVar2 != (System_String_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        goto LAB_032090e0;
        if (1 < (uint)args->max_length) {
          args->m_Items[1] = (Il2CppObject *)pSVar2;
          thunk_FUN_01c20e04(args->m_Items + 1,pSVar2);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_9168/*"ModelAnimation::mirrorNodes - nodes not found: "{0}" for animation : {1}"*/,args,(MethodInfo *)0x0);
          return false;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FJCKMGLHDGG()  [RVA 0x3109B14]
// ModelAnimation$$FJCKMGLHDGG @ RVA 0x3109B14

void ModelAnimation__FJCKMGLHDGG(ModelAnimation_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
  if (((__this->fields).NDBPNFLAKDL != (InfoAnimation_o *)0x0) &&
     (iVar1 = ModelAnimation__MKIHMHHJLHE(__this,method), method = method_00,
     iVar1 != (__this->fields).FNMEOPOBFBC)) {
    (__this->fields).FNMEOPOBFBC = iVar1;
    ModelAnimation__EIEAFNFGOHG(__this,method_00);
    (__this->fields).FAHOMGFHMAP = true;
    method = extraout_x1;
  }
  ModelAnimation__LCEFIPCHKMN(__this,method);
  return;
}


// ===== public int HAEEPKKJOBL()  [RVA 0x3106D40]
// ModelAnimation$$HAEEPKKJOBL @ RVA 0x3106D40

int32_t ModelAnimation__HAEEPKKJOBL(ModelAnimation_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  InfoAnimation_o *pEVar2;
  
  pEVar2 = (__this->fields).NDBPNFLAKDL;
  if (pEVar2 != (InfoAnimation_o *)0x0) {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pEVar2->fields).FECCBIOBKAF.fields,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<string> LBNGNBGJPLA()  [RVA 0x310B128]
// ModelAnimation$$LBNGNBGJPLA @ RVA 0x310B128

System_Collections_Generic_List_string__o *
ModelAnimation__LBNGNBGJPLA(ModelAnimation_o *__this,MethodInfo *method)

{
  InfoAnimation_o *pEVar1;
  
                    /* try { // try from 0320b12c to 0330b133 has its CatchHandler @ 0320b1cc */
  pEVar1 = (__this->fields).NDBPNFLAKDL;
  if (pEVar1 != (InfoAnimation_o *)0x0) {
    return (pEVar1->fields).GMNNFJNKIAN;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AJMPNDMFECM(float CJNHFNHJHPE)  [RVA 0x310B144]
// ModelAnimation$$AJMPNDMFECM @ RVA 0x310B144

void ModelAnimation__AJMPNDMFECM(ModelAnimation_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).JDKMKKIDECK = CJNHFNHJHPE;
                    /* try { // try from 0320b148 to 0330b14b has its CatchHandler @ 0320b1b8 */
  return;
}


// ===== public void EMEAIOKDLFM()  [RVA 0x3109B08]
// ModelAnimation$$EMEAIOKDLFM @ RVA 0x3109B08

void ModelAnimation__EMEAIOKDLFM(ModelAnimation_o *__this,MethodInfo *method)

{
  (__this->fields).AANDHIFMLHC = false;
  (__this->fields).PIODLNMKAGJ = true;
  return;
}


// ===== public List<ModelEdge> KELJGLOFFAC()  [RVA 0x310B14C]
// ModelAnimation$$KELJGLOFFAC @ RVA 0x310B14C

System_Collections_Generic_List_GEBHIBIEAJE__o *
ModelAnimation__KELJGLOFFAC(ModelAnimation_o *__this,MethodInfo *method)

{
                    /* try { // try from 0320b14c to 0330b15b has its CatchHandler @ 0320b1c8 */
  return (__this->fields).HALIJPAEEBE;
}


// ===== private void DPAGEPIGLEF()  [RVA 0x310A1C4]
// ModelAnimation$$DPAGEPIGLEF @ RVA 0x310A1C4

void ModelAnimation__DPAGEPIGLEF(ModelAnimation_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  ModelAnimation__DPAGEPIGLEF(__this,(__this->fields).JGJCGMBHINN,in_x2);
  return;
}


// ===== public bool OJJOKHEBDLP()  [RVA 0x310B154]
// ModelAnimation$$OJJOKHEBDLP @ RVA 0x310B154

bool ModelAnimation__OJJOKHEBDLP(ModelAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).AANDHIFMLHC;
}


// ===== public int NABOCMIDLJI()  [RVA 0x3109104]
// ModelAnimation$$NABOCMIDLJI @ RVA 0x3109104

int32_t ModelAnimation__NABOCMIDLJI(ModelAnimation_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int32_t iVar3;
  
  iVar2 = (__this->fields).BPIIACENHPE;
  iVar1 = 0;
  if (2 < iVar2) {
    iVar1 = iVar2 + -2;
  }
  iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
  return iVar3 + iVar1;
}


// ===== public int NLDLKCDGDLL()  [RVA 0x310B15C]
// ModelAnimation$$NLDLKCDGDLL @ RVA 0x310B15C

int32_t ModelAnimation__NLDLKCDGDLL(ModelAnimation_o *__this,MethodInfo *method)

{
  long lVar1;
  
  lVar1 = 0x118;
  if ((__this->fields).DMJAJGGGHPF < 1) {
    lVar1 = 0x11c;
  }
                    /* try { // try from 0320b170 to 0330b17b has its CatchHandler @ 0320b1c4 */
  return *(int32_t *)((long)&__this->klass + lVar1);
}


// ===== public void IILNPDPEGFN()  [RVA 0x310B178]
// ModelAnimation$$IILNPDPEGFN @ RVA 0x310B178

void ModelAnimation__IILNPDPEGFN(ModelAnimation_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_JADGCGOJLJB_IMLPLLLPALI__o **ppSVar1;
  
  ppSVar1 = &(__this->fields).HCDNAGGCLDA;
  *ppSVar1 = (System_Collections_Generic_HashSet_JADGCGOJLJB_IMLPLLLPALI__o *)0x0;
                    /* try { // try from 0320b17c to 0330b18b has its CatchHandler @ 0320b1c0 */
  thunk_FUN_01c20e04(ppSVar1,0);
  return;
}


// ===== public ModelAnimation NDHGJPKIHIG()  [RVA 0x310B184]
// ModelAnimation$$NDHGJPKIHIG @ RVA 0x310B184

ModelAnimation_o * ModelAnimation__NDHGJPKIHIG(ModelAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).DPNACGKHLGD;
}


// ===== public int HNHPEFFCHBD()  [RVA 0x310B18C]
// ModelAnimation$$HNHPEFFCHBD @ RVA 0x310B18C

int32_t ModelAnimation__HNHPEFFCHBD(ModelAnimation_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int iVar3;
  
                    /* try { // try from 0320b18c to 0330b1af has its CatchHandler @ 0320b088 */
  iVar3 = (__this->fields).JJIDKDIGGEK;
  if ((__this->fields).AANDHIFMLHC != false) {
                    /* try { // try from 0320b1b0 to 0330b1b3 has its CatchHandler @ 0320b1bc */
                    /* try { // try from 0320b1b4 to 0330b1e3 has its CatchHandler @ 0320b088 */
    iVar1 = 0;
    if (2 < iVar3) {
      iVar1 = iVar3 + -2;
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320b148 with catch @ 0320b1b8
                        */
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (__this->fields).KINFMBHKNLA.fields,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320b1b0 with catch @ 0320b1bc
                        */
    iVar3 = iVar2 + iVar1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320b17c with catch @ 0320b1c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320b170 with catch @ 0320b1c4
                        */
  return iVar3;
}


// ===== private ModelAnimation EOKACGOFPDN(LCAJGLLBBEC.ELJAALFNLIP EDGLFMHDPOO)  [RVA 0x3109158]
// ModelAnimation$$EOKACGOFPDN @ RVA 0x3109158

ModelAnimation_o *
ModelAnimation__EOKACGOFPDN(ModelAnimation_o *__this,int32_t EDGLFMHDPOO,MethodInfo *method)

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  int32_t local_24;
  
  if ((DAT_04566539 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LCAJGLLBBEC_ELJAALFNLIP_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_9166/*"ModelAnimation::getPlayerAnimation - unknown type: {0}"*/);
    DAT_04566539 = 1;
  }
  if (1 < (uint)EDGLFMHDPOO) {
    if (EDGLFMHDPOO == 2) {
      __this = (__this->fields).MLANKGMLJBF;
    }
    else if (EDGLFMHDPOO == 3) {
      __this = (__this->fields).DPNACGKHLGD;
    }
    else {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      local_24 = EDGLFMHDPOO;
      pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(LCAJGLLBBEC_ELJAALFNLIP_TypeInfo,&local_24);
      if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
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
      UnityEngine_Debug__LogErrorFormat(StringLiteral_9166/*"ModelAnimation::getPlayerAnimation - unknown type: {0}"*/,args,(MethodInfo *)0x0);
      __this = (ModelAnimation_o *)0x0;
    }
  }
  return __this;
}

