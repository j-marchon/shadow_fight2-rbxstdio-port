// TypeDefIndex 1304
// Namespace: 
// public class BPDOKJBGHAG
// Fields:
//   public string BGHFADDGPAD; // 0x10
//   public string HNNFBCMNGIA; // 0x18
//   public List<PONNKDFAMFM> NBDCLLADIFL; // 0x20

// ===== public void .ctor()  [RVA 0x3155978]
// BPDOKJBGHAG$$.ctor @ RVA 0x3155978

void BPDOKJBGHAG___ctor(BPDOKJBGHAG_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_00;
  System_Collections_Generic_List_PONNKDFAMFM__o **ppSVar1;
  
  if ((DAT_0456683a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PONNKDFAMFM>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_0456683a = 1;
  }
  (__this->fields).BGHFADDGPAD = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
                    /* try { // try from 032559f4 to 033559fb has its CatchHandler @ 03256680 */
  (__this->fields).HNNFBCMNGIA = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
                    /* try { // try from 03255a0c to 03355a13 has its CatchHandler @ 03256668 */
  __this_00 = (System_Collections_Generic_List_PONNKDFAMFM__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PONNKDFAMFM>_TypeInfo);
                    /* try { // try from 03255a14 to 03355a2f has its CatchHandler @ 03256710 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PONNKDFAMFM>__ctor__);
  ppSVar1 = &(__this->fields).NBDCLLADIFL;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* try { // try from 03255a3c to 03355a43 has its CatchHandler @ 03256674 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x3155A44]
// BPDOKJBGHAG$$RandomizeObscuredVars @ RVA 0x3155A44

void BPDOKJBGHAG__RandomizeObscuredVars(BPDOKJBGHAG_o *__this,MethodInfo *method)

{
  System_Action_PONNKDFAMFM__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_00;
  System_Action_PONNKDFAMFM__o *action;
  
                    /* try { // try from 03255a50 to 03355a53 has its CatchHandler @ 0325667c */
  if ((DAT_0456683b & 1) == 0) {
    FUN_01bab630(&System_Action<PONNKDFAMFM>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_ForEach__);
    FUN_01bab630(&Method_BPDOKJBGHAG_<>c_EOPCNNIGHFB__);
                    /* try { // try from 03255a8c to 03355ab3 has its CatchHandler @ 03256220 */
    FUN_01bab630(&BPDOKJBGHAG_<>c_TypeInfo);
    DAT_0456683b = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).NBDCLLADIFL;
  if ((BPDOKJBGHAG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BPDOKJBGHAG_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = BPDOKJBGHAG_<>c_TypeInfo->static_fields->__9__3_0;
  if (action == (System_Action_PONNKDFAMFM__o *)0x0) {
    if ((BPDOKJBGHAG_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(BPDOKJBGHAG_<>c_TypeInfo,method);
    }
                    /* try { // try from 03255ae8 to 03355b13 has its CatchHandler @ 032561ec */
    action = (System_Action_PONNKDFAMFM__o *)thunk_FUN_01bda818(System_Action<PONNKDFAMFM>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &BPDOKJBGHAG_<>c_TypeInfo->static_fields->__9__3_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<PONNKDFAMFM>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AADEKPLBEEO(int GMALOFEKAHI = 0)  [RVA 0x3155B48]
// BPDOKJBGHAG$$AADEKPLBEEO @ RVA 0x3155B48

void BPDOKJBGHAG__AADEKPLBEEO(BPDOKJBGHAG_o *__this,int32_t GMALOFEKAHI,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_00;
  int64_t iVar2;
  Il2CppClass *pIVar3;
  undefined1 local_c0 [32];
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  undefined1 local_80 [32];
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
                    /* try { // try from 03255b54 to 03355b5b has its CatchHandler @ 03256158 */
                    /* try { // try from 03255b64 to 03355b6b has its CatchHandler @ 03256160 */
                    /* try { // try from 03255b6c to 03355b77 has its CatchHandler @ 0325615c */
  if ((DAT_0456683c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__);
                    /* try { // try from 03255b88 to 03355b8f has its CatchHandler @ 03256170 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_get_Current__);
                    /* try { // try from 03255b98 to 03355b9f has its CatchHandler @ 03256154 */
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
                    /* try { // try from 03255ba0 to 03355bab has its CatchHandler @ 03256168 */
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_0456683c = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 03255bbc to 03355bc3 has its CatchHandler @ 0325616c */
  __this_00 = (__this->fields).NBDCLLADIFL;
  if (__this_00 != (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0) {
                    /* try { // try from 03255bcc to 03355bd3 has its CatchHandler @ 03256164 */
                    /* try { // try from 03255bd4 to 03355bf7 has its CatchHandler @ 0325622c */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a0,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
    local_60.fields._index = local_a0.fields._index;
    local_60.fields._version = local_a0.fields._version;
    local_60.fields._list = local_a0.fields._list;
    local_60.fields._current = local_a0.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
        return;
      }
                    /* try { // try from 03255c10 to 03355c87 has its CatchHandler @ 03256714 */
      if (local_60.fields._current == (Il2CppObject *)0x0) break;
      pIVar3 = local_60.fields._current[1].klass;
      if (pIVar3 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      local_80._24_8_ = (pIVar3->_1).interopData;
      local_80._16_8_ = (pIVar3->_1).typeMetadataHandle;
      local_80._8_8_ = (pIVar3->_1).generic_class;
      local_80._0_8_ = (pIVar3->_1).parent;
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)local_80,
                         (MethodInfo *)0x0);
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = GameUtils__ADEEECDDBPN(iVar2,GMALOFEKAHI,(MethodInfo *)0x0);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)local_c0,iVar2,
                 (MethodInfo *)0x0);
      (pIVar3->_1).generic_class = (void *)local_c0._8_8_;
      (pIVar3->_1).parent = (Il2CppClass *)local_c0._0_8_;
      (pIVar3->_1).interopData = (void *)local_c0._24_8_;
      (pIVar3->_1).typeMetadataHandle = (void *)local_c0._16_8_;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03255ca0 to 03355ca7 has its CatchHandler @ 03256688 */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

