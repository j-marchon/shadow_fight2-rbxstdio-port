// Original name: Nekki.SF2.Core.Zones.FightList  (obfuscated AFFHKININGD)
// TypeDefIndex 2429
// Namespace: 
// public class FightList
// Fields:
//   public DNELIPCHKLK KOILJHHCIEE; // 0x10
//   protected COALAGILPBO JDNKKGPNHPB; // 0x18
//   protected PAMEPBLOLPB JPBIBBBMCCD; // 0x20
//   protected int GKCEBBGMBGA; // 0x28
//   protected string BJMHBMDFFPA; // 0x30
//   public string LAFKEHDGGND; // 0x38
//   public OOMHDDBCBJP IFJLLGPGMHM; // 0x40
//   public string JIJLBFGKNJK; // 0x48
//   public int HLFBMBHOPMI; // 0x50
//   public int MKMGFKDKKBG; // 0x54
//   public long PIKNKFHOMLP; // 0x58
//   public bool IKDHEPOOBIC; // 0x60
//   public bool HECJHMJKFGB; // 0x61
//   private bool GFCLPPPMGAK; // 0x62
//   private bool BLFDCHIPLMI; // 0x63
//   public FNLLFBNCKBG HHJIJKJCEOF; // 0x64
//   public bool AHCBCNJAMHB; // 0x68
//   public ObscuredInt GENLHJOKOIJ; // 0x6C
//   public ObscuredInt NHNNEADDBDB; // 0x7C
//   public int GNBEPMLNKLA; // 0x8C
//   public ObscuredLong JHCMAOFOCPH; // 0x90
//   public ObscuredLong LGLKMANDGPD; // 0xB0
//   public ObscuredUInt KLLNCGMOIHL; // 0xD0
//   public string MHOGPFEMHHF; // 0xE0
//   public ObscuredFloat GNPJCLKAPIA; // 0xE8
//   public float OFAHLCKPLKA; // 0xFC
//   public ObscuredFloat NLHBNEAKOHE; // 0x100
//   public string GLDHKALMIBD; // 0x118
//   public readonly List<ModelParameters> NNHINPLPDHJ; // 0x120
//   public readonly List<ModelParameters> MECHOBPGHFJ; // 0x128
//   public readonly List<IEJGMGHPING> KPFGHBEKJIM; // 0x130
//   public readonly List<JBCGDIEHOHH> FGAENDJJOGN; // 0x138
//   public readonly List<ItemRule> MIHBDEKEPEB; // 0x140
//   public readonly List<RandomRule> HFDOEONIBFA; // 0x148
//   private string IGIFBFEFIKG; // 0x150
//   private readonly List<Rule> LJNCACBBIBD; // 0x158
//   private readonly List<Rule> KFHLHCHCMPM; // 0x160
//   private readonly List<Rule> ILMPKOBNAIB; // 0x168
//   private readonly List<Rule> FEODLOLDCKM; // 0x170
//   private readonly List<ModelParameters> LDDKNBHPPOK; // 0x178
//   public ushort PFNGONCEHMH; // 0x180
//   public ushort DJFFHALCIEB; // 0x182
//   public string EJEIHIOJFON; // 0x188

// ===== private CALLBECPAIA KBJBDOJKGML()  [RVA 0x333E2F0]
// FightList$$KBJBDOJKGML @ RVA 0x333E2F0

CALLBECPAIA_o * FightList__KBJBDOJKGML(FightList_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  MethodInfo *extraout_x1;
  CALLBECPAIA_o *pCVar4;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04567981 & 1) == 0) {
    FUN_01bab630(&CALLBECPAIA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    DAT_04567981 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = FightList__HKNMJCKPHHC(__this,method);
  if (__this_00 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
    pCVar4 = (CALLBECPAIA_o *)local_38.fields._current;
    if (!bVar2) {
      pCVar4 = (CALLBECPAIA_o *)0x0;
      goto LAB_0343e3f4;
    }
    if ((CALLBECPAIA_o *)local_38.fields._current == (CALLBECPAIA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = Rule__NHGGBEACKBD((Rule_o *)local_38.fields._current,(MethodInfo *)0x0);
  } while (iVar3 != 0x21);
  bVar1 = (CALLBECPAIA_TypeInfo->_2).naturalAligment;
  if (((((CALLBECPAIA_c *)((Il2CppObject *)pCVar4)->klass)->_2).naturalAligment < bVar1) ||
     ((((CALLBECPAIA_c *)((Il2CppObject *)pCVar4)->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)CALLBECPAIA_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(pCVar4);
  }
LAB_0343e3f4:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
  return pCVar4;
}


// ===== public void AIFHABOFCNN(int CJNHFNHJHPE)  [RVA 0x333E550]
// FightList$$AIFHABOFCNN @ RVA 0x333E550

void FightList__AIFHABOFCNN(FightList_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).GKCEBBGMBGA = CJNHFNHJHPE;
  return;
}


// ===== public PAMEPBLOLPB GOCFHEAJLKK()  [RVA 0x333E558]
// FightList$$GOCFHEAJLKK @ RVA 0x333E558

PAMEPBLOLPB_o * FightList__GOCFHEAJLKK(FightList_o *__this,MethodInfo *method)

{
  return (__this->fields).JPBIBBBMCCD;
}


// ===== public int IKDFBAOFNPB()  [RVA 0x333E560]
// FightList$$IKDFBAOFNPB @ RVA 0x333E560

int32_t FightList__IKDFBAOFNPB(FightList_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Func_PJKHAJKEHEL__int__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_PJKHAJKEHEL__o *source;
  System_Func_PJKHAJKEHEL__int__o *selector;
  
  if ((DAT_04567982 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Sum<ModelParameters>__);
    FUN_01bab630(&System_Func<ModelParameters,_int>_TypeInfo);
    FUN_01bab630(&Method_AFFHKININGD_<>c_IGNCEDGNDPM__);
    FUN_01bab630(&FightList_<>c_TypeInfo);
    DAT_04567982 = 1;
    method = extraout_x1;
  }
  source = (__this->fields).MECHOBPGHFJ;
  if ((FightList_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FightList_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  selector = FightList_<>c_TypeInfo->static_fields->__9__72_0;
  if (selector == (System_Func_PJKHAJKEHEL__int__o *)0x0) {
    if ((FightList_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(FightList_<>c_TypeInfo,method);
    }
    selector = (System_Func_PJKHAJKEHEL__int__o *)
               thunk_FUN_01bda818(System_Func<ModelParameters,_int>_TypeInfo);
    System_Func<object,_int>___ctor();
    ppSVar2 = &FightList_<>c_TypeInfo->static_fields->__9__72_0;
    *ppSVar2 = selector;
    thunk_FUN_01c20e04(ppSVar2,selector);
  }
  iVar1 = System_Linq_Enumerable__Sum<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                     (System_Func_TSource__int__o *)selector,
                     Method_System_Linq_Enumerable_Sum<ModelParameters>__);
  return iVar1;
}


// ===== public void IOKPIKLGAPJ()  [RVA 0x333E65C]
// FightList$$IOKPIKLGAPJ @ RVA 0x333E65C

void FightList__IOKPIKLGAPJ(FightList_o *__this,MethodInfo *method)

{
  if ((__this->fields).BLFDCHIPLMI != false) {
    FightList__DBLLCDJCJIJ(__this,method);
    return;
  }
  return;
}


// ===== public long JGJMOEOBKGG()  [RVA 0x333E86C]
// FightList$$JGJMOEOBKGG @ RVA 0x333E86C

int64_t FightList__JGJMOEOBKGG(FightList_o *__this,MethodInfo *method)

{
  PAMEPBLOLPB_o *pPVar1;
  ulong uVar2;
  
  pPVar1 = (__this->fields).JPBIBBBMCCD;
  if (pPVar1 != (PAMEPBLOLPB_o *)0x0) {
    uVar2 = (__this->fields).PIKNKFHOMLP - (pPVar1->fields).GKGHELAOIBG;
    return uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public JBCGDIEHOHH CILPNDAAJGF(int DPJIDNBJIBG)  [RVA 0x333E894]
// FightList$$CILPNDAAJGF @ RVA 0x333E894

JBCGDIEHOHH_o *
FightList__CILPNDAAJGF(FightList_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  System_Collections_Generic_List_JBCGDIEHOHH__o *pSVar1;
  JBCGDIEHOHH_o *pJVar2;
  System_String_array *values;
  System_String_o *pSVar3;
  int32_t local_28;
  int32_t local_24;
  
  local_24 = DPJIDNBJIBG;
  if ((DAT_04567983 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_6349/*"FightList::getReward - wrong index: "*/);
    FUN_01bab630(&StringLiteral_7155/*"I dont know)"*/);
    FUN_01bab630(&StringLiteral_226/*" (we need this error?)"*/);
    FUN_01bab630(&StringLiteral_427/*" from "*/);
    DAT_04567983 = 1;
  }
  local_28 = 0;
  pSVar1 = (__this->fields).FGAENDJJOGN;
  if (pSVar1 != (System_Collections_Generic_List_JBCGDIEHOHH__o *)0x0) {
    if (DPJIDNBJIBG < (pSVar1->fields)._size) {
      pJVar2 = (JBCGDIEHOHH_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,DPJIDNBJIBG,
                          Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__);
      return pJVar2;
    }
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = StringLiteral_6349/*"FightList::getReward - wrong index: "*/;
        thunk_FUN_01c20e04(values->m_Items);
        pSVar3 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = pSVar3;
          thunk_FUN_01c20e04(values->m_Items + 1,pSVar3);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = StringLiteral_427/*" from "*/;
            thunk_FUN_01c20e04();
            pSVar1 = (__this->fields).FGAENDJJOGN;
            if (pSVar1 == (System_Collections_Generic_List_JBCGDIEHOHH__o *)0x0) goto LAB_0343eaa4;
            local_28 = (pSVar1->fields)._size;
            pSVar3 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = pSVar3;
              thunk_FUN_01c20e04(values->m_Items + 3,pSVar3);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = StringLiteral_226/*" (we need this error?)"*/;
                thunk_FUN_01c20e04();
                pSVar3 = System_String__Concat(values,(MethodInfo *)0x0);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                }
                UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
                UnityEngine_Debug__Log(StringLiteral_7155/*"I dont know)"*/,(MethodInfo *)0x0);
                return (JBCGDIEHOHH_o *)0x0;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_0343eaa4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LMLGHFLCHGE()  [RVA 0x333EAA8]
// FightList$$LMLGHFLCHGE @ RVA 0x333EAA8

void FightList__LMLGHFLCHGE(FightList_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567984 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelParameters>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelParameters>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelParameters>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>_Remove__);
    DAT_04567984 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).LDDKNBHPPOK;
  if (pSVar2 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<ModelParameters>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<ModelParameters>_MoveNext__
                             ), bVar1) {
      pSVar2 = (__this->fields).MECHOBPGHFJ;
      if (pSVar2 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar2,local_48.fields._current,
                 Method_System_Collections_Generic_List<ModelParameters>_Remove__);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<ModelParameters>_Dispose__);
    pSVar2 = (__this->fields).LDDKNBHPPOK;
    if (pSVar2 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RandomizeObscuredVars()  [RVA 0x333EC4C]
// FightList$$RandomizeObscuredVars @ RVA 0x333EC4C

void FightList__RandomizeObscuredVars(FightList_o *__this,MethodInfo *method)

{
  System_Action_JBCGDIEHOHH__o **ppSVar1;
  System_Action_PJKHAJKEHEL__o **ppSVar2;
  MethodInfo *in_x2;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_00;
  System_Collections_Generic_List_JBCGDIEHOHH__o *__this_01;
  System_Action_PJKHAJKEHEL__o *action;
  System_Action_JBCGDIEHOHH__o *action_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_02;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_03;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_o __this_04;
  
  if ((DAT_04567985 & 1) == 0) {
    FUN_01bab630(&System_Action<ModelParameters>_TypeInfo);
    FUN_01bab630(&System_Action<JBCGDIEHOHH>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_ForEach__);
    FUN_01bab630(&Method_AFFHKININGD_<>c_APMADPDPANM__);
    FUN_01bab630(&Method_AFFHKININGD_<>c_LHJKOBAJHBB__);
    FUN_01bab630(&FightList_<>c_TypeInfo);
    DAT_04567985 = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).GNPJCLKAPIA,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).NLHBNEAKOHE,(MethodInfo *)0x0);
  __this_02.fields.fakeValue = 0;
  __this_02.fields.fakeValueActive = false;
  __this_02.fields.inited = false;
  __this_02.fields._14_2_ = 0;
  __this_02.fields._0_8_ = &(__this->fields).GENLHJOKOIJ;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_02,in_x2);
  __this_03.fields.fakeValue = 0;
  __this_03.fields.fakeValueActive = false;
  __this_03.fields.inited = false;
  __this_03.fields._14_2_ = 0;
  __this_03.fields._0_8_ = &(__this->fields).NHNNEADDBDB;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_03,in_x2);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__GPJJDLBJOAL
            (&(__this->fields).JHCMAOFOCPH,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__GPJJDLBJOAL
            (&(__this->fields).LGLKMANDGPD,(MethodInfo *)0x0);
  __this_04.fields.fakeValue = 0;
  __this_04.fields.fakeValueActive = false;
  __this_04.fields.inited = false;
  __this_04.fields._14_2_ = 0;
  __this_04.fields._0_8_ = &(__this->fields).KLLNCGMOIHL;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__GPJJDLBJOAL(__this_04,in_x2);
  __this_01 = (__this->fields).FGAENDJJOGN;
  if ((FightList_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action_00 = FightList_<>c_TypeInfo->static_fields->__9__59_0;
  if (action_00 == (System_Action_JBCGDIEHOHH__o *)0x0) {
    if ((FightList_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action_00 = (System_Action_JBCGDIEHOHH__o *)
                thunk_FUN_01bda818(System_Action<JBCGDIEHOHH>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &FightList_<>c_TypeInfo->static_fields->__9__59_0;
    *ppSVar1 = action_00;
    thunk_FUN_01c20e04(ppSVar1,action_00);
  }
  if (__this_01 != (System_Collections_Generic_List_JBCGDIEHOHH__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_01,
               (System_Action_T__o *)action_00,
               Method_System_Collections_Generic_List<JBCGDIEHOHH>_ForEach__);
    __this_00 = (__this->fields).MECHOBPGHFJ;
    if ((FightList_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = FightList_<>c_TypeInfo->static_fields->__9__59_1;
    if (action == (System_Action_PJKHAJKEHEL__o *)0x0) {
      if ((FightList_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = (System_Action_PJKHAJKEHEL__o *)
               thunk_FUN_01bda818(System_Action<ModelParameters>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &FightList_<>c_TypeInfo->static_fields->__9__59_1;
      *ppSVar2 = action;
      thunk_FUN_01c20e04(ppSVar2,action);
    }
    if (__this_00 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<ModelParameters>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual List<NIAFDKHDBMA> NIKCNPMKAFK()  [RVA 0x333EE60]
// FightList$$NIKCNPMKAFK @ RVA 0x333EE60

System_Collections_Generic_List_NIAFDKHDBMA__o *
FightList__NIKCNPMKAFK(FightList_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AJNNHGGLGIF__o *source;
  System_Func_AJNNHGGLGIF__bool__o **ppSVar1;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_IEnumerable_TResult__o *source_01;
  System_Collections_Generic_List_NIAFDKHDBMA__o *pSVar2;
  MethodInfo *extraout_x1;
  System_Func_AJNNHGGLGIF__bool__o *predicate;
  
  if ((DAT_04567986 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Cast<NIAFDKHDBMA>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<NIAFDKHDBMA>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<Rule>__);
    FUN_01bab630(&System_Func<Rule,_bool>_TypeInfo);
    FUN_01bab630(&Method_AFFHKININGD_<>c_FACLHKKNINP__);
    FUN_01bab630(&FightList_<>c_TypeInfo);
    DAT_04567986 = 1;
    method = extraout_x1;
  }
  source = FightList__HKNMJCKPHHC(__this,method);
  if ((FightList_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FightList_<>c_TypeInfo);
  }
  predicate = FightList_<>c_TypeInfo->static_fields->__9__90_0;
  if (predicate == (System_Func_AJNNHGGLGIF__bool__o *)0x0) {
    if ((FightList_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(FightList_<>c_TypeInfo);
    }
    predicate = (System_Func_AJNNHGGLGIF__bool__o *)
                thunk_FUN_01bda818(System_Func<Rule,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    ppSVar1 = &FightList_<>c_TypeInfo->static_fields->__9__90_0;
    *ppSVar1 = predicate;
    thunk_FUN_01c20e04(ppSVar1,predicate);
  }
  source_00 = System_Linq_Enumerable__Where<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)predicate,
                         Method_System_Linq_Enumerable_Where<Rule>__);
  source_01 = System_Linq_Enumerable__Cast<object>
                        ((System_Collections_IEnumerable_o *)source_00,
                         Method_System_Linq_Enumerable_Cast<NIAFDKHDBMA>__);
  pSVar2 = (System_Collections_Generic_List_NIAFDKHDBMA__o *)
           System_Linq_Enumerable__ToList<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,
                      Method_System_Linq_Enumerable_ToList<NIAFDKHDBMA>__);
  return pSVar2;
}


// ===== public void GNLPNKGBAFL(COALAGILPBO CJNHFNHJHPE)  [RVA 0x333EFAC]
// FightList$$GNLPNKGBAFL @ RVA 0x333EFAC

void FightList__GNLPNKGBAFL(FightList_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).JDNKKGPNHPB = CJNHFNHJHPE;
  return;
}


// ===== public void EBKOKBBGNFM(int HCILIHJHEOM)  [RVA 0x333EFB4]
// FightList$$EBKOKBBGNFM @ RVA 0x333EFB4

void FightList__EBKOKBBGNFM(FightList_o *__this,int32_t HCILIHJHEOM,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  undefined2 uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  undefined6 uVar7;
  System_Collections_Generic_List_JBCGDIEHOHH__o *__this_00;
  JBCGDIEHOHH_o *__this_01;
  JHBHHHKEFOO_o *pJVar8;
  int64_t iVar9;
  int64_t iVar10;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_Fields CVar11;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  int64_t local_40;
  int64_t iStack_38;
  int64_t iStack_30;
  bool_conflict bStack_28;
  bool_conflict bStack_27;
  undefined6 uStack_26;
  
  if ((DAT_04567987 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__);
    DAT_04567987 = 1;
  }
  __this_00 = (__this->fields).FGAENDJJOGN;
  if (__this_00 != (System_Collections_Generic_List_JBCGDIEHOHH__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      CVar11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
      (__this->fields).KLLNCGMOIHL.fields = CVar11;
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_60,0,(MethodInfo *)0x0);
      iStack_38 = local_60.fields.hiddenValue;
      local_40 = local_60.fields.currentCryptoKey;
      bStack_28 = local_60.fields.fakeValueActive;
      bStack_27 = local_60.fields.inited;
      uStack_26 = local_60.fields._26_6_;
      iStack_30 = local_60.fields.fakeValue;
      (__this->fields).JHCMAOFOCPH.fields.hiddenValue = local_60.fields.hiddenValue;
      (__this->fields).JHCMAOFOCPH.fields.currentCryptoKey = local_60.fields.currentCryptoKey;
      (__this->fields).JHCMAOFOCPH.fields.fakeValueActive = local_60.fields.fakeValueActive;
      (__this->fields).JHCMAOFOCPH.fields.inited = local_60.fields.inited;
      *(undefined6 *)&(__this->fields).JHCMAOFOCPH.fields.field_0x1a = local_60.fields._26_6_;
      (__this->fields).JHCMAOFOCPH.fields.fakeValue = local_60.fields.fakeValue;
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_80,0,(MethodInfo *)0x0);
    }
    else {
      __this_01 = (JBCGDIEHOHH_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,iVar1 + -1,
                             Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__);
      if ((__this_01 == (JBCGDIEHOHH_o *)0x0) ||
         (pJVar8 = JBCGDIEHOHH__ALLFNDNBMCO(__this_01,HCILIHJHEOM,(MethodInfo *)0x0),
         pJVar8 == (JHBHHHKEFOO_o *)0x0)) goto LAB_0343f0a4;
      bVar2 = (pJVar8->fields).COAIOPFEFHM.fields.fakeValueActive;
      bVar3 = (pJVar8->fields).COAIOPFEFHM.fields.inited;
      uVar4 = *(undefined2 *)&(pJVar8->fields).COAIOPFEFHM.fields.field_0xe;
      uVar5 = (pJVar8->fields).COAIOPFEFHM.fields.currentCryptoKey;
      uVar6 = (pJVar8->fields).COAIOPFEFHM.fields.hiddenValue;
      (__this->fields).KLLNCGMOIHL.fields.fakeValue = (pJVar8->fields).COAIOPFEFHM.fields.fakeValue;
      (__this->fields).KLLNCGMOIHL.fields.fakeValueActive = bVar2;
      (__this->fields).KLLNCGMOIHL.fields.inited = bVar3;
      *(undefined2 *)&(__this->fields).KLLNCGMOIHL.fields.field_0xe = uVar4;
      (__this->fields).KLLNCGMOIHL.fields.currentCryptoKey = uVar5;
      (__this->fields).KLLNCGMOIHL.fields.hiddenValue = uVar6;
      bVar2 = (pJVar8->fields).DCDLMCEEOCC.fields.fakeValueActive;
      bVar3 = (pJVar8->fields).DCDLMCEEOCC.fields.inited;
      uVar7 = *(undefined6 *)&(pJVar8->fields).DCDLMCEEOCC.fields.field_0x1a;
      iVar9 = (pJVar8->fields).DCDLMCEEOCC.fields.fakeValue;
      iVar10 = (pJVar8->fields).DCDLMCEEOCC.fields.currentCryptoKey;
      (__this->fields).JHCMAOFOCPH.fields.hiddenValue =
           (pJVar8->fields).DCDLMCEEOCC.fields.hiddenValue;
      (__this->fields).JHCMAOFOCPH.fields.currentCryptoKey = iVar10;
      (__this->fields).JHCMAOFOCPH.fields.fakeValueActive = bVar2;
      (__this->fields).JHCMAOFOCPH.fields.inited = bVar3;
      *(undefined6 *)&(__this->fields).JHCMAOFOCPH.fields.field_0x1a = uVar7;
      (__this->fields).JHCMAOFOCPH.fields.fakeValue = iVar9;
      local_80.fields.fakeValueActive = (pJVar8->fields).DJHKCMKJEFP.fields.fakeValueActive;
      local_80.fields.inited = (pJVar8->fields).DJHKCMKJEFP.fields.inited;
      local_80.fields._26_6_ = *(undefined6 *)&(pJVar8->fields).DJHKCMKJEFP.fields.field_0x1a;
      local_80.fields.fakeValue = (pJVar8->fields).DJHKCMKJEFP.fields.fakeValue;
      local_80.fields.hiddenValue = (pJVar8->fields).DJHKCMKJEFP.fields.hiddenValue;
      local_80.fields.currentCryptoKey = (pJVar8->fields).DJHKCMKJEFP.fields.currentCryptoKey;
    }
    (__this->fields).LGLKMANDGPD.fields.hiddenValue = local_80.fields.hiddenValue;
    (__this->fields).LGLKMANDGPD.fields.currentCryptoKey = local_80.fields.currentCryptoKey;
    (__this->fields).LGLKMANDGPD.fields.fakeValueActive = local_80.fields.fakeValueActive;
    (__this->fields).LGLKMANDGPD.fields.inited = local_80.fields.inited;
    *(int6 *)&(__this->fields).LGLKMANDGPD.fields.field_0x1a = local_80.fields._26_6_;
    (__this->fields).LGLKMANDGPD.fields.fakeValue = local_80.fields.fakeValue;
    return;
  }
LAB_0343f0a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private List<MGNDHCBAPEN<string, float>> IKDKGGNGFBE()  [RVA 0x333F0A8]
// FightList$$IKDKGGNGFBE @ RVA 0x333F0A8

System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *
FightList__IKDKGGNGFBE(FightList_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *pSVar1;
  MethodInfo *in_x2;
  
  pSVar1 = FightList__OPALEBBOFPM(__this,1,in_x2);
  return pSVar1;
}


// ===== public void GFGALPDANIJ()  [RVA 0x333F654]
// FightList$$GFGALPDANIJ @ RVA 0x333F654

void FightList__GFGALPDANIJ(FightList_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04567988 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>_Clear__);
    DAT_04567988 = 1;
  }
  pSVar1 = (__this->fields).NNHINPLPDHJ;
  if (pSVar1 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
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


// ===== public int DGDKAHOOFNK(string EBOHIPKPFDJ)  [RVA 0x333F6C4]
// FightList$$DGDKAHOOFNK @ RVA 0x333F6C4

int32_t FightList__DGDKAHOOFNK
                  (FightList_o *__this,System_String_o *EBOHIPKPFDJ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_JCHNBADDBGO__o *__this_00;
  HOOAAGABMBL_o *pHVar4;
  Rule_c *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567989 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ItemRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ItemRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ItemRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ItemRule>_GetEnumerator__);
    DAT_04567989 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 0343f728 to 0353f85b has its CatchHandler @ 0343f728
                       catch() { ... } // from try @ 0343f728 with catch @ 0343f728
                       catch() { ... } // from try @ 0343f908 with catch @ 0343f728
                       catch() { ... } // from try @ 0343f98c with catch @ 0343f728
                       catch() { ... } // from try @ 0343f994 with catch @ 0343f728
                       catch() { ... } // from try @ 0343fa34 with catch @ 0343f728 */
  __this_00 = (__this->fields).MIHBDEKEPEB;
  if (__this_00 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ItemRule>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  do {
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<ItemRule>_MoveNext__);
      pIVar1 = local_50.fields._current;
      if (!bVar2) {
        iVar3 = 0;
        goto LAB_0343f7d0;
      }
      if ((Rule_o *)local_50.fields._current == (Rule_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = Rule__BNNIDPDMOIL((Rule_o *)local_50.fields._current,(MethodInfo *)0x0);
    } while ((!bVar2) || (*(char *)&((Rule_o *)((long)pIVar1 + 0x58))->monitor != '\0'));
    __this_01 = ((Rule_o *)((long)pIVar1 + 0x58))->klass;
    if (__this_01 == (Rule_c *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pHVar4 = (HOOAAGABMBL_o *)(__this_01->_1).namespaze;
    if (pHVar4 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__op_Equality
                      ((pHVar4->fields)._GMPAEDFIIHF_k__BackingField,EBOHIPKPFDJ,(MethodInfo *)0x0);
  } while (!bVar2);
  iVar3 = IGFGDDANEPE__LGIMDOAMCNG((IGFGDDANEPE_o *)__this_01,(MethodInfo *)0x0);
LAB_0343f7d0:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_50,Method_System_Collections_Generic_List_Enumerator<ItemRule>_Dispose__);
  return iVar3;
}


// ===== public int CDAIDCGDMGL()  [RVA 0x333F888]
// FightList$$CDAIDCGDMGL @ RVA 0x333F888

int32_t FightList__CDAIDCGDMGL(FightList_o *__this,MethodInfo *method)

{
  return (__this->fields).GKCEBBGMBGA;
}


// ===== public void CDEMANBJMGK(long LFJGFLNMBMC)  [RVA 0x333F890]
// FightList$$CDEMANBJMGK @ RVA 0x333F890

void FightList__CDEMANBJMGK(FightList_o *__this,int64_t LFJGFLNMBMC,MethodInfo *method)

{
  PAMEPBLOLPB_o *__this_00;
  
  __this_00 = (__this->fields).JPBIBBBMCCD;
  if (__this_00 != (PAMEPBLOLPB_o *)0x0) {
    PAMEPBLOLPB__HHCDIDGFNHI(__this_00,LFJGFLNMBMC,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x333F8A4]
// FightList$$.ctor @ RVA 0x333F8A4

void FightList___ctor(FightList_o *__this,MethodInfo *method)

{
  DNELIPCHKLK_o *__this_00;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar1;
  System_Collections_Generic_List_IEJGMGHPING__o *__this_01;
  System_Collections_Generic_List_JBCGDIEHOHH__o *__this_02;
  System_Collections_Generic_List_JCHNBADDBGO__o *__this_03;
  System_Collections_Generic_List_AGCDKMOOJGI__o *__this_04;
  System_Collections_Generic_List_AJNNHGGLGIF__o *pSVar2;
  MethodInfo *extraout_x1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_b8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_80;
  
                    /* try { // try from 0343f8b8 to 0353f8df has its CatchHandler @ 0343f9ac */
                    /* try { // try from 0343f8fc to 0353f907 has its CatchHandler @ 0343f9a0 */
                    /* try { // try from 0343f908 to 0353f983 has its CatchHandler @ 0343f728 */
  if ((DAT_0456798a & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ItemRule>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RandomRule>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEJGMGHPING>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ItemRule>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<ModelParameters>_TypeInfo);
                    /* try { // try from 0343f984 to 0353f987 has its CatchHandler @ 0343f9a8 */
                    /* try { // try from 0343f988 to 0353f98b has its CatchHandler @ 0343f9a4 */
                    /* try { // try from 0343f98c to 0353f98f has its CatchHandler @ 0343f728 */
    FUN_01bab630(&System_Collections_Generic_List<Rule>_TypeInfo);
                    /* try { // try from 0343f990 to 0353f993 has its CatchHandler @ 0343f99c */
                    /* try { // try from 0343f994 to 0353f9bf has its CatchHandler @ 0343f728 */
    FUN_01bab630(&System_Collections_Generic_List<RandomRule>_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0343f990 with catch @ 0343f99c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0343f8fc with catch @ 0343f9a0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0343f988 with catch @ 0343f9a4
                        */
    FUN_01bab630(&System_Collections_Generic_List<JBCGDIEHOHH>_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0343f984 with catch @ 0343f9a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0343f8b8 with catch @ 0343f9ac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0343f85c with catch @ 0343f9b0
                        */
    FUN_01bab630(&System_Collections_Generic_List<IEJGMGHPING>_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 0343f9c0 to 0353f9c3 has its CatchHandler @ 0343f9d4 */
    DAT_0456798a = 1;
    method = extraout_x1;
  }
  __this_00 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo,method);
                    /* catch() { ... } // from try @ 0343f9c0 with catch @ 0343f9d4 */
  DNELIPCHKLK___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).KOILJHHCIEE = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  (__this->fields).BJMHBMDFFPA = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).LAFKEHDGGND = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
                    /* try { // try from 0343fa0c to 0353fa33 has its CatchHandler @ 0343fa48 */
  (__this->fields).JIJLBFGKNJK = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).HLFBMBHOPMI = -1;
  (__this->fields).MHOGPFEMHHF = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
                    /* try { // try from 0343fa34 to 0353fa3f has its CatchHandler @ 0343f728 */
                    /* try { // try from 0343fa40 to 0353fa47 has its CatchHandler @ 0343fa48 */
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_a0,0.0,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0343fa0c with catch @ 0343fa48
                       catch(type#2 @ 00000000) { ... } // from try @ 0343fa40 with catch @ 0343fa48
                        */
  local_80.fakeValueActive = local_a0.fakeValueActive;
  local_80.inited = local_a0.inited;
  local_80._18_2_ = local_a0._18_2_;
  local_80.hiddenValueOldByte4.fields = local_a0.hiddenValueOldByte4.fields;
  local_80.fakeValue = local_a0.fakeValue;
  local_80.currentCryptoKey = local_a0.currentCryptoKey;
  local_80.hiddenValue = local_a0.hiddenValue;
  (__this->fields).GNPJCLKAPIA.fields.fakeValueActive = local_a0.fakeValueActive;
  (__this->fields).GNPJCLKAPIA.fields.inited = local_a0.inited;
  *(undefined2 *)&(__this->fields).GNPJCLKAPIA.fields.field_0x12 = local_a0._18_2_;
  (__this->fields).GNPJCLKAPIA.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_a0.hiddenValueOldByte4.fields;
  (__this->fields).GNPJCLKAPIA.fields.fakeValue = local_a0.fakeValue;
  (__this->fields).GNPJCLKAPIA.fields.currentCryptoKey = local_a0.currentCryptoKey;
  (__this->fields).GNPJCLKAPIA.fields.hiddenValue = local_a0.hiddenValue;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_b8,0.0,(MethodInfo *)0x0);
  local_a0.fakeValueActive = local_b8.fakeValueActive;
  local_a0.inited = local_b8.inited;
  local_a0._18_2_ = local_b8._18_2_;
  local_a0.hiddenValueOldByte4.fields = local_b8.hiddenValueOldByte4.fields;
  local_a0.fakeValue = local_b8.fakeValue;
  local_a0.currentCryptoKey = local_b8.currentCryptoKey;
  local_a0.hiddenValue = local_b8.hiddenValue;
  (__this->fields).NLHBNEAKOHE.fields.fakeValueActive = local_b8.fakeValueActive;
  (__this->fields).NLHBNEAKOHE.fields.inited = local_b8.inited;
  *(undefined2 *)&(__this->fields).NLHBNEAKOHE.fields.field_0x12 = local_b8._18_2_;
  (__this->fields).NLHBNEAKOHE.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_b8.hiddenValueOldByte4.fields;
  (__this->fields).NLHBNEAKOHE.fields.fakeValue = local_b8.fakeValue;
  (__this->fields).NLHBNEAKOHE.fields.currentCryptoKey = local_b8.currentCryptoKey;
  (__this->fields).NLHBNEAKOHE.fields.hiddenValue = local_b8.hiddenValue;
  (__this->fields).GLDHKALMIBD = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(&(__this->fields).GLDHKALMIBD);
  pSVar1 = (System_Collections_Generic_List_PJKHAJKEHEL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ModelParameters>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ModelParameters>__ctor__);
  (__this->fields).NNHINPLPDHJ = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).NNHINPLPDHJ,pSVar1);
  pSVar1 = (System_Collections_Generic_List_PJKHAJKEHEL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ModelParameters>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ModelParameters>__ctor__);
  (__this->fields).MECHOBPGHFJ = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).MECHOBPGHFJ,pSVar1);
  __this_01 = (System_Collections_Generic_List_IEJGMGHPING__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IEJGMGHPING>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IEJGMGHPING>__ctor__);
  (__this->fields).KPFGHBEKJIM = __this_01;
  thunk_FUN_01c20e04(&(__this->fields).KPFGHBEKJIM,__this_01);
  __this_02 = (System_Collections_Generic_List_JBCGDIEHOHH__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JBCGDIEHOHH>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<JBCGDIEHOHH>__ctor__);
  (__this->fields).FGAENDJJOGN = __this_02;
  thunk_FUN_01c20e04(&(__this->fields).FGAENDJJOGN,__this_02);
  __this_03 = (System_Collections_Generic_List_JCHNBADDBGO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ItemRule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_03,
             Method_System_Collections_Generic_List<ItemRule>__ctor__);
  (__this->fields).MIHBDEKEPEB = __this_03;
  thunk_FUN_01c20e04(&(__this->fields).MIHBDEKEPEB,__this_03);
  __this_04 = (System_Collections_Generic_List_AGCDKMOOJGI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<RandomRule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_04,
             Method_System_Collections_Generic_List<RandomRule>__ctor__);
  (__this->fields).HFDOEONIBFA = __this_04;
  thunk_FUN_01c20e04(&(__this->fields).HFDOEONIBFA,__this_04);
  pSVar2 = (System_Collections_Generic_List_AJNNHGGLGIF__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<Rule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar2,
             Method_System_Collections_Generic_List<Rule>__ctor__);
  (__this->fields).LJNCACBBIBD = pSVar2;
  thunk_FUN_01c20e04(&(__this->fields).LJNCACBBIBD,pSVar2);
  pSVar2 = (System_Collections_Generic_List_AJNNHGGLGIF__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<Rule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar2,
             Method_System_Collections_Generic_List<Rule>__ctor__);
  (__this->fields).KFHLHCHCMPM = pSVar2;
  thunk_FUN_01c20e04(&(__this->fields).KFHLHCHCMPM,pSVar2);
  pSVar2 = (System_Collections_Generic_List_AJNNHGGLGIF__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<Rule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar2,
             Method_System_Collections_Generic_List<Rule>__ctor__);
  (__this->fields).ILMPKOBNAIB = pSVar2;
  thunk_FUN_01c20e04(&(__this->fields).ILMPKOBNAIB,pSVar2);
  pSVar2 = (System_Collections_Generic_List_AJNNHGGLGIF__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<Rule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar2,
             Method_System_Collections_Generic_List<Rule>__ctor__);
  (__this->fields).FEODLOLDCKM = pSVar2;
  thunk_FUN_01c20e04(&(__this->fields).FEODLOLDCKM,pSVar2);
  pSVar1 = (System_Collections_Generic_List_PJKHAJKEHEL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ModelParameters>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ModelParameters>__ctor__);
  (__this->fields).LDDKNBHPPOK = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).LDDKNBHPPOK,pSVar1);
  (__this->fields).EJEIHIOJFON = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(&(__this->fields).EJEIHIOJFON);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool CAGKMGGOIOJ()  [RVA 0x333FC84]
// FightList$$CAGKMGGOIOJ @ RVA 0x333FC84

bool FightList__CAGKMGGOIOJ(FightList_o *__this,MethodInfo *method)

{
  bool bVar1;
  PAMEPBLOLPB_o *__this_00;
  
  __this_00 = (__this->fields).JPBIBBBMCCD;
  if (__this_00 != (PAMEPBLOLPB_o *)0x0) {
    bVar1 = PAMEPBLOLPB__CKGAMIHJOMC(__this_00,(__this->fields).PIKNKFHOMLP,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* try { // try from 0343fc9c to 0353fddb has its CatchHandler @ 0343fc9c
                       catch() { ... } // from try @ 0343fc9c with catch @ 0343fc9c
                       catch() { ... } // from try @ 0343fe38 with catch @ 0343fc9c
                       catch() { ... } // from try @ 0343fe74 with catch @ 0343fc9c
                       catch() { ... } // from try @ 0343feac with catch @ 0343fc9c
                       catch() { ... } // from try @ 0343fedc with catch @ 0343fc9c */
  return true;
}


// ===== public void HLPHKOBKPML(string CJNHFNHJHPE)  [RVA 0x333FCA4]
// FightList$$HLPHKOBKPML @ RVA 0x333FCA4

void FightList__HLPHKOBKPML(FightList_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).BJMHBMDFFPA = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public int FCKMLBIPLDK(string BJEEDJEKAMF)  [RVA 0x333FCAC]
// FightList$$FCKMLBIPLDK @ RVA 0x333FCAC

int32_t FightList__FCKMLBIPLDK
                  (FightList_o *__this,System_String_o *BJEEDJEKAMF,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar2;
  System_Func_TSource__bool__o *predicate;
  System_Func_NIAFDKHDBMA__int__o **ppSVar3;
  System_Func_NIAFDKHDBMA__int__o *selector;
  
  if ((DAT_0456798b & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Sum<NIAFDKHDBMA>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<NIAFDKHDBMA>__);
    FUN_01bab630(&System_Func<NIAFDKHDBMA,_bool>_TypeInfo);
    FUN_01bab630(&System_Func<NIAFDKHDBMA,_int>_TypeInfo);
    FUN_01bab630(&Method_AFFHKININGD_NPLCDIFDEGB_DBMNOOPHIGI__);
    FUN_01bab630(&FightList_NPLCDIFDEGB_TypeInfo);
    FUN_01bab630(&Method_AFFHKININGD_<>c_GBMHBCFCNEF__);
    FUN_01bab630(&FightList_<>c_TypeInfo);
    DAT_0456798b = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FightList_NPLCDIFDEGB_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)BJEEDJEKAMF;
    thunk_FUN_01c20e04(__this_00 + 1,BJEEDJEKAMF);
    pSVar2 = (System_Collections_Generic_IEnumerable_TSource__o *)
             (*(__this->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                       (__this,(__this->klass->vtable)._4_NIKCNPMKAFK.method);
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<NIAFDKHDBMA,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    pSVar2 = System_Linq_Enumerable__Where<object>
                       (pSVar2,predicate,Method_System_Linq_Enumerable_Where<NIAFDKHDBMA>__);
    if ((FightList_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0343fddc to 0353fde3 has its CatchHandler @ 0343fe8c */
      thunk_FUN_01ba7564(FightList_<>c_TypeInfo);
    }
                    /* try { // try from 0343fdf0 to 0353fdff has its CatchHandler @ 0343fe90 */
    selector = FightList_<>c_TypeInfo->static_fields->__9__64_1;
    if (selector == (System_Func_NIAFDKHDBMA__int__o *)0x0) {
      if ((FightList_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(FightList_<>c_TypeInfo);
                    /* try { // try from 0343fe0c to 0353fe13 has its CatchHandler @ 0343fe88 */
      }
      selector = (System_Func_NIAFDKHDBMA__int__o *)
                 thunk_FUN_01bda818(System_Func<NIAFDKHDBMA,_int>_TypeInfo);
                    /* try { // try from 0343fe2c to 0353fe37 has its CatchHandler @ 0343fe84 */
                    /* try { // try from 0343fe38 to 0353fe67 has its CatchHandler @ 0343fc9c */
      System_Func<object,_int>___ctor();
      ppSVar3 = &FightList_<>c_TypeInfo->static_fields->__9__64_1;
      *ppSVar3 = selector;
      thunk_FUN_01c20e04(ppSVar3,selector);
    }
                    /* try { // try from 0343fe68 to 0353fe6b has its CatchHandler @ 0343fe80 */
                    /* try { // try from 0343fe6c to 0353fe6f has its CatchHandler @ 0343fe7c */
                    /* try { // try from 0343fe70 to 0353fe73 has its CatchHandler @ 0343fe78 */
                    /* try { // try from 0343fe74 to 0353fea7 has its CatchHandler @ 0343fc9c */
    iVar1 = System_Linq_Enumerable__Sum<object>
                      (pSVar2,(System_Func_TSource__int__o *)selector,
                       Method_System_Linq_Enumerable_Sum<NIAFDKHDBMA>__);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0343fe70 with catch @ 0343fe78
                        */
  FUN_01bab8c8();
}


// ===== public void HKBKHKMMBFG(PAMEPBLOLPB CJNHFNHJHPE)  [RVA 0x333FE84]
// FightList$$HKBKHKMMBFG @ RVA 0x333FE84

void FightList__HKBKHKMMBFG(FightList_o *__this,PAMEPBLOLPB_o *CJNHFNHJHPE,MethodInfo *method)

{
  FightList_o **ppAVar1;
  PAMEPBLOLPB_o **ppPVar2;
  
  ppPVar2 = &(__this->fields).JPBIBBBMCCD;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0343fe2c with catch @ 0343fe84
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0343fe0c with catch @ 0343fe88
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0343fddc with catch @ 0343fe8c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0343fdf0 with catch @ 0343fe90
                        */
  *ppPVar2 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppPVar2);
  if (*ppPVar2 != (PAMEPBLOLPB_o *)0x0) {
    ppAVar1 = &((*ppPVar2)->fields).JFFPIOMOOPF;
                    /* try { // try from 0343fea8 to 0353feab has its CatchHandler @ 0343fecc */
    *ppAVar1 = __this;
                    /* try { // try from 0343feac to 0353fed3 has its CatchHandler @ 0343fc9c */
    thunk_FUN_01c20e04(ppAVar1,__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GMPJALMLLCG()  [RVA 0x333FEC0]
// FightList$$GMPJALMLLCG @ RVA 0x333FEC0

void FightList__GMPJALMLLCG(FightList_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
                    /* catch() { ... } // from try @ 0343fea8 with catch @ 0343fecc */
                    /* try { // try from 0343fed4 to 0353fedb has its CatchHandler @ 0343fef0 */
  if ((DAT_0456798c & 1) == 0) {
                    /* try { // try from 0343fedc to 0353fee7 has its CatchHandler @ 0343fc9c */
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>_Clear__);
                    /* try { // try from 0343fee8 to 0353feef has its CatchHandler @ 0343fef0 */
    DAT_0456798c = 1;
  }
  pSVar1 = (__this->fields).MECHOBPGHFJ;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0343fed4 with catch @ 0343fef0
                       catch(type#2 @ 00000000) { ... } // from try @ 0343fee8 with catch @ 0343fef0
                        */
  if (pSVar1 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
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


// ===== public float PINMGKELLJI(ModelParameters BCKBBGCOMJD, List<ModelParameters> DFGLEOANOFI)  [RVA 0x333FF30]
// FightList$$PINMGKELLJI @ RVA 0x333FF30

float FightList__PINMGKELLJI
                (FightList_o *__this,ModelParameters_o *BCKBBGCOMJD,
                System_Collections_Generic_List_PJKHAJKEHEL__o *DFGLEOANOFI,MethodInfo *method)

{
  int iVar1;
  ModelParameters_o *JALKELIHLPC;
  float fVar2;
  
  if ((DAT_0456798d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>_get_Item__);
    FUN_01bab630(&StringLiteral_18045/*"enemy less than 1"*/);
    DAT_0456798d = 1;
  }
  if (DFGLEOANOFI != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
    iVar1 = (DFGLEOANOFI->fields)._size;
    if (0 < iVar1) {
      JALKELIHLPC = (ModelParameters_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)DFGLEOANOFI,iVar1 + -1,
                               Method_System_Collections_Generic_List<ModelParameters>_get_Item__);
      fVar2 = FightList__JGNKKAPMJMB(__this,BCKBBGCOMJD,JALKELIHLPC,method);
      return fVar2;
    }
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_18045/*"enemy less than 1"*/,(MethodInfo *)0x0);
    return 0.0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LFCMDLKDGHG()  [RVA 0x3340804]
// FightList$$LFCMDLKDGHG @ RVA 0x3340804

void FightList__LFCMDLKDGHG(FightList_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  long lVar3;
  Nekki_SF2_GUI_Map_InfoBattle_o *__this_00;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034407d8 with catch @ 03440804
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0344075c with catch @ 03440808
                        */
                    /* try { // try from 03440818 to 0354081b has its CatchHandler @ 03440840 */
  if ((DAT_0456798e & 1) == 0) {
                    /* try { // try from 0344081c to 03540847 has its CatchHandler @ 03440680 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_0456798e = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 03440818 with catch @ 03440840 */
                    /* try { // try from 03440848 to 0354084f has its CatchHandler @ 03440864 */
                    /* try { // try from 03440850 to 0354085b has its CatchHandler @ 03440680 */
  if ((__this->fields).JDNKKGPNHPB == 0x14) {
    pSVar2 = FightList__IBMKPOJFGCD(__this,method);
  }
  else {
                    /* try { // try from 0344085c to 03540863 has its CatchHandler @ 03440864 */
    pSVar2 = FightList__OKMNIODKDBA(__this,method);
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03440848 with catch @ 03440864
                       catch(type#2 @ 00000000) { ... } // from try @ 0344085c with catch @ 03440864
                        */
                    /* try { // try from 03440868 to 0354099f has its CatchHandler @ 03440868
                       catch() { ... } // from try @ 03440868 with catch @ 03440868
                       catch() { ... } // from try @ 034409fc with catch @ 03440868
                       catch() { ... } // from try @ 03440a8c with catch @ 03440868
                       catch() { ... } // from try @ 03440a94 with catch @ 03440868
                       catch() { ... } // from try @ 03440ad0 with catch @ 03440868
                       catch() { ... } // from try @ 03440b18 with catch @ 03440868 */
  (__this->fields).IGIFBFEFIKG = pSVar2;
  thunk_FUN_01c20e04(&(__this->fields).IGIFBFEFIKG);
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    if ((**(long **)(lVar3 + 0xb8) != 0) &&
       (__this_00 = *(Nekki_SF2_GUI_Map_InfoBattle_o **)(**(long **)(lVar3 + 0xb8) + 0xd0),
       __this_00 != (Nekki_SF2_GUI_Map_InfoBattle_o *)0x0)) {
      Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfoIfSelected
                (__this_00,(__this->fields).IFJLLGPGMHM,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public COALAGILPBO NHGGBEACKBD()  [RVA 0x3340CE0]
// FightList$$NHGGBEACKBD @ RVA 0x3340CE0

int32_t FightList__NHGGBEACKBD(FightList_o *__this,MethodInfo *method)

{
  return (__this->fields).JDNKKGPNHPB;
}


// ===== public float JGNKKAPMJMB(ModelParameters BCKBBGCOMJD, ModelParameters JALKELIHLPC)  [RVA 0x3340010]
// FightList$$JGNKKAPMJMB @ RVA 0x3340010

float FightList__JGNKKAPMJMB
                (FightList_o *__this,ModelParameters_o *BCKBBGCOMJD,ModelParameters_o *JALKELIHLPC,
                MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  GameUtils_c *pMVar4;
  long lVar5;
  Il2CppObject *item;
  int iVar6;
  bool bVar7;
  int32_t iVar8;
  CALLBECPAIA_o *pCVar9;
  KKEKJDLEJIL_o *__this_00;
  KKEKJDLEJIL_o *__this_01;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *ELKJHGBCEKJ;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *ELKJHGBCEKJ_00;
  ModelParameters_o *pPVar10;
  ModelParameters_o *__this_02;
  FPLCEOJCPOD_o *pFVar11;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_03;
  System_Collections_Generic_List_object__o *__this_04;
  AKADDLNNLKH_o *__this_05;
  ModelParameters_o *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Object_array *pSVar12;
  Roster_o *pAVar13;
  GameUtils_StaticFields *pMVar14;
  Rule_o *KGLJICLJHEL;
  System_String_o *PMACBPAMPJA;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_110;
  System_Collections_Generic_List_Enumerator_T__o local_f8;
  System_Collections_Generic_List_Enumerator_T__o local_e0;
  System_Collections_Generic_List_Enumerator_T__o local_c0;
  int local_a8 [2];
  
                    /* try { // try from 03440024 to 0354015f has its CatchHandler @ 03440024
                       catch() { ... } // from try @ 03440024 with catch @ 03440024
                       catch() { ... } // from try @ 0344020c with catch @ 03440024
                       catch() { ... } // from try @ 03440294 with catch @ 03440024
                       catch() { ... } // from try @ 0344029c with catch @ 03440024
                       catch() { ... } // from try @ 0344033c with catch @ 03440024 */
  pPVar10 = BCKBBGCOMJD;
  if ((DAT_0456798f & 1) == 0) {
    FUN_01bab630(&InFightRule_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_get_Current__);
    FUN_01bab630(&KKEKJDLEJIL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InFightRule>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InFightRule>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<InFightRule>_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&ResistanceRule_TypeInfo);
    DAT_0456798f = 1;
    pPVar10 = extraout_x1;
  }
  local_c0.fields._current = (Il2CppObject *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_c0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c0.fields._index = 0;
  local_c0.fields._version = 0;
  local_e0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_e0.fields._index = 0;
  local_e0.fields._version = 0;
  local_e0.fields._current = (Il2CppObject *)0x0;
  pCVar9 = FightList__KBJBDOJKGML(__this,(MethodInfo *)pPVar10);
  if (pCVar9 == (CALLBECPAIA_o *)0x0) {
    fVar20 = 0.0;
    fVar19 = 0.0;
    fVar18 = 0.0;
  }
  else {
    fVar18 = (pCVar9->fields).JOBMIFFFCLB;
    fVar19 = (pCVar9->fields).PCFDLFAJOLE;
    fVar20 = (pCVar9->fields).PMAJGIMDOEA;
  }
  __this_00 = (KKEKJDLEJIL_o *)thunk_FUN_01bda818(KKEKJDLEJIL_TypeInfo);
                    /* try { // try from 03440160 to 03540187 has its CatchHandler @ 034402b8 */
  KKEKJDLEJIL___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (KKEKJDLEJIL_o *)thunk_FUN_01bda818(KKEKJDLEJIL_TypeInfo);
  KKEKJDLEJIL___ctor(__this_01,(MethodInfo *)0x0);
  if ((BCKBBGCOMJD != (ModelParameters_o *)0x0) &&
     ((*(BCKBBGCOMJD->klass->vtable)._8_KMKKECDCBEF.methodPtr)
                (BCKBBGCOMJD,__this_00,(BCKBBGCOMJD->klass->vtable)._8_KMKKECDCBEF.method),
     JALKELIHLPC != (ModelParameters_o *)0x0)) {
    method_01 = (JALKELIHLPC->klass->vtable)._8_KMKKECDCBEF.method;
    (*(JALKELIHLPC->klass->vtable)._8_KMKKECDCBEF.methodPtr)(JALKELIHLPC,__this_01);
    FightList__ENFLLPECJHG(__this,BCKBBGCOMJD,method_01);
                    /* try { // try from 034401bc to 035401e3 has its CatchHandler @ 034402b4 */
    FightList__ENFLLPECJHG(__this,JALKELIHLPC,method_01);
    ELKJHGBCEKJ = FightList__OPALEBBOFPM(__this,1,method_01);
    ELKJHGBCEKJ_00 = FightList__OPALEBBOFPM(__this,2,method_01);
    if (fVar18 == 0.0) {
      fVar18 = (JALKELIHLPC->fields).MGJLOFGAPOM;
    }
    if (fVar18 < 0.0) {
                    /* try { // try from 03440200 to 0354020b has its CatchHandler @ 034402a8 */
                    /* try { // try from 0344020c to 0354028b has its CatchHandler @ 03440024 */
      fVar18 = ModelParameters__JGDFHHBBFLA(BCKBBGCOMJD,JALKELIHLPC,ELKJHGBCEKJ,(MethodInfo *)0x0);
    }
    if (fVar19 == 0.0) {
      fVar19 = (JALKELIHLPC->fields).FPMOPBGHILF;
    }
    if (fVar19 < 0.0) {
      fVar19 = ModelParameters__JGDFHHBBFLA(JALKELIHLPC,BCKBBGCOMJD,ELKJHGBCEKJ_00,(MethodInfo *)0x0);
    }
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar15 = GameUtils__BMKFLPFJODG((MethodInfo *)0x0);
    if (DAT_045679c8 == '\0') {
      FUN_01bab630(&GameUtils_TypeInfo);
      DAT_045679c8 = '\x01';
    }
                    /* try { // try from 0344028c to 0354028f has its CatchHandler @ 034402b0 */
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03440290 to 03540293 has its CatchHandler @ 034402ac */
      thunk_FUN_01ba7564();
                    /* try { // try from 03440294 to 03540297 has its CatchHandler @ 03440024 */
    }
                    /* try { // try from 03440298 to 0354029b has its CatchHandler @ 034402a4 */
                    /* try { // try from 0344029c to 035402c7 has its CatchHandler @ 03440024 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03440298 with catch @ 034402a4
                        */
    PMACBPAMPJA = GameUtils_TypeInfo->static_fields->GPECMIFNCLI;
    local_a8[0] = 0;
    local_a8[1] = 0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03440200 with catch @ 034402a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03440290 with catch @ 034402ac
                        */
    pPVar10 = ModelParameters__FAOBHLCDKJI(JALKELIHLPC,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0344028c with catch @ 034402b0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034401bc with catch @ 034402b4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03440160 with catch @ 034402b8
                        */
    __this_02 = ModelParameters__FAOBHLCDKJI(BCKBBGCOMJD,(MethodInfo *)0x0);
                    /* try { // try from 034402c8 to 035402cb has its CatchHandler @ 034402dc */
    if ((pPVar10 != (ModelParameters_o *)0x0) &&
       (ModelParameters__BDGGJMCLFCF(pPVar10,ELKJHGBCEKJ_00,(MethodInfo *)0x0),
       __this_02 != (ModelParameters_o *)0x0)) {
                    /* catch() { ... } // from try @ 034402c8 with catch @ 034402dc */
      ModelParameters__BDGGJMCLFCF(__this_02,ELKJHGBCEKJ,(MethodInfo *)0x0);
      pFVar11 = (pPVar10->fields).ACHJNNOKEDK;
      if (pFVar11 != (FPLCEOJCPOD_o *)0x0) {
        FPLCEOJCPOD__KNMENIBLFGF(pFVar11,PMACBPAMPJA,local_a8 + 1,true,false,(MethodInfo *)0x0);
        pFVar11 = (__this_02->fields).ACHJNNOKEDK;
        if (pFVar11 != (FPLCEOJCPOD_o *)0x0) {
                    /* try { // try from 03440314 to 0354033b has its CatchHandler @ 03440350 */
                    /* try { // try from 0344033c to 03540347 has its CatchHandler @ 03440024 */
          FPLCEOJCPOD__KNMENIBLFGF(pFVar11,PMACBPAMPJA,local_a8,true,false,(MethodInfo *)0x0);
          __this_03 = FightList__HKNMJCKPHHC(__this,method_00);
                    /* try { // try from 03440348 to 0354034f has its CatchHandler @ 03440350 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03440314 with catch @ 03440350
                       catch(type#2 @ 00000000) { ... } // from try @ 03440348 with catch @ 03440350
                        */
          __this_04 = (System_Collections_Generic_List_object__o *)
                      thunk_FUN_01bda818(System_Collections_Generic_List<InFightRule>_TypeInfo);
          System_Collections_Generic_List<object>___ctor
                    (__this_04,Method_System_Collections_Generic_List<InFightRule>__ctor__);
          if (__this_03 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* try { // try from 0344039c to 035404bb has its CatchHandler @ 0344039c
                       catch() { ... } // from try @ 0344039c with catch @ 0344039c
                       catch() { ... } // from try @ 0344054c with catch @ 0344039c
                       catch() { ... } // from try @ 034405d0 with catch @ 0344039c
                       catch() { ... } // from try @ 03440668 with catch @ 0344039c */
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_f8,(System_Collections_Generic_List_object__o *)__this_03,
                       Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
            local_c0.fields._index = local_f8.fields._index;
            local_c0.fields._version = local_f8.fields._version;
            local_c0.fields._list = local_f8.fields._list;
            local_c0.fields._current = local_f8.fields._current;
            while (bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (&local_c0,
                                      Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__
                                     ), item = local_c0.fields._current, bVar7) {
              if ((Rule_o *)local_c0.fields._current == (Rule_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              iVar8 = Rule__NHGGBEACKBD
                                ((Rule_o *)local_c0.fields._current,(MethodInfo *)0x0);
              lVar5 = Method_System_Collections_Generic_List<InFightRule>_Add__;
              if (iVar8 == 0x24) {
                bVar2 = (InFightRule_TypeInfo->_2).naturalAligment;
                if ((bVar2 <= (((Rule_c *)item->klass)->_2).naturalAligment) &&
                   ((((Rule_c *)item->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                    (Il2CppClass *)InFightRule_TypeInfo)) {
                  if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar12 = (__this_04->fields)._items;
                  (__this_04->fields)._version = (__this_04->fields)._version + 1;
                  if (pSVar12 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  uVar3 = (__this_04->fields)._size;
                  if (uVar3 < (uint)pSVar12->max_length) {
                    (__this_04->fields)._size = uVar3 + 1;
                    pSVar12->m_Items[(int)uVar3] = item;
                    thunk_FUN_01c20e04(pSVar12->m_Items + (int)uVar3,item);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              (__this_04,item,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                  }
                }
              }
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_c0,
                       Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
            if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_f8,__this_04,
                         Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
              fVar21 = 1.0;
              local_e0.fields._index = local_f8.fields._index;
              local_e0.fields._version = local_f8.fields._version;
                    /* try { // try from 034404bc to 035404e3 has its CatchHandler @ 034405e4 */
              local_e0.fields._list = local_f8.fields._list;
              local_e0.fields._current = local_f8.fields._current;
              fVar22 = 1.0;
              while( true ) {
                do {
                  do {
                    bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                      (&local_e0,
                                       Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__
                                      );
                    if (!bVar7) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03440544 with catch @ 034405dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03440518 with catch @ 034405e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034404bc with catch @ 034405e4
                        */
                      System_Collections_Generic_List_Enumerator<object>__Dispose
                                (&local_e0,
                                 Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__
                                );
                    /* try { // try from 034405f4 to 035405f7 has its CatchHandler @ 03440608 */
                      iVar1 = local_a8[0];
                      iVar6 = local_a8[1];
                      iVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                         (JALKELIHLPC->fields).ODLNOMOMJMO.fields,(MethodInfo *)0x0)
                      ;
                    /* catch() { ... } // from try @ 034405f4 with catch @ 03440608 */
                      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564(GameUtils_TypeInfo);
                      }
                      pMVar4 = GameUtils_TypeInfo;
                      fVar15 = exp2f(fVar15 * (float)(iVar6 - iVar1));
                    /* try { // try from 03440640 to 03540667 has its CatchHandler @ 0344067c */
                      pMVar14 = pMVar4->static_fields;
                      local_110.fakeValueActive = (pMVar14->EEBCCADECEJ).fields.fakeValueActive;
                      local_110.inited = (pMVar14->EEBCCADECEJ).fields.inited;
                      local_110._18_2_ = *(undefined2 *)&(pMVar14->EEBCCADECEJ).fields.field_0x12;
                      local_110.hiddenValueOldByte4.fields =
                           (pMVar14->EEBCCADECEJ).fields.hiddenValueOldByte4.fields;
                      local_110.fakeValue = (pMVar14->EEBCCADECEJ).fields.fakeValue;
                      local_110.currentCryptoKey = (pMVar14->EEBCCADECEJ).fields.currentCryptoKey;
                      local_110.hiddenValue = (pMVar14->EEBCCADECEJ).fields.hiddenValue;
                      fVar16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                         ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)
                                          &local_110,(MethodInfo *)0x0);
                    /* try { // try from 03440668 to 03540673 has its CatchHandler @ 0344039c */
                      fVar20 = exp2f((fVar20 + (float)iVar8 + fVar20 + (float)iVar8) / fVar16);
                    /* try { // try from 03440674 to 0354067b has its CatchHandler @ 0344067c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03440640 with catch @ 0344067c
                       catch(type#2 @ 00000000) { ... } // from try @ 03440674 with catch @ 0344067c
                        */
                    /* try { // try from 03440680 to 0354075b has its CatchHandler @ 03440680
                       catch() { ... } // from try @ 03440680 with catch @ 03440680
                       catch() { ... } // from try @ 03440798 with catch @ 03440680
                       catch() { ... } // from try @ 034407ec with catch @ 03440680
                       catch() { ... } // from try @ 0344081c with catch @ 03440680
                       catch() { ... } // from try @ 03440850 with catch @ 03440680 */
                      (*(BCKBBGCOMJD->klass->vtable)._6_BCEGONIKBAK.methodPtr)
                                (BCKBBGCOMJD,__this_00,
                                 (BCKBBGCOMJD->klass->vtable)._6_BCEGONIKBAK.method);
                      (*(JALKELIHLPC->klass->vtable)._6_BCEGONIKBAK.methodPtr)
                                (JALKELIHLPC,__this_01,
                                 (JALKELIHLPC->klass->vtable)._6_BCEGONIKBAK.method);
                      return ((fVar21 * (fVar19 / fVar18) * fVar15) / fVar22) * fVar20;
                    }
                  } while ((Rule_o *)local_e0.fields._current == (Rule_o *)0x0);
                  bVar2 = (ResistanceRule_TypeInfo->_2).naturalAligment;
                } while (((((Rule_c *)(local_e0.fields._current)->klass)->_2).naturalAligment
                          < bVar2) ||
                        ((((Rule_c *)(local_e0.fields._current)->klass)->_2).typeHierarchy
                         [(ulong)bVar2 - 1] != (Il2CppClass *)ResistanceRule_TypeInfo));
                    /* try { // try from 03440518 to 03540543 has its CatchHandler @ 034405e0 */
                KGLJICLJHEL = (((Rule_o *)((long)local_e0.fields._current + 0x58))->fields).
                              LKKBHIEHNAM;
                iVar1 = *(int *)&(((Rule_o *)((long)local_e0.fields._current + 0x58))->fields
                                 ).HIJMBHIMFBB;
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                if (DAT_04565b7d == '\0') {
                  FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                  DAT_04565b7d = '\x01';
                }
                    /* try { // try from 03440544 to 0354054b has its CatchHandler @ 034405dc */
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0344054c to 035405cb has its CatchHandler @ 0344039c */
                  thunk_FUN_01ba7564();
                }
                pAVar13 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                if (pAVar13 == (Roster_o *)0x0) break;
                __this_05 = (pAVar13->fields).MLNLNNNNPGH;
                if (__this_05 == (AKADDLNNLKH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                iVar8 = AKADDLNNLKH__CBGJMMDIFGA
                                  (__this_05,(System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
                if (iVar8 < iVar1) {
                  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  fVar16 = GameUtils__NEOLDJIJDFP((MethodInfo *)0x0);
                  fVar17 = GameUtils__NEOLDJIJDFP((MethodInfo *)0x0);
                  fVar16 = exp2f((float)(iVar1 - iVar8) / fVar16);
                    /* try { // try from 034405cc to 035405cf has its CatchHandler @ 034405d8 */
                  fVar17 = exp2f((float)(iVar8 - iVar1) / fVar17);
                    /* try { // try from 034405d0 to 035405f3 has its CatchHandler @ 0344039c */
                  fVar21 = fVar21 * fVar16;
                  fVar22 = fVar22 * fVar17;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034405cc with catch @ 034405d8
                        */
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private List<MGNDHCBAPEN<string, float>> OPALEBBOFPM(HEDFKJBDBFN KFLAAIMLKOE)  [RVA 0x333F0B0]
// FightList$$OPALEBBOFPM @ RVA 0x333F0B0

/* WARNING: Removing unreachable block (ram,0x0343f4b8) */

System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *
FightList__OPALEBBOFPM(FightList_o *__this,int32_t KFLAAIMLKOE,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *NANHIJPKIAP;
  undefined8 uVar4;
  undefined8 uVar5;
  Il2CppObject *pIVar6;
  bool bVar7;
  int32_t iVar8;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *__this_00;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_01;
  Rule_o *__this_02;
  MGNDHCBAPEN_string__float__o *pMVar9;
  MethodInfo *method_00;
  MGNDHCBAPEN_string__float__array *pMVar10;
  float fVar11;
  Il2CppObject *local_160 [4];
  Il2CppObject *local_140 [3];
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_128;
  undefined8 uStack_100;
  undefined8 local_f8;
  Il2CppObject *local_f0;
  uint8_t uStack_e8;
  uint8_t uStack_e7;
  uint8_t uStack_e6;
  uint8_t uStack_e5;
  float fStack_e4;
  bool_conflict local_e0;
  bool_conflict bStack_df;
  undefined2 uStack_de;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_d0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  
  if ((DAT_04567990 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_Dispose__
                );
                    /* try { // try from 0343f118 to 0353f24b has its CatchHandler @ 0343f118
                       catch() { ... } // from try @ 0343f118 with catch @ 0343f118
                       catch() { ... } // from try @ 0343f320 with catch @ 0343f118
                       catch() { ... } // from try @ 0343f3ac with catch @ 0343f118
                       catch() { ... } // from try @ 0343f3b4 with catch @ 0343f118
                       catch() { ... } // from try @ 0343f468 with catch @ 0343f118 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_MoveNext__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_get_Current__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_get_Current__
                );
    FUN_01bab630(&AttributesRule_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredFloat>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredFloat>_get_Value__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_TypeInfo);
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_float>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_float>_TypeInfo);
    FUN_01bab630(&StringLiteral_5266/*"Defense"*/);
    DAT_04567990 = 1;
  }
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  local_a0 = 0;
  local_d0.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d0.fields._current.fields.key = (Il2CppObject *)0x0;
  uStack_a8 = 0;
  local_d0.fields._getEnumeratorRetType._0_1_ = 0;
  local_d0.fields._getEnumeratorRetType._1_1_ = 0;
  local_d0.fields._getEnumeratorRetType._2_1_ = 0;
  local_d0.fields._getEnumeratorRetType._3_1_ = 0;
  local_d0.fields._36_4_ = 0.0;
  local_d0.fields._version = 0;
  local_d0.fields._index = 0;
  local_d0.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  __this_00 = (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>__ctor__);
  __this_01 = FightList__HKNMJCKPHHC(__this,method_00);
  if (__this_01 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&local_128,
             (System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
  local_90.fields._index = local_128.fields._version;
  local_90.fields._version = local_128.fields._index;
                    /* try { // try from 0343f24c to 0353f273 has its CatchHandler @ 0343f3e0 */
  local_90.fields._list = (System_Collections_Generic_List_T__o *)local_128.fields._dictionary;
  local_90.fields._current = local_128.fields._current.fields.key;
  do {
    do {
      bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
      pIVar6 = local_90.fields._current;
      if (!bVar7) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_90,
                   Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
        return __this_00;
      }
      if ((Rule_o *)local_90.fields._current == (Rule_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar8 = Rule__NHGGBEACKBD((Rule_o *)local_90.fields._current,(MethodInfo *)0x0);
    } while (iVar8 != 10);
    bVar1 = (AttributesRule_TypeInfo->_2).naturalAligment;
                    /* try { // try from 0343f2a8 to 0353f2cf has its CatchHandler @ 0343f3dc */
    if (((((Rule_c *)pIVar6->klass)->_2).naturalAligment < bVar1) ||
       ((((Rule_c *)pIVar6->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)AttributesRule_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pIVar6);
    }
    __this_02 = (((Rule_o *)((long)pIVar6 + 0x58))->fields).LKKBHIEHNAM;
    if (__this_02 == (Rule_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_Dictionary<object,_ObscuredFloat>__GetEnumerator
              (&local_128,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
               Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_GetEnumerator__);
    local_d0.fields._version = local_128.fields._version;
    local_d0.fields._index = local_128.fields._index;
                    /* try { // try from 0343f2e8 to 0353f2f3 has its CatchHandler @ 0343f3d4 */
    local_d0.fields._dictionary = local_128.fields._dictionary;
    local_d0.fields._current.fields.value = local_128.fields._current.fields.value;
    local_d0.fields._current.fields.key = local_128.fields._current.fields.key;
    uStack_a8 = uStack_100;
    local_d0.fields._getEnumeratorRetType = local_128.fields._getEnumeratorRetType;
    local_d0.fields._36_4_ = local_128.fields._36_4_;
    local_a0 = local_f8;
    while (bVar7 = System_Collections_Generic_Dictionary_Enumerator<object,_ObscuredFloat>__MoveNext
                             (&local_d0,
                              Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_MoveNext__
                             ), uVar5 = uStack_a8, uVar4 = local_d0.fields._32_8_,
          NANHIJPKIAP = local_d0.fields._current.fields.key, bVar7) {
                    /* try { // try from 0343f304 to 0353f30f has its CatchHandler @ 0343f3c0 */
      uStack_e8 = (undefined1)local_d0.fields._getEnumeratorRetType;
      uStack_e7 = local_d0.fields._getEnumeratorRetType._1_1_;
      uStack_e6 = local_d0.fields._getEnumeratorRetType._2_1_;
      uStack_e5 = local_d0.fields._getEnumeratorRetType._3_1_;
      fStack_e4 = (float)local_d0.fields._36_4_;
      local_f0 = local_d0.fields._current.fields.value;
                    /* try { // try from 0343f314 to 0353f31f has its CatchHandler @ 0343f3c8 */
      local_e0 = uStack_a8._0_1_;
      bStack_df = uStack_a8._1_1_;
      uStack_de = uStack_a8._2_2_;
      local_d0.fields._32_8_ = uVar4;
      uStack_a8 = uVar5;
                    /* try { // try from 0343f320 to 0353f39b has its CatchHandler @ 0343f118 */
      if ((*(int *)&((Rule_o *)((long)pIVar6 + 0x58))->klass == KFLAAIMLKOE) ||
         (*(int *)&((Rule_o *)((long)pIVar6 + 0x58))->klass == 3)) {
                    /* catch() { ... } // from try @ 0343f314 with catch @ 0343f3c8 */
        if ((Rule_o *)local_d0.fields._current.fields.key == (Rule_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* catch() { ... } // from try @ 0343f3a4 with catch @ 0343f3cc */
                    /* catch() { ... } // from try @ 0343f3a0 with catch @ 0343f3d0 */
                    /* catch() { ... } // from try @ 0343f2e8 with catch @ 0343f3d4 */
                    /* catch() { ... } // from try @ 0343f39c with catch @ 0343f3d8 */
        bVar7 = System_String__Contains
                          ((System_String_o *)local_d0.fields._current.fields.key,StringLiteral_5266/*"Defense"*/
                           ,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0343f2a8 with catch @ 0343f3dc */
        if (!bVar7) {
                    /* catch() { ... } // from try @ 0343f24c with catch @ 0343f3e0 */
          local_140[1] = (Il2CppObject *)_uStack_e8;
          local_140[0] = local_f0;
          local_140[2]._0_1_ = local_e0;
          local_140[2]._1_1_ = bStack_df;
          local_140[2]._2_2_ = uStack_de;
                    /* try { // try from 0343f3f8 to 0353f3fb has its CatchHandler @ 0343f408 */
          fVar11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                             ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_140,
                              (MethodInfo *)0x0);
          pMVar9 = (MGNDHCBAPEN_string__float__o *)
                   thunk_FUN_01bda818(MGNDHCBAPEN<string,_float>_TypeInfo);
                    /* catch() { ... } // from try @ 0343f3f8 with catch @ 0343f408 */
          MGNDHCBAPEN<object,_float>___ctor
                    ((MGNDHCBAPEN_T1__T2__o *)pMVar9,NANHIJPKIAP,fVar11,
                     Method_MGNDHCBAPEN<string,_float>__ctor__);
          lVar3 = Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_Add__;
          if (__this_00 == (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar10 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pMVar10 == (MGNDHCBAPEN_string__float__array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (__this_00->fields)._size;
                    /* try { // try from 0343f440 to 0353f467 has its CatchHandler @ 0343f47c */
          if (uVar2 < (uint)pMVar10->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pMVar10->m_Items[(int)uVar2] = pMVar9;
            thunk_FUN_01c20e04(pMVar10->m_Items + (int)uVar2,pMVar9);
          }
          else {
                    /* try { // try from 0343f468 to 0353f473 has its CatchHandler @ 0343f118 */
                    /* try { // try from 0343f474 to 0353f47b has its CatchHandler @ 0343f47c */
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pMVar9
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                    /* catch() { ... } // from try @ 0343f440 with catch @ 0343f47c
                       catch() { ... } // from try @ 0343f474 with catch @ 0343f47c */
          }
        }
      }
      else {
        if ((Rule_o *)local_d0.fields._current.fields.key == (Rule_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar7 = System_String__Contains
                          ((System_String_o *)local_d0.fields._current.fields.key,StringLiteral_5266/*"Defense"*/
                           ,(MethodInfo *)0x0);
        if (bVar7) {
          local_160[1] = (Il2CppObject *)_uStack_e8;
          local_160[0] = local_f0;
          local_160[2]._0_1_ = local_e0;
          local_160[2]._1_1_ = bStack_df;
          local_160[2]._2_2_ = uStack_de;
          fVar11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                             ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_160,
                              (MethodInfo *)0x0);
          pMVar9 = (MGNDHCBAPEN_string__float__o *)
                   thunk_FUN_01bda818(MGNDHCBAPEN<string,_float>_TypeInfo);
          MGNDHCBAPEN<object,_float>___ctor
                    ((MGNDHCBAPEN_T1__T2__o *)pMVar9,NANHIJPKIAP,fVar11,
                     Method_MGNDHCBAPEN<string,_float>__ctor__);
          lVar3 = Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_Add__;
          if (__this_00 == (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar10 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pMVar10 == (MGNDHCBAPEN_string__float__array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 0343f39c to 0353f39f has its CatchHandler @ 0343f3d8 */
          uVar2 = (__this_00->fields)._size;
                    /* try { // try from 0343f3a0 to 0353f3a3 has its CatchHandler @ 0343f3d0 */
                    /* try { // try from 0343f3a4 to 0353f3a7 has its CatchHandler @ 0343f3cc */
                    /* try { // try from 0343f3a8 to 0353f3ab has its CatchHandler @ 0343f3c4 */
          if (uVar2 < (uint)pMVar10->max_length) {
                    /* try { // try from 0343f3ac to 0353f3af has its CatchHandler @ 0343f118 */
                    /* try { // try from 0343f3b0 to 0353f3b3 has its CatchHandler @ 0343f3bc */
                    /* try { // try from 0343f3b4 to 0353f3f7 has its CatchHandler @ 0343f118 */
            (__this_00->fields)._size = uVar2 + 1;
            pMVar10->m_Items[(int)uVar2] = pMVar9;
                    /* catch() { ... } // from try @ 0343f3b0 with catch @ 0343f3bc */
                    /* catch() { ... } // from try @ 0343f304 with catch @ 0343f3c0 */
            thunk_FUN_01c20e04(pMVar10->m_Items + (int)uVar2,pMVar9);
                    /* catch() { ... } // from try @ 0343f3a8 with catch @ 0343f3c4 */
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pMVar9
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_ObscuredFloat>__Dispose
              (&local_d0,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_Dispose__
              );
  } while( true );
}


// ===== public void HOCKFCMKBDP()  [RVA 0x3341340]
// FightList$$HOCKFCMKBDP @ RVA 0x3341340

void FightList__HOCKFCMKBDP(FightList_o *__this,MethodInfo *method)

{
  bool bVar1;
  PAMEPBLOLPB_o *pPVar2;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  
  pPVar2 = (__this->fields).JPBIBBBMCCD;
  if (pPVar2 != (PAMEPBLOLPB_o *)0x0) {
                    /* catch() { ... } // from try @ 03440f90 with catch @ 03441358
                       try { // try from 03441358 to 03541367 has its CatchHandler @ 03440e48 */
    bVar1 = PAMEPBLOLPB__KPGJMIHLENM(pPVar2,(__this->fields).PIKNKFHOMLP,(MethodInfo *)0x0);
                    /* try { // try from 03441368 to 0354136b has its CatchHandler @ 0344137c */
    if (((!bVar1) || (pPVar2 = (__this->fields).JPBIBBBMCCD, pPVar2 == (PAMEPBLOLPB_o *)0x0)) ||
       (bVar1 = PAMEPBLOLPB__CKGAMIHJOMC(pPVar2,(__this->fields).PIKNKFHOMLP,(MethodInfo *)0x0),
       bVar1)) {
                    /* catch() { ... } // from try @ 03441368 with catch @ 0344137c */
      return;
    }
    __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this_00,0x21,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FAHIIKLFAOG()  [RVA 0x33413A0]
// FightList$$FAHIIKLFAOG @ RVA 0x33413A0

void FightList__FAHIIKLFAOG(FightList_o *__this,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  uint uVar3;
  System_Collections_Generic_List_AJNNHGGLGIF__o *pSVar4;
  System_Collections_Generic_List_AGCDKMOOJGI__o *__this_01;
  System_Collections_Generic_List_JCHNBADDBGO__o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* try { // try from 034413b4 to 035413db has its CatchHandler @ 034413f0 */
  if ((DAT_04567991 & 1) == 0) {
    FUN_01bab630(&RandomRule_TypeInfo);
                    /* try { // try from 034413dc to 035413e7 has its CatchHandler @ 03440e48 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
                    /* try { // try from 034413e8 to 035413ef has its CatchHandler @ 034413f0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
                    /* catch() { ... } // from try @ 03441324 with catch @ 034413f0
                       catch() { ... } // from try @ 034413b4 with catch @ 034413f0
                       catch() { ... } // from try @ 034413e8 with catch @ 034413f0 */
                    /* try { // try from 034413f4 to 035414b3 has its CatchHandler @ 034413f4
                       catch() { ... } // from try @ 034413f4 with catch @ 034413f4
                       catch() { ... } // from try @ 03441520 with catch @ 034413f4
                       catch() { ... } // from try @ 0344155c with catch @ 034413f4
                       catch() { ... } // from try @ 03441594 with catch @ 034413f4
                       catch() { ... } // from try @ 034415d4 with catch @ 034413f4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_get_Current__);
    FUN_01bab630(&ItemRule_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ItemRule>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RandomRule>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_Remove__);
    DAT_04567991 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pSVar4 = (__this->fields).ILMPKOBNAIB;
  if (pSVar4 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)pSVar4,
               Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
                    /* try { // try from 034414b4 to 035414bb has its CatchHandler @ 03441578 */
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__
                             ), __this_00 = local_70.fields._current, bVar2) {
      pSVar4 = (__this->fields).FEODLOLDCKM;
      if (pSVar4 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 034414d4 to 035414db has its CatchHandler @ 03441574 */
      bVar2 = System_Collections_Generic_List<object>__Remove
                        ((System_Collections_Generic_List_object__o *)pSVar4,
                         local_70.fields._current,
                         Method_System_Collections_Generic_List<Rule>_Remove__);
      if ((Rule_o *)__this_00 == (Rule_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8(bVar2);
      }
      uVar3 = Rule__NHGGBEACKBD((Rule_o *)__this_00,(MethodInfo *)0x0);
      if (uVar3 < 3) {
        __this_02 = (__this->fields).MIHBDEKEPEB;
        if (__this_02 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 0344154c to 0354154f has its CatchHandler @ 03441570 */
                    /* try { // try from 03441550 to 03541553 has its CatchHandler @ 0344156c */
                    /* try { // try from 03441554 to 03541557 has its CatchHandler @ 03441568 */
        bVar1 = (ItemRule_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03441558 to 0354155b has its CatchHandler @ 03441560 */
                    /* try { // try from 0344155c to 0354158f has its CatchHandler @ 034413f4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441558 with catch @ 03441560
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441518 with catch @ 03441564
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441554 with catch @ 03441568
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441550 with catch @ 0344156c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0344154c with catch @ 03441570
                        */
        if (((((Rule_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
           ((((Rule_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)ItemRule_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(__this_00);
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034414d4 with catch @ 03441574
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034414b4 with catch @ 03441578
                        */
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)__this_02,__this_00,
                   Method_System_Collections_Generic_List<ItemRule>_Remove__);
      }
      else if (uVar3 == 0x15) {
        __this_01 = (__this->fields).HFDOEONIBFA;
        if (__this_01 == (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (RandomRule_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03441518 to 0354151f has its CatchHandler @ 03441564 */
                    /* try { // try from 03441520 to 0354154b has its CatchHandler @ 034413f4 */
        if (((((Rule_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
           ((((Rule_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)RandomRule_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(__this_00);
        }
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)__this_01,__this_00,
                   Method_System_Collections_Generic_List<RandomRule>_Remove__);
      }
      pSVar4 = (__this->fields).LJNCACBBIBD;
      if (pSVar4 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 03441590 to 03541593 has its CatchHandler @ 034415bc */
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar4,__this_00,
                 Method_System_Collections_Generic_List<Rule>_Remove__);
                    /* try { // try from 03441594 to 035415cb has its CatchHandler @ 034413f4 */
      pSVar4 = (__this->fields).KFHLHCHCMPM;
      if (pSVar4 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar4,__this_00,
                 Method_System_Collections_Generic_List<Rule>_Remove__);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
    pSVar4 = (__this->fields).ILMPKOBNAIB;
                    /* catch() { ... } // from try @ 03441590 with catch @ 034415bc */
    if (pSVar4 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
      length = (pSVar4->fields)._size;
                    /* try { // try from 034415cc to 035415d3 has its CatchHandler @ 034415e8 */
      (pSVar4->fields)._size = 0;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (0 < length) {
                    /* try { // try from 034415d4 to 035415df has its CatchHandler @ 034413f4 */
                    /* try { // try from 034415e0 to 035415e7 has its CatchHandler @ 034415e8 */
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034415cc with catch @ 034415e8
                       catch(type#2 @ 00000000) { ... } // from try @ 034415e0 with catch @ 034415e8
                        */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private List<MGNDHCBAPEN<string, float>> NBHMKBBPNEF()  [RVA 0x3341338]
// FightList$$NBHMKBBPNEF @ RVA 0x3341338

System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *
FightList__NBHMKBBPNEF(FightList_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *pSVar1;
  MethodInfo *in_x2;
  
  pSVar1 = FightList__OPALEBBOFPM(__this,2,in_x2);
  return pSVar1;
}


// ===== public void DBLLCDJCJIJ()  [RVA 0x333E66C]
// FightList$$DBLLCDJCJIJ @ RVA 0x333E66C

void FightList__DBLLCDJCJIJ(FightList_o *__this,MethodInfo *method)

{
  int32_t PKLFFPEBBDA;
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_AGCDKMOOJGI__o *pSVar2;
  PAMEPBLOLPB_o *pPVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567992 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RandomRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RandomRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RandomRule>_get_Current__);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RandomRule>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RandomRule>_get_Count__);
    DAT_04567992 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields).JDNKKGPNHPB == 7) {
    pSVar2 = (__this->fields).HFDOEONIBFA;
    if (pSVar2 == (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) {
LAB_0343e7ec:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pSVar2->fields)._size != 0) {
      if ((__this->fields).GFCLPPPMGAK == false) {
        pPVar3 = (__this->fields).JPBIBBBMCCD;
        if (pPVar3 != (PAMEPBLOLPB_o *)0x0) {
          PKLFFPEBBDA = (pPVar3->fields).KOANEAEMOOP;
          if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo,method);
          }
          LIIFLGALGNK__DHPFKHMDEDG(PKLFFPEBBDA,(MethodInfo *)0x0);
          pSVar2 = (__this->fields).HFDOEONIBFA;
          if (pSVar2 != (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) {
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_48,(System_Collections_Generic_List_object__o *)pSVar2,
                       Method_System_Collections_Generic_List<RandomRule>_GetEnumerator__);
            while( true ) {
              bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_48,
                                 Method_System_Collections_Generic_List_Enumerator<RandomRule>_MoveNext__
                                );
              if (!bVar1) {
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<RandomRule>_Dispose__)
                ;
                if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                LIIFLGALGNK__DHPFKHMDEDG((MethodInfo *)0x0);
                FightList__LFCMDLKDGHG(__this,method_00);
                (__this->fields).BLFDCHIPLMI = false;
                return;
              }
              if ((RandomRule_o *)local_48.fields._current == (RandomRule_o *)0x0) break;
              if (((RandomRule_Fields *)((long)local_48.fields._current + 0x10))->EIMDJHJAHKK == 1)
              {
                RandomRule__KACMDIEPEMF
                          ((RandomRule_o *)local_48.fields._current,(MethodInfo *)0x0);
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
        goto LAB_0343e7ec;
      }
      (__this->fields).BLFDCHIPLMI = true;
    }
  }
  return;
}


// ===== private bool JOLFKDDINGF(IEJGMGHPING PFDEAPMMFAP)  [RVA 0x33416C8]
// FightList$$JOLFKDDINGF @ RVA 0x33416C8

bool FightList__JOLFKDDINGF(FightList_o *__this,IEJGMGHPING_o *PFDEAPMMFAP,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Enum_o local_38;
  int local_28;
  
  if ((DAT_04567993 & 1) == 0) {
    FUN_01bab630(&BKJBECAPBLE_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    __this = (FightList_o *)FUN_01bab630(&StringLiteral_6350/*"FightList::isConditionComplete - No handler for this type: "*/);
    DAT_04567993 = 1;
  }
  if (PFDEAPMMFAP != (IEJGMGHPING_o *)0x0) {
    local_28 = (PFDEAPMMFAP->fields).BGHFADDGPAD;
    if (local_28 == 2) {
      bVar1 = FightList__CJOMAONPHEB(__this,PFDEAPMMFAP,method);
      if (!bVar1) {
        return false;
      }
    }
    else {
      local_38.klass = (System_Enum_c *)BKJBECAPBLE_TypeInfo;
      local_38.monitor = (void *)0xffffffffffffffff;
      pSVar2 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(StringLiteral_6350/*"FightList::isConditionComplete - No handler for this type: "*/,pSVar2,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PJIAIIFIFAF(Rule GOAHBPBJCKC, List<ItemRule> KENFFDHLNDA)  [RVA 0x3341A04]
// FightList$$PJIAIIFIFAF @ RVA 0x3341A04

void FightList__PJIAIIFIFAF
               (FightList_o *__this,Rule_o *GOAHBPBJCKC,
               System_Collections_Generic_List_JCHNBADDBGO__o *KENFFDHLNDA,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  ItemRule_array *pJVar5;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567994 & 1) == 0) {
    FUN_01bab630(&RandomRule_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_get_Current__);
    FUN_01bab630(&HIJGJNFACPG_TypeInfo);
    FUN_01bab630(&ItemRule_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ItemRule>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    FUN_01bab630(&PNEKMHMACLG_TypeInfo);
    DAT_04567994 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (GOAHBPBJCKC != (Rule_o *)0x0) {
    uVar4 = Rule__NHGGBEACKBD(GOAHBPBJCKC,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<ItemRule>_Add__;
    if (0x15 < (int)uVar4) {
      if (uVar4 == 0x16) {
        bVar1 = (PNEKMHMACLG_TypeInfo->_2).naturalAligment;
        if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
           ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)PNEKMHMACLG_TypeInfo)) goto LAB_03441dfc;
        if (GOAHBPBJCKC[1].klass == (Rule_c *)0x0) goto LAB_03441df8;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_68,(System_Collections_Generic_List_object__o *)GOAHBPBJCKC[1].klass,
                   Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
        local_50.fields._index = local_68.fields._index;
        local_50.fields._version = local_68.fields._version;
                    /* try { // try from 03441d98 to 03541d9f has its CatchHandler @ 03441df8 */
                    /* try { // try from 03441da0 to 03541de3 has its CatchHandler @ 03441cf0 */
        local_50.fields._list = local_68.fields._list;
        local_50.fields._current = local_68.fields._current;
        while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_50,
                                  Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__
                                 ), bVar3) {
          FightList__PKPAGJPFANA
                    (__this,(Rule_o *)local_50.fields._current,KENFFDHLNDA,method);
        }
      }
      else {
        if (uVar4 != 0x29) {
          return;
        }
        bVar1 = (HIJGJNFACPG_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03441afc to 03541b23 has its CatchHandler @ 03441c54 */
        if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
           ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)HIJGJNFACPG_TypeInfo)) {
LAB_03441dfc:
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(GOAHBPBJCKC);
        }
        if (*(char *)&GOAHBPBJCKC[1].fields.super.GMPFJFBFHCH == '\0') {
          return;
        }
        if (GOAHBPBJCKC[1].klass == (Rule_c *)0x0) goto LAB_03441df8;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_68,(System_Collections_Generic_List_object__o *)GOAHBPBJCKC[1].klass,
                   Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
        local_50.fields._index = local_68.fields._index;
        local_50.fields._version = local_68.fields._version;
        local_50.fields._list = local_68.fields._list;
        local_50.fields._current = local_68.fields._current;
        while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_50,
                                  Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__
                                 ), bVar3) {
                    /* try { // try from 03441b58 to 03541b7f has its CatchHandler @ 03441c50 */
          FightList__PKPAGJPFANA
                    (__this,(Rule_o *)local_50.fields._current,KENFFDHLNDA,method);
        }
      }
LAB_03441dd0:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__)
      ;
                    /* try { // try from 03441de4 to 03541de7 has its CatchHandler @ 03441df4 */
                    /* try { // try from 03441de8 to 03541deb has its CatchHandler @ 03441df0 */
                    /* try { // try from 03441dec to 03541e0f has its CatchHandler @ 03441cf0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441de8 with catch @ 03441df0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441de4 with catch @ 03441df4
                        */
      return;
    }
    if (uVar4 < 3) {
                    /* try { // try from 03441c38 to 03541c63 has its CatchHandler @ 034419c0 */
      if (KENFFDHLNDA != (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441c34 with catch @ 03441c40
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441b9c with catch @ 03441c44
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441c2c with catch @ 03441c48
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441c28 with catch @ 03441c4c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441b58 with catch @ 03441c50
                        */
        bVar1 = (ItemRule_TypeInfo->_2).naturalAligment;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441afc with catch @ 03441c54
                        */
                    /* try { // try from 03441c64 to 03541c67 has its CatchHandler @ 03441c78 */
        if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
           ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)ItemRule_TypeInfo)) goto LAB_03441dfc;
                    /* catch() { ... } // from try @ 03441c64 with catch @ 03441c78 */
        pJVar5 = (KENFFDHLNDA->fields)._items;
        (KENFFDHLNDA->fields)._version = (KENFFDHLNDA->fields)._version + 1;
        if (pJVar5 != (ItemRule_array *)0x0) {
          uVar4 = (KENFFDHLNDA->fields)._size;
          if (uVar4 < (uint)pJVar5->max_length) {
            (KENFFDHLNDA->fields)._size = uVar4 + 1;
            pJVar5->m_Items[(int)uVar4] = (ItemRule_o *)GOAHBPBJCKC;
                    /* try { // try from 03441cb0 to 03541cd7 has its CatchHandler @ 03441cec */
            thunk_FUN_01c20e04(pJVar5->m_Items + (int)uVar4,GOAHBPBJCKC);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,
                     (Il2CppObject *)GOAHBPBJCKC,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
    else {
      if (uVar4 != 0x15) {
        return;
      }
      bVar1 = (RandomRule_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03441b9c to 03541ba7 has its CatchHandler @ 03441c44 */
      if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
         ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)RandomRule_TypeInfo)) goto LAB_03441dfc;
                    /* try { // try from 03441ba8 to 03541c27 has its CatchHandler @ 034419c0 */
      if (GOAHBPBJCKC[1].monitor != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_68,GOAHBPBJCKC[1].monitor,
                   Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
        local_50.fields._index = local_68.fields._index;
        local_50.fields._version = local_68.fields._version;
        local_50.fields._list = local_68.fields._list;
        local_50.fields._current = local_68.fields._current;
        while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_50,
                                  Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__
                                 ), bVar3) {
          FightList__PKPAGJPFANA
                    (__this,(Rule_o *)local_50.fields._current,KENFFDHLNDA,method);
        }
        goto LAB_03441dd0;
      }
    }
  }
LAB_03441df8:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441d98 with catch @ 03441df8
                        */
  FUN_01bab8c8();
}


// ===== public void GIMGMADOEMF(ModelParameters KOHKKIKJLHB)  [RVA 0x33422A4]
// FightList$$GIMGMADOEMF @ RVA 0x33422A4

void FightList__GIMGMADOEMF(FightList_o *__this,ModelParameters_o *KOHKKIKJLHB,MethodInfo *method)

{
                    /* try { // try from 034422c0 to 035422eb has its CatchHandler @ 03442c20 */
  if ((DAT_04567995 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<ModelParameters>__);
    DAT_04567995 = 1;
  }
                    /* try { // try from 034422ec to 035422f3 has its CatchHandler @ 03442c00 */
                    /* try { // try from 034422f4 to 0354243f has its CatchHandler @ 03441efc */
  DJNBJHPDKDP__OFNFOGHFDML<object>
            ((System_Collections_Generic_List_T__o *)(__this->fields).NNHINPLPDHJ,
             (Il2CppObject *)KOHKKIKJLHB,Method_DJNBJHPDKDP_OFNFOGHFDML<ModelParameters>__);
  return;
}


// ===== private List<ItemRule> OBJKMBOKOCC(HEDFKJBDBFN KFLAAIMLKOE)  [RVA 0x33422FC]
// FightList$$OBJKMBOKOCC @ RVA 0x33422FC

System_Collections_Generic_List_JCHNBADDBGO__o *
FightList__OBJKMBOKOCC(FightList_o *__this,int32_t KFLAAIMLKOE,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_JCHNBADDBGO__o *pSVar1;
  
  if ((DAT_04567996 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<ItemRule>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<ItemRule>__);
    FUN_01bab630(&System_Func<ItemRule,_bool>_TypeInfo);
    FUN_01bab630(&Method_AFFHKININGD_KEBOEMEJJEK_LJHCGDALIFI__);
    FUN_01bab630(&FightList_KEBOEMEJJEK_TypeInfo);
    DAT_04567996 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FightList_KEBOEMEJJEK_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = KFLAAIMLKOE;
    pSVar1 = (__this->fields).MIHBDEKEPEB;
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<ItemRule,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    source = System_Linq_Enumerable__Where<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,predicate,
                        Method_System_Linq_Enumerable_Where<ItemRule>__);
    pSVar1 = (System_Collections_Generic_List_JCHNBADDBGO__o *)
             System_Linq_Enumerable__ToList<object>
                       (source,Method_System_Linq_Enumerable_ToList<ItemRule>__);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CFFIDFOGCFK(ModelParameters KOHKKIKJLHB)  [RVA 0x33423F4]
// FightList$$CFFIDFOGCFK @ RVA 0x33423F4

void FightList__CFFIDFOGCFK(FightList_o *__this,ModelParameters_o *KOHKKIKJLHB,MethodInfo *method)

{
  if ((DAT_04567997 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<ModelParameters>__);
    DAT_04567997 = 1;
  }
                    /* try { // try from 03442440 to 03542467 has its CatchHandler @ 03442d5c */
  DJNBJHPDKDP__OFNFOGHFDML<object>
            ((System_Collections_Generic_List_T__o *)(__this->fields).MECHOBPGHFJ,
             (Il2CppObject *)KOHKKIKJLHB,Method_DJNBJHPDKDP_OFNFOGHFDML<ModelParameters>__);
  return;
}


// ===== private void ENFLLPECJHG(ModelParameters NDOMOKBINFD)  [RVA 0x3340CE8]
// FightList$$ENFLLPECJHG @ RVA 0x3340CE8

/* WARNING: Removing unreachable block (ram,0x03440f24) */

void FightList__ENFLLPECJHG(FightList_o *__this,ModelParameters_o *NDOMOKBINFD,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Rule_o *pAVar2;
  bool bVar3;
  int32_t iVar4;
  int iVar5;
  System_Collections_Generic_List_JCHNBADDBGO__o *KENFFDHLNDA;
  System_Collections_Generic_List_JCHNBADDBGO__o *KENFFDHLNDA_00;
  System_Collections_Generic_List_AGCDKMOOJGI__o *__this_00;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *__this_02;
  Item_o *__this_03;
  HOOAAGABMBL_o *pHVar6;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  Roster_o *pAVar7;
  Rule_o *GOAHBPBJCKC;
  int iVar8;
  System_String_o *value;
  System_Collections_Generic_List_Enumerator_T__o local_d8;
  System_Collections_Generic_List_Enumerator_T__o local_c0;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567998 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RandomRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ItemRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ItemRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RandomRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RandomRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ItemRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RandomRule>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ItemRule>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ItemRule>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ItemRule>_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567998 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  local_c0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c0.fields._index = 0;
  local_c0.fields._version = 0;
  local_c0.fields._current = (Il2CppObject *)0x0;
  if (NDOMOKBINFD != (ModelParameters_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    bVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                       (NDOMOKBINFD->fields).HJPOJOPKEKI.fields,(MethodInfo *)0x0);
    iVar4 = 1;
    if (!bVar3) {
      iVar4 = 2;
    }
    KENFFDHLNDA = FightList__OBJKMBOKOCC(__this,iVar4,method_00);
    KENFFDHLNDA_00 =
         (System_Collections_Generic_List_JCHNBADDBGO__o *)
         thunk_FUN_01bda818(System_Collections_Generic_List<ItemRule>_TypeInfo);
                    /* try { // try from 03440e48 to 03540f8f has its CatchHandler @ 03440e48
                       catch() { ... } // from try @ 03440e48 with catch @ 03440e48
                       catch() { ... } // from try @ 0344103c with catch @ 03440e48
                       catch() { ... } // from try @ 034411fc with catch @ 03440e48
                       catch() { ... } // from try @ 0344128c with catch @ 03440e48
                       catch() { ... } // from try @ 034412a0 with catch @ 03440e48
                       catch() { ... } // from try @ 03441358 with catch @ 03440e48
                       catch() { ... } // from try @ 034413dc with catch @ 03440e48 */
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)KENFFDHLNDA_00,
               Method_System_Collections_Generic_List<ItemRule>__ctor__);
    __this_00 = (__this->fields).HFDOEONIBFA;
    if (__this_00 != (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_d8,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<RandomRule>_GetEnumerator__);
      local_80.fields._index = local_d8.fields._index;
      local_80.fields._version = local_d8.fields._version;
      local_80.fields._list = local_d8.fields._list;
      local_80.fields._current = local_d8.fields._current;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<RandomRule>_MoveNext__
                               ), bVar3) {
        if ((Rule_o *)local_80.fields._current == (Rule_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (((Rule_o *)((long)local_80.fields._current + 0x58))->monitor ==
            (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_d8,((Rule_o *)((long)local_80.fields._current + 0x58))->monitor,
                   Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
        local_a0.fields._index = local_d8.fields._index;
        local_a0.fields._version = local_d8.fields._version;
        local_a0.fields._list = local_d8.fields._list;
        local_a0.fields._current = local_d8.fields._current;
        while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_a0,
                                  Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__
                                 ), bVar3) {
          FightList__PJIAIIFIFAF
                    (__this,(Rule_o *)local_a0.fields._current,KENFFDHLNDA_00,in_x3);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<RandomRule>_Dispose__)
      ;
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar4 = GameUtils__DGJACOJNPBB((MethodInfo *)0x0);
      if (KENFFDHLNDA_00 != (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) {
                    /* try { // try from 03440f90 to 03540fb7 has its CatchHandler @ 03441358 */
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_d8,(System_Collections_Generic_List_object__o *)KENFFDHLNDA_00,
                   Method_System_Collections_Generic_List<ItemRule>_GetEnumerator__);
        local_c0.fields._index = local_d8.fields._index;
        local_c0.fields._version = local_d8.fields._version;
        local_c0.fields._list = local_d8.fields._list;
        local_c0.fields._current = local_d8.fields._current;
        iVar5 = iVar4 * 100 + 0x1e;
        pAVar2 = (Rule_o *)0x0;
        do {
          while( true ) {
            do {
              GOAHBPBJCKC = pAVar2;
              iVar8 = iVar5;
              bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_c0,
                                 Method_System_Collections_Generic_List_Enumerator<ItemRule>_MoveNext__
                                );
              pIVar1 = local_c0.fields._current;
              if (!bVar3) {
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (&local_c0,
                           Method_System_Collections_Generic_List_Enumerator<ItemRule>_Dispose__)
                ;
                if (GOAHBPBJCKC != (Rule_o *)0x0) {
                    /* try { // try from 03441150 to 03541177 has its CatchHandler @ 034412c8 */
                  FightList__PKPAGJPFANA(__this,GOAHBPBJCKC,KENFFDHLNDA,in_x3);
                }
                ModelParameters__JDGECJMGKLK(NDOMOKBINFD,KENFFDHLNDA,0,(MethodInfo *)0x0);
                (*(NDOMOKBINFD->klass->vtable)._7_LBNKPLKIIOP.methodPtr)
                          (NDOMOKBINFD,(NDOMOKBINFD->klass->vtable)._7_LBNKPLKIIOP.method);
                return;
              }
              if ((Rule_o *)local_c0.fields._current == (Rule_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if (((Rule_o *)((long)local_c0.fields._current + 0x58))->klass ==
                  (Rule_c *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              value = (System_String_o *)
                      (((Rule_o *)((long)local_c0.fields._current + 0x58))->klass->_1).name;
              bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
              iVar5 = iVar8;
              pAVar2 = GOAHBPBJCKC;
                    /* try { // try from 03440fec to 03541013 has its CatchHandler @ 034412c4 */
            } while (bVar3);
            if (((Rule_o *)((long)pIVar1 + 0x58))->klass == (Rule_c *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            iVar4 = IGFGDDANEPE__LGIMDOAMCNG
                              ((IGFGDDANEPE_o *)((Rule_o *)((long)pIVar1 + 0x58))->klass,
                               (MethodInfo *)0x0);
            if (0 < iVar4) break;
LAB_03441020:
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 03441030 to 0354103b has its CatchHandler @ 034412ac */
            if (DAT_04565b7d == '\0') {
                    /* try { // try from 0344103c to 0354114f has its CatchHandler @ 03440e48 */
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar7 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034411f0 to 035411fb has its CatchHandler @ 034412a8 */
              FUN_01bab8c8();
            }
            __this_01 = (pAVar7->fields).OIDPLCLELEN;
            if (__this_01 == (GGHCLMEFIGO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            __this_02 = GGHCLMEFIGO__JNFIBDBHNOA(__this_01,value,(MethodInfo *)0x0);
            if (__this_02 == (IGFGDDANEPE_o *)0x0) {
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              if (DAT_04563eaa == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04563eaa = '\x01';
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
              if (__this_03 == (Item_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pHVar6 = Item__CKKIPBAIEMN(__this_03,value,(MethodInfo *)0x0);
              if ((pHVar6 != (HOOAAGABMBL_o *)0x0) &&
                 (iVar5 = (pHVar6->fields)._HCHGENFJLHA_k__BackingField,
                 pAVar2 = (Rule_o *)pIVar1, iVar8 <= iVar5)) {
                iVar5 = iVar8;
                pAVar2 = GOAHBPBJCKC;
              }
            }
            else {
              iVar4 = IGFGDDANEPE__LGIMDOAMCNG(__this_02,(MethodInfo *)0x0);
              if (iVar4 < iVar8) {
                iVar5 = IGFGDDANEPE__LGIMDOAMCNG(__this_02,(MethodInfo *)0x0);
                pAVar2 = (Rule_o *)pIVar1;
              }
            }
          }
          if (((Rule_o *)((long)pIVar1 + 0x58))->klass == (Rule_c *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar4 = IGFGDDANEPE__LGIMDOAMCNG
                            ((IGFGDDANEPE_o *)((Rule_o *)((long)pIVar1 + 0x58))->klass,
                             (MethodInfo *)0x0);
          if (iVar8 <= iVar4) goto LAB_03441020;
          if (((Rule_o *)((long)pIVar1 + 0x58))->klass == (Rule_c *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar5 = IGFGDDANEPE__LGIMDOAMCNG
                            ((IGFGDDANEPE_o *)((Rule_o *)((long)pIVar1 + 0x58))->klass,
                             (MethodInfo *)0x0);
          pAVar2 = (Rule_o *)pIVar1;
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034411fc to 0354127b has its CatchHandler @ 03440e48 */
  FUN_01bab8c8();
}


// ===== private string OKMNIODKDBA()  [RVA 0x3340930]
// FightList$$OKMNIODKDBA @ RVA 0x3340930

System_String_o * FightList__OKMNIODKDBA(FightList_o *__this,MethodInfo *method)

{
  Il2CppObject *GOAHBPBJCKC;
  bool bVar1;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567999 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    DAT_04567999 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = FightList__HKNMJCKPHHC(__this,method);
  if (__this_00 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 034409a0 to 035409a7 has its CatchHandler @ 03440ab0 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
  do {
    do {
                    /* try { // try from 034409c4 to 035409cb has its CatchHandler @ 03440aa0 */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
      GOAHBPBJCKC = local_48.fields._current;
      if (!bVar1) {
        CJNHFNHJHPE = (System_String_o *)0x0;
        goto LAB_03440a0c;
      }
      if ((Rule_o *)local_48.fields._current == (Rule_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 034409d8 to 035409e7 has its CatchHandler @ 03440a9c */
      bVar1 = Rule__BNNIDPDMOIL((Rule_o *)local_48.fields._current,(MethodInfo *)0x0);
    } while (!bVar1);
                    /* try { // try from 034409f0 to 035409fb has its CatchHandler @ 03440a98 */
    CJNHFNHJHPE = FightList__OKMNIODKDBA(__this,(Rule_o *)GOAHBPBJCKC,in_x2);
                    /* try { // try from 034409fc to 03540a83 has its CatchHandler @ 03440868 */
    bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(CJNHFNHJHPE,(MethodInfo *)0x0);
  } while (bVar1);
LAB_03440a0c:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
  return CJNHFNHJHPE;
}


// ===== public bool ODIDEIMJJJO()  [RVA 0x33428B8]
// FightList$$ODIDEIMJJJO @ RVA 0x33428B8

bool FightList__ODIDEIMJJJO(FightList_o *__this,MethodInfo *method)

{
  return (__this->fields).GFCLPPPMGAK;
}


// ===== public void PBKNABJGEEK()  [RVA 0x33428C0]
// FightList$$PBKNABJGEEK @ RVA 0x33428C0

void FightList__PBKNABJGEEK(FightList_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  
                    /* try { // try from 034428c8 to 035428ef has its CatchHandler @ 03442b58 */
  if ((DAT_0456799a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_Clear__);
    DAT_0456799a = 1;
  }
  __this_00 = (__this->fields).KFHLHCHCMPM;
  if (__this_00 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
    length = (__this_00->fields)._size;
    (__this_00->fields)._size = 0;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,(MethodInfo *)0x0);
                    /* try { // try from 03442924 to 0354294b has its CatchHandler @ 03442b54 */
      __this_00 = (__this->fields).KFHLHCHCMPM;
      if (__this_00 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) goto LAB_03442948;
    }
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(__this->fields).LJNCACBBIBD,
               Method_System_Collections_Generic_List<Rule>_AddRange__);
    return;
  }
LAB_03442948:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool MMIMAJHGCFC()  [RVA 0x334294C]
// FightList$$MMIMAJHGCFC @ RVA 0x334294C

bool FightList__MMIMAJHGCFC(FightList_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IEJGMGHPING__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* try { // try from 03442964 to 0354296f has its CatchHandler @ 03442a84 */
  if ((DAT_0456799b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEJGMGHPING>_Dispose__);
                    /* try { // try from 03442974 to 0354297f has its CatchHandler @ 03442a6c */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEJGMGHPING>_MoveNext__);
                    /* try { // try from 03442980 to 03542a07 has its CatchHandler @ 03441efc */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEJGMGHPING>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEJGMGHPING>_GetEnumerator__);
    DAT_0456799b = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KPFGHBEKJIM;
  if (__this_00 == (System_Collections_Generic_List_IEJGMGHPING__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03442a24 to 03542a27 has its CatchHandler @ 03442b44 */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IEJGMGHPING>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<IEJGMGHPING>_MoveNext__);
    if (!bVar1) {
      iVar2 = 5;
      goto LAB_03442a00;
    }
    bVar1 = FightList__JOLFKDDINGF(__this,(IEJGMGHPING_o *)local_38.fields._current,in_x2);
  } while (bVar1);
  iVar2 = 4;
LAB_03442a00:
                    /* try { // try from 03442a08 to 03542a0b has its CatchHandler @ 03442c1c */
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<IEJGMGHPING>_Dispose__);
                    /* try { // try from 03442a0c to 03542a0f has its CatchHandler @ 03442c18 */
                    /* try { // try from 03442a10 to 03542a13 has its CatchHandler @ 03442c14 */
                    /* try { // try from 03442a14 to 03542a17 has its CatchHandler @ 03442c0c */
                    /* try { // try from 03442a18 to 03542a1b has its CatchHandler @ 03442c08 */
                    /* try { // try from 03442a1c to 03542a1f has its CatchHandler @ 03442b50 */
                    /* try { // try from 03442a20 to 03542a23 has its CatchHandler @ 03442b4c */
  return iVar2 != 4;
}


// ===== private void CGEOMKBMHCF(PNEKMHMACLG JMADECMMMIE)  [RVA 0x3342A90]
// FightList$$CGEOMKBMHCF @ RVA 0x3342A90

void FightList__CGEOMKBMHCF(FightList_o *__this,PNEKMHMACLG_o *JMADECMMMIE,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *JMADECMMMIE_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
                    /* try { // try from 03442aa4 to 03542aa7 has its CatchHandler @ 03442ac8 */
  if ((DAT_0456799c & 1) == 0) {
    FUN_01bab630(&RandomRule_TypeInfo);
                    /* catch() { ... } // from try @ 03442aa4 with catch @ 03442ac8 */
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<RandomRule>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
                    /* try { // try from 03442b08 to 03542b3b has its CatchHandler @ 03442e14 */
    FUN_01bab630(&PNEKMHMACLG_TypeInfo);
    DAT_0456799c = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((JMADECMMMIE != (PNEKMHMACLG_o *)0x0) &&
     (__this_00 = (JMADECMMMIE->fields).LJNCACBBIBD,
     __this_00 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0)) {
                    /* catch() { ... } // from try @ 03442a28 with catch @ 03442b3c
                       try { // try from 03442b3c to 03542b6f has its CatchHandler @ 03441efc */
                    /* catch() { ... } // from try @ 0344253c with catch @ 03442b40 */
                    /* catch() { ... } // from try @ 03442a24 with catch @ 03442b44 */
                    /* catch() { ... } // from try @ 034424e4 with catch @ 03442b48 */
                    /* catch() { ... } // from try @ 03442a20 with catch @ 03442b4c */
                    /* catch() { ... } // from try @ 03442a1c with catch @ 03442b50 */
                    /* catch() { ... } // from try @ 03442924 with catch @ 03442b54 */
                    /* catch() { ... } // from try @ 034428c8 with catch @ 03442b58 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
                    /* try { // try from 03442b70 to 03542b73 has its CatchHandler @ 03442b8c */
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
      JMADECMMMIE_00 = local_60.fields._current;
      if (!bVar2) {
                    /* try { // try from 03442c40 to 03542c43 has its CatchHandler @ 03442c58 */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
                    /* catch() { ... } // from try @ 03442c40 with catch @ 03442c58 */
        return;
      }
      if ((PNEKMHMACLG_o *)local_60.fields._current == (PNEKMHMACLG_o *)0x0) break;
                    /* catch() { ... } // from try @ 03442b70 with catch @ 03442b8c */
      iVar3 = Rule__NHGGBEACKBD((Rule_o *)local_60.fields._current,(MethodInfo *)0x0);
      if (iVar3 == 0x15) {
        bVar1 = (RandomRule_TypeInfo->_2).naturalAligment;
        if (((((PNEKMHMACLG_c *)JMADECMMMIE_00->klass)->_2).naturalAligment < bVar1) ||
           ((((PNEKMHMACLG_c *)JMADECMMMIE_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)RandomRule_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(JMADECMMMIE_00);
        }
                    /* try { // try from 03442bcc to 03542bff has its CatchHandler @ 03442e14 */
        method = Method_DJNBJHPDKDP_OFNFOGHFDML<RandomRule>__;
        DJNBJHPDKDP__OFNFOGHFDML<object>
                  ((System_Collections_Generic_List_T__o *)(__this->fields).HFDOEONIBFA,
                   JMADECMMMIE_00,
                   (MethodInfo_1E833E4 *)Method_DJNBJHPDKDP_OFNFOGHFDML<RandomRule>__);
      }
      iVar3 = Rule__NHGGBEACKBD((Rule_o *)JMADECMMMIE_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034422ec with catch @ 03442c00
                       try { // try from 03442c00 to 03542c3f has its CatchHandler @ 03441efc */
      if ((iVar3 == 0x16) ||
         (iVar3 = Rule__NHGGBEACKBD((Rule_o *)JMADECMMMIE_00,(MethodInfo *)0x0),
         iVar3 == 0x29)) {
                    /* catch() { ... } // from try @ 0344212c with catch @ 03442c04 */
                    /* catch() { ... } // from try @ 03442a18 with catch @ 03442c08 */
                    /* catch() { ... } // from try @ 03442a14 with catch @ 03442c0c */
                    /* catch() { ... } // from try @ 03442518 with catch @ 03442c10 */
        bVar1 = (PNEKMHMACLG_TypeInfo->_2).naturalAligment;
                    /* catch() { ... } // from try @ 03442a10 with catch @ 03442c14 */
                    /* catch() { ... } // from try @ 03442a0c with catch @ 03442c18 */
                    /* catch() { ... } // from try @ 03442a08 with catch @ 03442c1c */
                    /* catch() { ... } // from try @ 034422c0 with catch @ 03442c20 */
                    /* catch() { ... } // from try @ 03442100 with catch @ 03442c24 */
                    /* catch() { ... } // from try @ 03442264 with catch @ 03442c28 */
        if (((((PNEKMHMACLG_c *)JMADECMMMIE_00->klass)->_2).naturalAligment < bVar1) ||
           ((((PNEKMHMACLG_c *)JMADECMMMIE_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)PNEKMHMACLG_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(JMADECMMMIE_00);
        }
        FightList__CGEOMKBMHCF(__this,(PNEKMHMACLG_o *)JMADECMMMIE_00,method);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EDLEFNEENJC(JBCGDIEHOHH NNMBHKHJNGF)  [RVA 0x3342D00]
// FightList$$EDLEFNEENJC @ RVA 0x3342D00

void FightList__EDLEFNEENJC(FightList_o *__this,JBCGDIEHOHH_o *NNMBHKHJNGF,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_JBCGDIEHOHH__o *__this_00;
  JBCGDIEHOHH_array *pJVar3;
  
  if ((DAT_0456799d & 1) == 0) {
                    /* try { // try from 03442d24 to 03542d57 has its CatchHandler @ 03442e14 */
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_Add__);
    DAT_0456799d = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<JBCGDIEHOHH>_Add__;
  __this_00 = (__this->fields).FGAENDJJOGN;
  if (__this_00 != (System_Collections_Generic_List_JBCGDIEHOHH__o *)0x0) {
    pJVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pJVar3 != (JBCGDIEHOHH_array *)0x0) {
                    /* catch() { ... } // from try @ 0344249c with catch @ 03442d58
                       try { // try from 03442d58 to 03542d7f has its CatchHandler @ 03441efc */
      uVar1 = (__this_00->fields)._size;
                    /* catch() { ... } // from try @ 03442440 with catch @ 03442d5c */
      if (uVar1 < (uint)pJVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pJVar3->m_Items[(int)uVar1] = NNMBHKHJNGF;
                    /* try { // try from 03442d80 to 03542d83 has its CatchHandler @ 03442d98 */
        thunk_FUN_01c20e04(pJVar3->m_Items + (int)uVar1,NNMBHKHJNGF);
        return;
      }
                    /* catch() { ... } // from try @ 03442d80 with catch @ 03442d98 */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)NNMBHKHJNGF,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private string IBMKPOJFGCD()  [RVA 0x3340AAC]
// FightList$$IBMKPOJFGCD @ RVA 0x3340AAC

System_String_o * FightList__IBMKPOJFGCD(FightList_o *__this,MethodInfo *method)

{
  Il2CppObject *GOAHBPBJCKC;
  bool bVar1;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  System_String_o *CJNHFNHJHPE;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03440a84 with catch @ 03440aac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034409a0 with catch @ 03440ab0
                        */
                    /* try { // try from 03440acc to 03540acf has its CatchHandler @ 03440b00 */
                    /* try { // try from 03440ad0 to 03540b0f has its CatchHandler @ 03440868 */
  if ((DAT_0456799e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_get_Current__);
                    /* catch() { ... } // from try @ 03440acc with catch @ 03440b00 */
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_15810/*"^"*/);
                    /* try { // try from 03440b10 to 03540b17 has its CatchHandler @ 03440b2c */
                    /* try { // try from 03440b18 to 03540b23 has its CatchHandler @ 03440868 */
    FUN_01bab630(&StringLiteral_22469/*"{br}"*/);
    DAT_0456799e = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03440b24 to 03540b2b has its CatchHandler @ 03440b2c */
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03440b10 with catch @ 03440b2c
                       catch(type#2 @ 00000000) { ... } // from try @ 03440b24 with catch @ 03440b2c
                        */
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = FightList__HKNMJCKPHHC(__this,method);
  if (__this_00 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
  CJNHFNHJHPE = (System_String_o *)0x0;
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
    GOAHBPBJCKC = local_70.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__)
      ;
      return CJNHFNHJHPE;
    }
    if ((Rule_o *)local_70.fields._current == (Rule_o *)0x0) break;
    bVar1 = Rule__BNNIDPDMOIL((Rule_o *)local_70.fields._current,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = FightList__OKMNIODKDBA(__this,(Rule_o *)GOAHBPBJCKC,in_x2);
      bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(pSVar2,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar2 = System_String__Concat
                           (StringLiteral_15810/*"^"*/,pSVar2,StringLiteral_15810/*"^"*/,(MethodInfo *)0x0);
        bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(CJNHFNHJHPE,(MethodInfo *)0x0);
        if (!bVar1) {
          CJNHFNHJHPE = System_String__Concat(CJNHFNHJHPE,StringLiteral_22469/*"{br}"*/,(MethodInfo *)0x0);
        }
        in_x2 = (MethodInfo *)0x0;
        CJNHFNHJHPE = System_String__Concat(CJNHFNHJHPE,pSVar2,(MethodInfo *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AJECCFAENNF(Rule GOAHBPBJCKC)  [RVA 0x3342DAC]
// FightList$$AJECCFAENNF @ RVA 0x3342DAC

void FightList__AJECCFAENNF(FightList_o *__this,Rule_o *GOAHBPBJCKC,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((DAT_0456799f & 1) == 0) {
                    /* try { // try from 03442dd8 to 03542dff has its CatchHandler @ 03442e14 */
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<Rule>__);
    DAT_0456799f = 1;
  }
  method_00 = Method_DJNBJHPDKDP_OFNFOGHFDML<Rule>__;
  DJNBJHPDKDP__OFNFOGHFDML<object>
            ((System_Collections_Generic_List_T__o *)(__this->fields).ILMPKOBNAIB,
             (Il2CppObject *)GOAHBPBJCKC,
             (MethodInfo_1E833E4 *)Method_DJNBJHPDKDP_OFNFOGHFDML<Rule>__);
                    /* try { // try from 03442e00 to 03542e0b has its CatchHandler @ 03441efc */
                    /* try { // try from 03442e0c to 03542e13 has its CatchHandler @ 03442e14 */
  FightList__ANCGCCEOBAA(__this,GOAHBPBJCKC,method_00);
  return;
}


// ===== public bool IJKNNMOKCKL()  [RVA 0x3342E10]
// FightList$$IJKNNMOKCKL @ RVA 0x3342E10

bool FightList__IJKNNMOKCKL(FightList_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
                    /* catch() { ... } // from try @ 03442b08 with catch @ 03442e14
                       catch() { ... } // from try @ 03442bcc with catch @ 03442e14
                       catch() { ... } // from try @ 03442c90 with catch @ 03442e14
                       catch() { ... } // from try @ 03442d24 with catch @ 03442e14
                       catch() { ... } // from try @ 03442dd8 with catch @ 03442e14
                       catch() { ... } // from try @ 03442e0c with catch @ 03442e14 */
  if ((DAT_045679a0 & 1) == 0) {
    auVar4 = FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>_get_Count__);
    DAT_045679a0 = 1;
  }
  pSVar3 = (__this->fields).MECHOBPGHFJ;
  if (pSVar3 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
    if ((pSVar3->fields)._size < 2) {
      bVar1 = false;
    }
    else {
                    /* try { // try from 03442e60 to 03542f93 has its CatchHandler @ 03442e60
                       catch() { ... } // from try @ 03442e60 with catch @ 03442e60
                       catch() { ... } // from try @ 03443044 with catch @ 03442e60
                       catch() { ... } // from try @ 034430c8 with catch @ 03442e60
                       catch() { ... } // from try @ 034430d0 with catch @ 03442e60
                       catch() { ... } // from try @ 03443178 with catch @ 03442e60 */
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).GENLHJOKOIJ.fields,(MethodInfo *)0x0);
      bVar1 = 1 < iVar2;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
}


// ===== public List<Rule> HKNMJCKPHHC()  [RVA 0x333E4A4]
// FightList$$HKNMJCKPHHC @ RVA 0x333E4A4

System_Collections_Generic_List_AJNNHGGLGIF__o *
FightList__HKNMJCKPHHC(FightList_o *__this,MethodInfo *method)

{
  long lVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  Roster_o *pAVar2;
  
  if ((DAT_045679a1 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045679a1 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (Roster_o *)0x0) {
    lVar1 = 0x158;
    if ((pAVar2->fields).IOHEOKOOJFA != false) {
      lVar1 = 0x160;
    }
    return *(System_Collections_Generic_List_AJNNHGGLGIF__o **)((long)&__this->klass + lVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool CJOMAONPHEB(IEJGMGHPING PFDEAPMMFAP)  [RVA 0x33417B8]
// FightList$$CJOMAONPHEB @ RVA 0x33417B8

bool FightList__CJOMAONPHEB(FightList_o *__this,IEJGMGHPING_o *PFDEAPMMFAP,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  bool bVar3;
  Roster_o *__this_00;
  PAMEPBLOLPB_o *pPVar4;
  System_String_o *pSVar5;
  int32_t iVar6;
  System_Enum_o local_48;
  int local_38;
  
                    /* try { // try from 034417cc to 035417f3 has its CatchHandler @ 03441924 */
  if ((DAT_045679a2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MOLNCMOLNHF_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PALENEMJENB_TypeInfo);
    FUN_01bab630(&StringLiteral_6352/*"FightList::isConditionFightCount - No handler for this object type: "*/);
    __this = (FightList_o *)FUN_01bab630(&StringLiteral_6351/*"FightList::isConditionFightCount - No handler for this compare type: "*/);
    DAT_045679a2 = 1;
  }
                    /* try { // try from 03441828 to 0354184f has its CatchHandler @ 03441920 */
  if (PFDEAPMMFAP == (IEJGMGHPING_o *)0x0) {
LAB_03441a00:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  local_38 = (PFDEAPMMFAP->fields).NJEMGJNAGED;
  iVar1 = (PFDEAPMMFAP->fields).KPOBFGCNFAG;
  iVar2 = (PFDEAPMMFAP->fields).DGCODECJJCC;
  if (local_38 == 3) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0344186c to 03541877 has its CatchHandler @ 03441914 */
      DAT_04565b7d = '\x01';
    }
                    /* try { // try from 03441878 to 035418f7 has its CatchHandler @ 03441690 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    __this = (FightList_o *)0x0;
    if (__this_00 == (Roster_o *)0x0) goto LAB_03441a00;
    pPVar4 = Roster__EKOLJIPEEHA(__this_00,(PFDEAPMMFAP->fields).NEEIBKGPKBK,(MethodInfo *)0x0)
    ;
    if (pPVar4 != (PAMEPBLOLPB_o *)0x0) {
      iVar6 = (pPVar4->fields).AAECGBAMDEL;
      goto LAB_0344191c;
    }
  }
  else {
    local_48.klass = (System_Enum_c *)PALENEMJENB_TypeInfo;
    local_48.monitor = (void *)0xffffffffffffffff;
    pSVar5 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat(StringLiteral_6352/*"FightList::isConditionFightCount - No handler for this object type: "*/,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 034418f8 to 035418fb has its CatchHandler @ 0344191c */
                    /* try { // try from 034418fc to 035418ff has its CatchHandler @ 03441918 */
                    /* try { // try from 03441900 to 03541903 has its CatchHandler @ 03441690 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03441904 to 03541907 has its CatchHandler @ 03441910 */
                    /* try { // try from 03441908 to 03541933 has its CatchHandler @ 03441690 */
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441904 with catch @ 03441910
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0344186c with catch @ 03441914
                        */
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034418fc with catch @ 03441918
                        */
  iVar6 = 0;
LAB_0344191c:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034418f8 with catch @ 0344191c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441828 with catch @ 03441920
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034417cc with catch @ 03441924
                        */
                    /* try { // try from 03441934 to 03541937 has its CatchHandler @ 03441948 */
  switch(iVar2) {
  case 0:
    bVar3 = iVar1 <= iVar6;
                    /* catch() { ... } // from try @ 03441934 with catch @ 03441948 */
    break;
  case 1:
                    /* try { // try from 034419c0 to 03541afb has its CatchHandler @ 034419c0
                       catch() { ... } // from try @ 034419c0 with catch @ 034419c0
                       catch() { ... } // from try @ 03441ba8 with catch @ 034419c0
                       catch() { ... } // from try @ 03441c30 with catch @ 034419c0
                       catch() { ... } // from try @ 03441c38 with catch @ 034419c0
                       catch() { ... } // from try @ 03441cd8 with catch @ 034419c0 */
    bVar3 = iVar6 <= iVar1;
    break;
  case 2:
    bVar3 = iVar1 < iVar6;
    break;
  case 3:
    bVar3 = iVar6 < iVar1;
    break;
  case 4:
    bVar3 = iVar6 == iVar1;
    break;
  default:
    local_48.klass = (System_Enum_c *)MOLNCMOLNHF_TypeInfo;
    local_48.monitor = (void *)0xffffffffffffffff;
    local_38 = iVar2;
    pSVar5 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
                    /* try { // try from 03441980 to 035419a7 has its CatchHandler @ 034419bc */
    pSVar5 = System_String__Concat(StringLiteral_6351/*"FightList::isConditionFightCount - No handler for this compare type: "*/,pSVar5,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034419a8 to 035419b3 has its CatchHandler @ 03441690 */
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
                    /* try { // try from 034419b4 to 035419bb has its CatchHandler @ 034419bc */
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
    bVar3 = true;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03441980 with catch @ 034419bc
                       catch(type#2 @ 00000000) { ... } // from try @ 034419b4 with catch @ 034419bc
                        */
  }
  return bVar3;
}


// ===== private void PKPAGJPFANA(Rule GOAHBPBJCKC, List<ItemRule> KENFFDHLNDA)  [RVA 0x3341EA8]
// FightList$$PKPAGJPFANA @ RVA 0x3341EA8

void FightList__PKPAGJPFANA
               (FightList_o *__this,Rule_o *GOAHBPBJCKC,
               System_Collections_Generic_List_JCHNBADDBGO__o *KENFFDHLNDA,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  ItemRule_array *pJVar5;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_045679a3 & 1) == 0) {
    FUN_01bab630(&RandomRule_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
                    /* try { // try from 03441efc to 035420a3 has its CatchHandler @ 03441efc
                       catch() { ... } // from try @ 03441efc with catch @ 03441efc
                       catch() { ... } // from try @ 03442134 with catch @ 03441efc
                       catch() { ... } // from try @ 034422f4 with catch @ 03441efc
                       catch() { ... } // from try @ 03442568 with catch @ 03441efc
                       catch() { ... } // from try @ 03442748 with catch @ 03441efc
                       catch() { ... } // from try @ 03442980 with catch @ 03441efc
                       catch() { ... } // from try @ 03442a38 with catch @ 03441efc
                       catch() { ... } // from try @ 03442a48 with catch @ 03441efc
                       catch() { ... } // from try @ 03442a54 with catch @ 03441efc
                       catch() { ... } // from try @ 03442b3c with catch @ 03441efc
                       catch() { ... } // from try @ 03442c00 with catch @ 03441efc
                       catch() { ... } // from try @ 03442cc4 with catch @ 03441efc
                       catch() { ... } // from try @ 03442d58 with catch @ 03441efc
                       catch() { ... } // from try @ 03442e00 with catch @ 03441efc */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_get_Current__);
    FUN_01bab630(&HIJGJNFACPG_TypeInfo);
    FUN_01bab630(&ItemRule_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ItemRule>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    FUN_01bab630(&PNEKMHMACLG_TypeInfo);
    DAT_045679a3 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (GOAHBPBJCKC == (Rule_o *)0x0) goto LAB_034421ec;
  uVar4 = Rule__NHGGBEACKBD(GOAHBPBJCKC,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<ItemRule>_Add__;
  if (0x15 < (int)uVar4) {
    if (uVar4 == 0x16) {
      bVar1 = (PNEKMHMACLG_TypeInfo->_2).naturalAligment;
      if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
         ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)PNEKMHMACLG_TypeInfo)) goto LAB_034421f0;
      if (GOAHBPBJCKC[1].klass == (Rule_c *)0x0) goto LAB_034421ec;
                    /* try { // try from 034420a4 to 035420cb has its CatchHandler @ 03442cc4 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)GOAHBPBJCKC[1].klass,
                 Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_50,
                                Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__
                               ), bVar3) {
        FightList__PKPAGJPFANA
                  (__this,(Rule_o *)local_50.fields._current,KENFFDHLNDA,method);
      }
    }
    else {
      if (uVar4 != 0x29) {
        return;
      }
      bVar1 = (HIJGJNFACPG_TypeInfo->_2).naturalAligment;
      if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
         ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)HIJGJNFACPG_TypeInfo)) goto LAB_034421f0;
      if (*(char *)&GOAHBPBJCKC[1].fields.super.GMPFJFBFHCH == '\0') {
        return;
      }
      if (GOAHBPBJCKC[1].klass == (Rule_c *)0x0) goto LAB_034421ec;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)GOAHBPBJCKC[1].klass,
                 Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_50,
                                Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__
                               ), bVar3) {
        FightList__PKPAGJPFANA
                  (__this,(Rule_o *)local_50.fields._current,KENFFDHLNDA,method);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
    return;
                    /* try { // try from 03442100 to 0354212b has its CatchHandler @ 03442c24 */
  }
  if (uVar4 < 3) {
    if (KENFFDHLNDA != (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) {
      bVar1 = (ItemRule_TypeInfo->_2).naturalAligment;
      if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
         ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)ItemRule_TypeInfo)) goto LAB_034421f0;
      pJVar5 = (KENFFDHLNDA->fields)._items;
      (KENFFDHLNDA->fields)._version = (KENFFDHLNDA->fields)._version + 1;
      if (pJVar5 != (ItemRule_array *)0x0) {
        uVar4 = (KENFFDHLNDA->fields)._size;
        if (uVar4 < (uint)pJVar5->max_length) {
          (KENFFDHLNDA->fields)._size = uVar4 + 1;
          pJVar5->m_Items[(int)uVar4] = (ItemRule_o *)GOAHBPBJCKC;
          thunk_FUN_01c20e04(pJVar5->m_Items + (int)uVar4,GOAHBPBJCKC);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,
                   (Il2CppObject *)GOAHBPBJCKC,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
LAB_034421ec:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (uVar4 != 0x15) {
    return;
  }
  bVar1 = (RandomRule_TypeInfo->_2).naturalAligment;
  if ((bVar1 <= (GOAHBPBJCKC->klass->_2).naturalAligment) &&
     ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)RandomRule_TypeInfo)) {
    FightList__PKPAGJPFANA(__this,(Rule_o *)GOAHBPBJCKC[1].klass,KENFFDHLNDA,method);
    return;
  }
LAB_034421f0:
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(GOAHBPBJCKC);
}


// ===== public string CJPIFPJMENP()  [RVA 0x3342E80]
// FightList$$CJPIFPJMENP @ RVA 0x3342E80

System_String_o * FightList__CJPIFPJMENP(FightList_o *__this,MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).IGIFBFEFIKG,(MethodInfo *)0x0);
  lVar1 = 0x30;
  if (!bVar2) {
    lVar1 = 0x150;
  }
  return *(System_String_o **)((long)&__this->klass + lVar1);
}


// ===== public bool PHEKFMPOHBK()  [RVA 0x3342EB0]
// FightList$$PHEKFMPOHBK @ RVA 0x3342EB0

bool FightList__PHEKFMPOHBK(FightList_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Func_NIAFDKHDBMA__bool__o **ppSVar2;
  System_Func_NIAFDKHDBMA__bool__o *predicate;
  
  if ((DAT_045679a4 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<NIAFDKHDBMA>__);
    FUN_01bab630(&System_Func<NIAFDKHDBMA,_bool>_TypeInfo);
    FUN_01bab630(&Method_AFFHKININGD_<>c_MPDHKEFMGFL__);
    FUN_01bab630(&FightList_<>c_TypeInfo);
    DAT_045679a4 = 1;
  }
  source = (System_Collections_Generic_IEnumerable_TSource__o *)
           (*(__this->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                     (__this,(__this->klass->vtable)._4_NIKCNPMKAFK.method);
  if ((FightList_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FightList_<>c_TypeInfo);
  }
  predicate = FightList_<>c_TypeInfo->static_fields->__9__63_0;
  if (predicate == (System_Func_NIAFDKHDBMA__bool__o *)0x0) {
    if ((FightList_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(FightList_<>c_TypeInfo);
    }
    predicate = (System_Func_NIAFDKHDBMA__bool__o *)
                thunk_FUN_01bda818(System_Func<NIAFDKHDBMA,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
                    /* try { // try from 03442f94 to 03542fbb has its CatchHandler @ 034430f0 */
    ppSVar2 = &FightList_<>c_TypeInfo->static_fields->__9__63_0;
    *ppSVar2 = predicate;
    thunk_FUN_01c20e04(ppSVar2,predicate);
  }
  bVar1 = System_Linq_Enumerable__Any<object>
                    (source,(System_Func_TSource__bool__o *)predicate,
                     Method_System_Linq_Enumerable_Any<NIAFDKHDBMA>__);
  return bVar1;
}


// ===== public void PDLFEEJMHHF(bool CJNHFNHJHPE)  [RVA 0x3342FC4]
// FightList$$PDLFEEJMHHF @ RVA 0x3342FC4

void FightList__PDLFEEJMHHF(FightList_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).GFCLPPPMGAK = CJNHFNHJHPE;
  return;
}


// ===== public void NCENBOMEPBN(long LFJGFLNMBMC)  [RVA 0x3342FD0]
// FightList$$NCENBOMEPBN @ RVA 0x3342FD0

void FightList__NCENBOMEPBN(FightList_o *__this,int64_t LFJGFLNMBMC,MethodInfo *method)

{
  MethodInfo *method_00;
  PAMEPBLOLPB_o *__this_00;
  
  __this_00 = (__this->fields).JPBIBBBMCCD;
  if (__this_00 != (PAMEPBLOLPB_o *)0x0) {
                    /* try { // try from 03442ff0 to 03543017 has its CatchHandler @ 034430ec */
    if ((__this->fields).JDNKKGPNHPB == 7) {
      PAMEPBLOLPB__FHIKFLHPLEP(__this_00,LFJGFLNMBMC,(MethodInfo *)0x0);
      FightList__HOCKFCMKBDP(__this,method_00);
    }
    PAMEPBLOLPB__EFDNABIEPAP(__this_00,LFJGFLNMBMC,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 03443028 to 03543033 has its CatchHandler @ 034430e8 */
  return;
}


// ===== public string HBJFJLBICEI(string EBOHIPKPFDJ)  [RVA 0x3343030]
// FightList$$HBJFJLBICEI @ RVA 0x3343030

System_String_o *
FightList__HBJFJLBICEI(FightList_o *__this,System_String_o *EBOHIPKPFDJ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_JCHNBADDBGO__o *__this_00;
  char *pcVar3;
  System_String_o *pSVar4;
  Rule_c *pAVar5;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
                    /* try { // try from 03443038 to 03543043 has its CatchHandler @ 034430dc */
                    /* try { // try from 03443044 to 035430bf has its CatchHandler @ 03442e60 */
  if ((DAT_045679a5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ItemRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ItemRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ItemRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ItemRule>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045679a5 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).MIHBDEKEPEB;
  if (__this_00 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 034430c0 to 035430c3 has its CatchHandler @ 034430e4 */
                    /* try { // try from 034430c4 to 035430c7 has its CatchHandler @ 034430e0 */
                    /* try { // try from 034430c8 to 035430cb has its CatchHandler @ 03442e60 */
                    /* try { // try from 034430cc to 035430cf has its CatchHandler @ 034430d8 */
                    /* try { // try from 034430d0 to 03543107 has its CatchHandler @ 03442e60 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ItemRule>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034430cc with catch @ 034430d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03443038 with catch @ 034430dc
                        */
  local_50.fields._list = local_68.fields._list;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034430c4 with catch @ 034430e0
                        */
  local_50.fields._current = local_68.fields._current;
  while( true ) {
    do {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034430c0 with catch @ 034430e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03443028 with catch @ 034430e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03442ff0 with catch @ 034430ec
                        */
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<ItemRule>_MoveNext__);
      pIVar1 = local_50.fields._current;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03442f94 with catch @ 034430f0
                        */
      if (!bVar2) {
                    /* try { // try from 03443150 to 03543177 has its CatchHandler @ 0344318c */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<ItemRule>_Dispose__);
        return StringLiteral_1/*""*/;
      }
      if ((Rule_o *)local_50.fields._current == (Rule_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = Rule__BNNIDPDMOIL((Rule_o *)local_50.fields._current,(MethodInfo *)0x0);
                    /* try { // try from 03443108 to 0354310b has its CatchHandler @ 03443118 */
    } while ((!bVar2) || (*(char *)&((Rule_o *)((long)pIVar1 + 0x58))->monitor != '\0'));
    pAVar5 = ((Rule_o *)((long)pIVar1 + 0x58))->klass;
                    /* catch() { ... } // from try @ 03443108 with catch @ 03443118 */
    if (pAVar5 == (Rule_c *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pcVar3 = (pAVar5->_1).namespaze;
    if (pcVar3 == (char *)0x0) break;
    bVar2 = System_String__op_Equality
                      (*(System_String_o **)(pcVar3 + 0x30),EBOHIPKPFDJ,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar4 = (System_String_o *)(pAVar5->_1).name;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<ItemRule>_Dispose__)
      ;
      return pSVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03443178 to 03543183 has its CatchHandler @ 03442e60 */
  FUN_01bab8c8();
}


// ===== private string OKMNIODKDBA(Rule GOAHBPBJCKC)  [RVA 0x334244C]
// FightList$$OKMNIODKDBA @ RVA 0x334244C

System_String_o *
FightList__OKMNIODKDBA(FightList_o *__this,Rule_o *GOAHBPBJCKC,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  System_String_o *CJNHFNHJHPE;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045679a6 & 1) == 0) {
    FUN_01bab630(&RandomRule_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
                    /* try { // try from 0344249c to 035424c3 has its CatchHandler @ 03442d58 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_get_Current__);
    FUN_01bab630(&HIJGJNFACPG_TypeInfo);
    FUN_01bab630(&ICCLONHCNBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    FUN_01bab630(&PNEKMHMACLG_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
                    /* try { // try from 034424e4 to 035424ef has its CatchHandler @ 03442b48 */
    FUN_01bab630(&StringLiteral_22469/*"{br}"*/);
    DAT_045679a6 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (GOAHBPBJCKC == (Rule_o *)0x0) {
LAB_034427f4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar3 = Rule__NHGGBEACKBD(GOAHBPBJCKC,(MethodInfo *)0x0);
  if (iVar3 < 0x17) {
                    /* try { // try from 03442518 to 03542523 has its CatchHandler @ 03442c10 */
    if (iVar3 == 0x15) {
      bVar1 = (RandomRule_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (GOAHBPBJCKC->klass->_2).naturalAligment) &&
         ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)RandomRule_TypeInfo)) {
        pSVar4 = FightList__OKMNIODKDBA(__this,(Rule_o *)GOAHBPBJCKC[1].klass,method);
        return pSVar4;
      }
LAB_034427ec:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(GOAHBPBJCKC);
    }
    if (iVar3 != 0x16) {
      return (System_String_o *)0x0;
    }
                    /* try { // try from 0344253c to 03542547 has its CatchHandler @ 03442b40 */
    bVar1 = (PNEKMHMACLG_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)PNEKMHMACLG_TypeInfo)) goto LAB_034427ec;
                    /* try { // try from 0344255c to 03542567 has its CatchHandler @ 03442a78 */
    if (GOAHBPBJCKC[1].klass == (Rule_c *)0x0) goto LAB_034427f4;
                    /* try { // try from 03442568 to 035426b7 has its CatchHandler @ 03441efc */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)GOAHBPBJCKC[1].klass,
               Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__)
      ;
      return (System_String_o *)0x0;
    }
    pSVar4 = FightList__OKMNIODKDBA(__this,(Rule_o *)local_60.fields._current,method);
LAB_034425b0:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
  }
  else {
    if (iVar3 == 0x29) {
      bVar1 = (HIJGJNFACPG_TypeInfo->_2).naturalAligment;
      if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
         ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)HIJGJNFACPG_TypeInfo)) goto LAB_034427ec;
      if (*(char *)&GOAHBPBJCKC[1].fields.super.GMPFJFBFHCH != '\0') {
        if (GOAHBPBJCKC[1].klass == (Rule_c *)0x0) goto LAB_034427f4;
                    /* try { // try from 03442714 to 0354273f has its CatchHandler @ 03442a88 */
        pSVar4 = string_TypeInfo->static_fields->Empty;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_78,(System_Collections_Generic_List_object__o *)GOAHBPBJCKC[1].klass,
                   Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
        local_60.fields._index = local_78.fields._index;
        local_60.fields._version = local_78.fields._version;
        local_60.fields._list = local_78.fields._list;
                    /* try { // try from 03442740 to 03542747 has its CatchHandler @ 03442a70 */
        local_60.fields._current = local_78.fields._current;
                    /* try { // try from 03442748 to 035428c7 has its CatchHandler @ 03441efc */
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_60,
                                  Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__
                                 ), bVar2) {
          CJNHFNHJHPE = FightList__OKMNIODKDBA
                                  (__this,(Rule_o *)local_60.fields._current,method);
          bVar2 = PCOEHCPGBBG__EDHHJAMCOJH(CJNHFNHJHPE,(MethodInfo *)0x0);
          if (!bVar2) {
            bVar2 = PCOEHCPGBBG__EDHHJAMCOJH(pSVar4,(MethodInfo *)0x0);
            if (!bVar2) {
              pSVar4 = System_String__Concat(pSVar4,StringLiteral_22469/*"{br}"*/,(MethodInfo *)0x0);
            }
            method = (MethodInfo *)0x0;
            pSVar4 = System_String__Concat(pSVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
          }
        }
        goto LAB_034425b0;
      }
    }
    else {
      if (iVar3 != 0x17) {
        return (System_String_o *)0x0;
      }
      bVar1 = (ICCLONHCNBL_TypeInfo->_2).naturalAligment;
      if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
         ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)ICCLONHCNBL_TypeInfo)) goto LAB_034427ec;
      bVar2 = PCOEHCPGBBG__EDHHJAMCOJH((System_String_o *)GOAHBPBJCKC[1].klass,(MethodInfo *)0x0);
      if (!bVar2) {
        return (System_String_o *)GOAHBPBJCKC[1].klass;
      }
    }
    pSVar4 = string_TypeInfo->static_fields->Empty;
  }
  return pSVar4;
}


// ===== public void KIOMICIFKGC(ModelParameters KOHKKIKJLHB)  [RVA 0x33431FC]
// FightList$$KIOMICIFKGC @ RVA 0x33431FC

void FightList__KIOMICIFKGC(FightList_o *__this,ModelParameters_o *KOHKKIKJLHB,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((DAT_045679a7 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<ModelParameters>__);
    DAT_045679a7 = 1;
  }
  method_00 = Method_DJNBJHPDKDP_OFNFOGHFDML<ModelParameters>__;
  DJNBJHPDKDP__OFNFOGHFDML<object>
            ((System_Collections_Generic_List_T__o *)(__this->fields).LDDKNBHPPOK,
             (Il2CppObject *)KOHKKIKJLHB,
             (MethodInfo_1E833E4 *)Method_DJNBJHPDKDP_OFNFOGHFDML<ModelParameters>__);
  FightList__CFFIDFOGCFK(__this,KOHKKIKJLHB,method_00);
  return;
}


// ===== public void ANCGCCEOBAA(Rule GOAHBPBJCKC)  [RVA 0x333727C]
// FightList$$ANCGCCEOBAA @ RVA 0x333727C

void FightList__ANCGCCEOBAA(FightList_o *__this,Rule_o *GOAHBPBJCKC,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_AJNNHGGLGIF__o *DPMPNFJJENF;
  System_Collections_Generic_List_AGCDKMOOJGI__o *DPMPNFJJENF_00;
  System_Object_array *args;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  HIJGJNFACPG_c **ppHVar8;
  int32_t local_24;
  
  if ((DAT_045679a8 & 1) == 0) {
    FUN_01bab630(&RandomRule_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<RandomRule>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<Rule>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<ItemRule>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HIJGJNFACPG_TypeInfo);
    FUN_01bab630(&ItemRule_TypeInfo);
    FUN_01bab630(&Rule_NJHOEHEJNPH_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&PNEKMHMACLG_TypeInfo);
    FUN_01bab630(&StringLiteral_6353/*"FightList::putRule ERROR - wrong rule type {0}. Rule not added to fight."*/);
    DAT_045679a8 = 1;
  }
  if (GOAHBPBJCKC == (Rule_o *)0x0) {
LAB_03437554:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar3 = Rule__NHGGBEACKBD(GOAHBPBJCKC,(MethodInfo *)0x0);
  switch(iVar3) {
  case 0:
  case 1:
  case 2:
    bVar2 = (ItemRule_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar2) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)ItemRule_TypeInfo)) goto LAB_03437558;
    DPMPNFJJENF_00 = (System_Collections_Generic_List_AGCDKMOOJGI__o *)(__this->fields).MIHBDEKEPEB;
    puVar7 = &Method_DJNBJHPDKDP_OFNFOGHFDML<ItemRule>__;
    break;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2a:
    goto switchD_03437358_caseD_3;
  case 0x15:
    bVar2 = (RandomRule_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar2) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)RandomRule_TypeInfo)) goto LAB_03437558;
    DPMPNFJJENF_00 = (__this->fields).HFDOEONIBFA;
    puVar7 = &Method_DJNBJHPDKDP_OFNFOGHFDML<RandomRule>__;
    break;
  case 0x16:
    ppHVar8 = (HIJGJNFACPG_c **)&PNEKMHMACLG_TypeInfo;
    goto LAB_03437460;
  case 0x29:
    ppHVar8 = &HIJGJNFACPG_TypeInfo;
LAB_03437460:
    bVar2 = (((Il2CppClass *)*ppHVar8)->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar2) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)*ppHVar8)) {
LAB_03437558:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(GOAHBPBJCKC);
    }
    FightList__CGEOMKBMHCF(__this,(PNEKMHMACLG_o *)GOAHBPBJCKC,method);
    goto switchD_03437358_caseD_3;
  default:
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_24 = Rule__NHGGBEACKBD(GOAHBPBJCKC,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(Rule_NJHOEHEJNPH_TypeInfo,&local_24);
    if (args != (System_Object_array *)0x0) {
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
      UnityEngine_Debug__LogErrorFormat(StringLiteral_6353/*"FightList::putRule ERROR - wrong rule type {0}. Rule not added to fight."*/,args,(MethodInfo *)0x0);
      return;
    }
    goto LAB_03437554;
  }
  DJNBJHPDKDP__OFNFOGHFDML<object>
            ((System_Collections_Generic_List_T__o *)DPMPNFJJENF_00,(Il2CppObject *)GOAHBPBJCKC,
             (MethodInfo_1E833E4 *)*puVar7);
switchD_03437358_caseD_3:
  iVar1 = (GOAHBPBJCKC->fields).PJEIFMBEAKH;
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      DPMPNFJJENF = (__this->fields).KFHLHCHCMPM;
      goto LAB_03437390;
    }
    DJNBJHPDKDP__OFNFOGHFDML<object>
              ((System_Collections_Generic_List_T__o *)(__this->fields).KFHLHCHCMPM,
               (Il2CppObject *)GOAHBPBJCKC,Method_DJNBJHPDKDP_OFNFOGHFDML<Rule>__);
  }
  DPMPNFJJENF = (__this->fields).LJNCACBBIBD;
LAB_03437390:
  DJNBJHPDKDP__OFNFOGHFDML<object>
            ((System_Collections_Generic_List_T__o *)DPMPNFJJENF,(Il2CppObject *)GOAHBPBJCKC,
             Method_DJNBJHPDKDP_OFNFOGHFDML<Rule>__);
  DJNBJHPDKDP__OFNFOGHFDML<object>
            ((System_Collections_Generic_List_T__o *)(__this->fields).FEODLOLDCKM,
             (Il2CppObject *)GOAHBPBJCKC,Method_DJNBJHPDKDP_OFNFOGHFDML<Rule>__);
  return;
}

