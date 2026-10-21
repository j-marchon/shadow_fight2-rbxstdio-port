// TypeDefIndex 3358
// Namespace: 
// public class FightHolder : MonoBehaviour
// Fields:
//   private PreFight preFight; // 0x20
//   private Fight <CKOGELANOLD>k__BackingField; // 0x28
//   private static FightHolder <JPNBHEPPPNP>k__BackingField; // 0x0
//   public static FightList FightList; // 0x8

// ===== public void .ctor()  [RVA 0x35387BC]
// FightHolder$$.ctor @ RVA 0x35387BC

void FightHolder___ctor(FightHolder_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void JBJJOIHNIDF(FightHolder CJNHFNHJHPE)  [RVA 0x35387C4]
// FightHolder$$JBJJOIHNIDF @ RVA 0x35387C4

void FightHolder__JBJJOIHNIDF(FightHolder_o *CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04568aac & 1) == 0) {
    FUN_01bab630(&FightHolder_TypeInfo);
    DAT_04568aac = 1;
  }
  FightHolder_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04(FightHolder_TypeInfo->static_fields,CJNHFNHJHPE);
  return;
}


// ===== private void Start()  [RVA 0x353881C]
// FightHolder$$Start @ RVA 0x353881C

void FightHolder__Start(FightHolder_o *__this,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this_00;
  Fight_o *pFVar2;
  MethodInfo *extraout_x1;
  Fight_o **ppFVar3;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar4;
  FightList_o *FBFPLEFCDOK;
  
  if ((DAT_04568aad & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FightHolder_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_6345/*"FightHolder.Start preFight is null"*/);
    FUN_01bab630(&StringLiteral_6344/*"FightHolder - Start() - FightList is empty!"*/);
    DAT_04568aad = 1;
    method = extraout_x1;
  }
  if (FightHolder_TypeInfo->static_fields->FightList == (FightList_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_6344/*"FightHolder - Start() - FightList is empty!"*/,(MethodInfo *)0x0);
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 == (NDPMLPGANCI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    NDPMLPGANCI__EKPAFDJIAGI
              (__this_00,3,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true,(MethodInfo *)0x0
              );
  }
  pNVar4 = (__this->fields).preFight;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_6345/*"FightHolder.Start preFight is null"*/,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields).preFight;
  FBFPLEFCDOK = FightHolder_TypeInfo->static_fields->FightList;
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar2 = GameUtils__ECLNPCHEBFA(FBFPLEFCDOK,pNVar4,(MethodInfo *)0x0);
  ppFVar3 = &(__this->fields)._CKOGELANOLD_k__BackingField;
  *ppFVar3 = pFVar2;
  thunk_FUN_01c20e04(ppFVar3,pFVar2);
  return;
}


// ===== public static FightHolder get_Current()  [RVA 0x35389A4]
// FightHolder$$get_Current @ RVA 0x35389A4

FightHolder_o * FightHolder__get_Current(MethodInfo *method)

{
  if ((DAT_04568aae & 1) == 0) {
    FUN_01bab630(&FightHolder_TypeInfo);
    DAT_04568aae = 1;
  }
  return FightHolder_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
}


// ===== private void HKELKJHHEHH(Fight CJNHFNHJHPE)  [RVA 0x35389EC]
// FightHolder$$HKELKJHHEHH @ RVA 0x35389EC

void FightHolder__HKELKJHHEHH(FightHolder_o *__this,Fight_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._CKOGELANOLD_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void FixedUpdate()  [RVA 0x35389F4]
// FightHolder$$FixedUpdate @ RVA 0x35389F4

void FightHolder__FixedUpdate(FightHolder_o *__this,MethodInfo *method)

{
  Fight_o *__this_00;
  
  __this_00 = (__this->fields)._CKOGELANOLD_k__BackingField;
  if (__this_00 != (Fight_o *)0x0) {
    Fight__MGEMOHEBNPF(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private void Awake()  [RVA 0x3538A08]
// FightHolder$$Awake @ RVA 0x3538A08

void FightHolder__Awake(FightHolder_o *__this,MethodInfo *method)

{
  if (DAT_04568b3d == '\0') {
    FUN_01bab630(&FightHolder_TypeInfo);
    DAT_04568b3d = '\x01';
  }
  FightHolder_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField = __this;
  thunk_FUN_01c20e04(FightHolder_TypeInfo->static_fields,__this);
  return;
}


// ===== public Fight get_Fight()  [RVA 0x3538A60]
// FightHolder$$get_Fight @ RVA 0x3538A60

Fight_o * FightHolder__get_Fight(FightHolder_o *__this,MethodInfo *method)

{
  return (__this->fields)._CKOGELANOLD_k__BackingField;
}

