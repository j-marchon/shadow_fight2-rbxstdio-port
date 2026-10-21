// TypeDefIndex 2778
// Namespace: 
// public class GameUtils.ABAALAENAKC
// Fields:
//   public int MAOLKFCJGLD; // 0x10
//   public int HPPAGNLEOEJ; // 0x14
//   public string GJFGFNAGPEO; // 0x18
//   public int IDHCEJLJIGI; // 0x20
//   public int HPACPFLKHPK; // 0x24
//   public bool EOLGPJMKFNA; // 0x28
//   public int FNLILHMAONM; // 0x2C
//   public List<IHMIMECHIAN> OBLIJEFDJGN; // 0x30
//   public List<BJEFHIBMHEJ> GJBLBEALOBO; // 0x38

// ===== public void DGLJCGNHLIG()  [RVA 0x34126B0]
// GameUtils.ABAALAENAKC$$DGLJCGNHLIG @ RVA 0x34126B0

void GameUtils_ABAALAENAKC__DGLJCGNHLIG(GameUtils_ABAALAENAKC_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_IHMIMECHIAN__o *pSVar2;
  System_Collections_Generic_List_BJEFHIBMHEJ__o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_0456808f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IHMIMECHIAN>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BJEFHIBMHEJ>_Clear__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456808f = 1;
  }
  (__this->fields).MAOLKFCJGLD = 0;
  (__this->fields).HPPAGNLEOEJ = 0;
  ppSVar4 = &(__this->fields).GJFGFNAGPEO;
  *ppSVar4 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar4);
  pSVar2 = (__this->fields).OBLIJEFDJGN;
  (__this->fields).FNLILHMAONM = 0;
  (__this->fields).IDHCEJLJIGI = 0;
  (__this->fields).HPACPFLKHPK = 0;
  (__this->fields).EOLGPJMKFNA = false;
  if (pSVar2 != (System_Collections_Generic_List_IHMIMECHIAN__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar3 = (__this->fields).GJBLBEALOBO;
    if (pSVar3 != (System_Collections_Generic_List_BJEFHIBMHEJ__o *)0x0) {
      iVar1 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AJNEBENFIAJ()  [RVA 0x3412790]
// GameUtils.ABAALAENAKC$$AJNEBENFIAJ @ RVA 0x3412790

void GameUtils_ABAALAENAKC__AJNEBENFIAJ(GameUtils_ABAALAENAKC_o *__this,MethodInfo *method)

{
  PIADCKMDDAK_o *__this_00;
  SFRequestSender_o *__this_01;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568090 & 1) == 0) {
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_04568090 = 1;
    method = extraout_x1;
  }
  __this_00 = (PIADCKMDDAK_o *)thunk_FUN_01bda818(PIADCKMDDAK_TypeInfo,method);
  PIADCKMDDAK___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (PIADCKMDDAK_o *)0x0) {
    PIADCKMDDAK__HCOCAAIGNNL(__this_00,(__this->fields).GJFGFNAGPEO,(MethodInfo *)0x0);
    (__this_00->fields).GDKPGIBMFPA = (__this->fields).IDHCEJLJIGI;
    __this_01 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    if (__this_01 != (SFRequestSender_o *)0x0) {
      SFRequestSender__HAGMEEKBHFF
                (__this_01,(__this->fields).MAOLKFCJGLD,(__this->fields).HPPAGNLEOEJ,__this_00,
                 (__this->fields).HPACPFLKHPK,(__this->fields).OBLIJEFDJGN,
                 (__this->fields).GJBLBEALOBO,(__this->fields).EOLGPJMKFNA,
                 (__this->fields).FNLILHMAONM,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x341283C]
// GameUtils.ABAALAENAKC$$.ctor @ RVA 0x341283C

void GameUtils_ABAALAENAKC___ctor(GameUtils_ABAALAENAKC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_IHMIMECHIAN__o *__this_00;
  System_Collections_Generic_List_IHMIMECHIAN__o **ppSVar1;
  System_Collections_Generic_List_BJEFHIBMHEJ__o *__this_01;
  System_Collections_Generic_List_BJEFHIBMHEJ__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04568091 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BJEFHIBMHEJ>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHMIMECHIAN>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IHMIMECHIAN>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<BJEFHIBMHEJ>_TypeInfo);
    DAT_04568091 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_IHMIMECHIAN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IHMIMECHIAN>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IHMIMECHIAN>__ctor__);
  ppSVar1 = &(__this->fields).OBLIJEFDJGN;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_BJEFHIBMHEJ__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BJEFHIBMHEJ>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<BJEFHIBMHEJ>__ctor__);
  ppSVar2 = &(__this->fields).GJBLBEALOBO;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  GameUtils_ABAALAENAKC__DGLJCGNHLIG(__this,method_00);
  return;
}


// ===== public void JDDDMHPFHEN(object IMMNELPBGIF)  [RVA 0x3412920]
// GameUtils.ABAALAENAKC$$JDDDMHPFHEN @ RVA 0x3412920

void GameUtils_ABAALAENAKC__JDDDMHPFHEN
               (GameUtils_ABAALAENAKC_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    return;
  }
  GameUtils_ABAALAENAKC__AJNEBENFIAJ(__this,(MethodInfo *)0x0);
  return;
}

