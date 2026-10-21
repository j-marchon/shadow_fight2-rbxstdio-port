// KPLJFEEMAOH$$.ctor @ RVA 0x347D8B8

void KPLJFEEMAOH___ctor(KPLJFEEMAOH_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  UniRx_ReactiveProperty_HCBNEFEHCBM__o *__this_00;
  UniRx_ReactiveProperty_HCBNEFEHCBM__o **ppUVar2;
  UniRx_Subject_HCBNEFEHCBM__o *__this_01;
  UniRx_Subject_HCBNEFEHCBM__o **ppUVar3;
  UniRx_SerialDisposable_o *__this_02;
  UniRx_SerialDisposable_o **ppUVar4;
  GEJEGHKMPJM_o *pGVar5;
  GEJEGHKMPJM_o **ppGVar6;
  
                    /* try { // try from 0357d8c8 to 0367d8cf has its CatchHandler @ 0357dafc */
                    /* try { // try from 0357d8d0 to 0367d8e3 has its CatchHandler @ 0357daf8 */
  if ((DAT_04568367 & 1) == 0) {
                    /* try { // try from 0357d8e8 to 0367d8f3 has its CatchHandler @ 0357dae8 */
    FUN_01bab630(&Method_UniRx_ReactiveProperty<HCBNEFEHCBM>__ctor__);
                    /* try { // try from 0357d8f4 to 0367d8ff has its CatchHandler @ 0357dac8 */
    FUN_01bab630(&UniRx_ReactiveProperty<HCBNEFEHCBM>_TypeInfo);
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
                    /* try { // try from 0357d910 to 0367d917 has its CatchHandler @ 0357dae0 */
    FUN_01bab630(&Method_UniRx_Subject<HCBNEFEHCBM>__ctor__);
                    /* try { // try from 0357d920 to 0367d927 has its CatchHandler @ 0357da98 */
    FUN_01bab630(&UniRx_Subject<HCBNEFEHCBM>_TypeInfo);
    FUN_01bab630(&StringLiteral_16425);
                    /* try { // try from 0357d938 to 0367d93f has its CatchHandler @ 0357daa4 */
    DAT_04568367 = 1;
  }
                    /* try { // try from 0357d944 to 0367d94b has its CatchHandler @ 0357daa0 */
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
                    /* try { // try from 0357d95c to 0367d963 has its CatchHandler @ 0357dab8 */
                    /* try { // try from 0357d964 to 0367d977 has its CatchHandler @ 0357da94 */
                    /* try { // try from 0357d97c to 0367d987 has its CatchHandler @ 0357da74 */
                    /* try { // try from 0357d988 to 0367d993 has its CatchHandler @ 0357da78 */
      pSVar1->m_Items[0] = StringLiteral_16425;
      thunk_FUN_01c20e04();
      (__this->fields).LNONGJEDIFI = pSVar1;
                    /* try { // try from 0357d9a0 to 0367d9ab has its CatchHandler @ 0357da70 */
      thunk_FUN_01c20e04(&__this->fields,pSVar1);
                    /* try { // try from 0357d9ac to 0367da37 has its CatchHandler @ 0357d3f0 */
      __this_00 = (UniRx_ReactiveProperty_HCBNEFEHCBM__o *)
                  thunk_FUN_01bda818(UniRx_ReactiveProperty<HCBNEFEHCBM>_TypeInfo);
      UniRx_ReactiveProperty<object>___ctor
                ((UniRx_ReactiveProperty_T__o *)__this_00,
                 Method_UniRx_ReactiveProperty<HCBNEFEHCBM>__ctor__);
      ppUVar2 = &(__this->fields).OMMGLBIMPDI;
      *ppUVar2 = __this_00;
      thunk_FUN_01c20e04(ppUVar2,__this_00);
      __this_01 = (UniRx_Subject_HCBNEFEHCBM__o *)
                  thunk_FUN_01bda818(UniRx_Subject<HCBNEFEHCBM>_TypeInfo);
      UniRx_Subject<object>___ctor
                ((UniRx_Subject_T__o *)__this_01,Method_UniRx_Subject<HCBNEFEHCBM>__ctor__);
      ppUVar3 = &(__this->fields).OAGOJKAFAEA;
      *ppUVar3 = __this_01;
      thunk_FUN_01c20e04(ppUVar3,__this_01);
      __this_02 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo);
      UniRx_SerialDisposable___ctor(__this_02,(MethodInfo *)0x0);
      ppUVar4 = &(__this->fields).PEEEGLKJLKG;
      *ppUVar4 = __this_02;
      thunk_FUN_01c20e04(ppUVar4,__this_02);
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      pGVar5 = GEJEGHKMPJM__AIHNLLGNBLC((MethodInfo *)0x0);
      ppGVar6 = &(__this->fields).PEEHIKFEJAJ;
      *ppGVar6 = pGVar5;
                    /* try { // try from 0357da38 to 0367da3b has its CatchHandler @ 0357db24 */
                    /* try { // try from 0357da3c to 0367da3f has its CatchHandler @ 0357db1c */
                    /* try { // try from 0357da40 to 0367da43 has its CatchHandler @ 0357db18 */
                    /* try { // try from 0357da44 to 0367da47 has its CatchHandler @ 0357dad0 */
      thunk_FUN_01c20e04(ppGVar6,pGVar5);
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0357da4c to 0367da4f has its CatchHandler @ 0357dab0 */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0357da48 to 0367da4b has its CatchHandler @ 0357dacc */
  FUN_01bab8c8();
}

