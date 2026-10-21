// TypeDefIndex 3337
// Namespace: 
// public class StepBar : ProgressBar
// Fields:
//   private List<int> DLBOAANKFLC; // 0x48

// ===== public void .ctor()  [RVA 0x352E6F4]
// StepBar$$.ctor @ RVA 0x352E6F4

void StepBar___ctor(StepBar_o *__this,MethodInfo *method)

{
  ProgressBar___ctor((ProgressBar_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void SetValue(float CJNHFNHJHPE, float PNEIGGOFIOA = 0, Action DLPCMOHKKMH)  [RVA 0x352E6FC]
// StepBar$$SetValue @ RVA 0x352E6FC

void StepBar__SetValue(StepBar_o *__this,float CJNHFNHJHPE,float PNEIGGOFIOA,
                      System_Action_o *DLPCMOHKKMH,MethodInfo *method)

{
  int32_t CJNHFNHJHPE_00;
  float NBHHBBOJJME;
  
                    /* try { // try from 0362e714 to 0372e717 has its CatchHandler @ 0362e788 */
                    /* try { // try from 0362e718 to 0372e71b has its CatchHandler @ 0362e784 */
  CJNHFNHJHPE_00 = -0x80000000;
  if (CJNHFNHJHPE != INFINITY) {
    CJNHFNHJHPE_00 = (int)CJNHFNHJHPE;
  }
  NBHHBBOJJME = StepBar__AJKDJMLMJKA(__this,CJNHFNHJHPE_00,method);
                    /* try { // try from 0362e730 to 0372e74f has its CatchHandler @ 0362e7fc */
  ProgressBarBase__SetValue
            ((ProgressBarBase_o *)__this,NBHHBBOJJME,PNEIGGOFIOA,DLPCMOHKKMH,(MethodInfo *)0x0);
  return;
}


// ===== public int GetPercentIndex(float IPBCCKOHOBD)  [RVA 0x352E7DC]
// StepBar$$GetPercentIndex @ RVA 0x352E7DC

int32_t StepBar__GetPercentIndex(StepBar_o *__this,float IPBCCKOHOBD,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_int__o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  undefined1 local_50 [16];
  undefined8 local_40;
  
                    /* try { // try from 0362e7e0 to 0372e7e7 has its CatchHandler @ 0362e7fc */
                    /* try { // try from 0362e7e8 to 0372e7f3 has its CatchHandler @ 0362e3cc */
                    /* try { // try from 0362e7f4 to 0372e7fb has its CatchHandler @ 0362e7fc */
                    /* catch() { ... } // from try @ 0362e730 with catch @ 0362e7fc
                       catch() { ... } // from try @ 0362e7e0 with catch @ 0362e7fc
                       catch() { ... } // from try @ 0362e7f4 with catch @ 0362e7fc */
  if ((DAT_04568a42 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_GetEnumerator__);
    DAT_04568a42 = 1;
    method = extraout_x1;
  }
  local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_50._8_4_ = 0;
  local_50._12_4_ = 0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  __this_00 = (__this->fields).DLBOAANKFLC;
  if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<int>__GetEnumerator
            (&local_68,__this_00,Method_System_Collections_Generic_List<int>_GetEnumerator__);
  iVar2 = 0;
  local_50._8_4_ = local_68.fields._index;
  local_50._12_4_ = local_68.fields._version;
  local_50._0_8_ = local_68.fields._list;
  local_40 = local_68.fields._current;
  while (bVar1 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                           ((System_Collections_Generic_List_Enumerator_int__o *)local_50,
                            Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__),
        bVar1) {
    if ((float)(int32_t)local_40 == IPBCCKOHOBD) goto LAB_0362e8ac;
    iVar2 = iVar2 + 1;
  }
  iVar2 = -1;
LAB_0362e8ac:
  System_Collections_Generic_List_Enumerator<int>__Dispose
            ((System_Collections_Generic_List_Enumerator_int__o *)local_50,
             Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
  return iVar2;
}


// ===== public override float get_Value()  [RVA 0x352E940]
// StepBar$$get_Value @ RVA 0x352E940

float StepBar__get_Value(StepBar_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = StepBar__GetPercentIndex(__this,(__this->fields).super.super.JGFKHMMNJBA,method);
  return (float)iVar1;
}


// ===== public override void set_Value(float CJNHFNHJHPE)  [RVA 0x352E958]
// StepBar$$set_Value @ RVA 0x352E958

void StepBar__set_Value(StepBar_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x0362e968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._8_SetValue.methodPtr)
            (CJNHFNHJHPE,0,__this,0,(__this->klass->vtable)._8_SetValue.method);
  return;
}


// ===== public override void Init()  [RVA 0x352E96C]
// StepBar$$Init @ RVA 0x352E96C

void StepBar__Init(StepBar_o *__this,MethodInfo *method)

{
  ProgressBar__Init((ProgressBar_o *)__this,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0362e998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._11_SetValueBorders.methodPtr)
            (0,0x42c80000,__this,(__this->klass->vtable)._11_SetValueBorders.method);
  return;
}


// ===== public void SetPercent(List<int> CHEOBBIJMDP)  [RVA 0x352E99C]
// StepBar$$SetPercent @ RVA 0x352E99C

void StepBar__SetPercent(StepBar_o *__this,System_Collections_Generic_List_int__o *CHEOBBIJMDP,
                        MethodInfo *method)

{
  (__this->fields).DLBOAANKFLC = CHEOBBIJMDP;
  thunk_FUN_01c20e04();
                    /* WARNING: Could not recover jumptable at 0x0362e9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._7_set_Value.methodPtr)
            (0,__this,(__this->klass->vtable)._7_set_Value.method);
  return;
}


// ===== private float AJKDJMLMJKA(int CJNHFNHJHPE)  [RVA 0x352E750]
// StepBar$$AJKDJMLMJKA @ RVA 0x352E750

float StepBar__AJKDJMLMJKA(StepBar_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  int32_t index;
  int iVar1;
  int32_t iVar2;
  System_Collections_Generic_List_int__o *__this_00;
  float fVar3;
  
                    /* try { // try from 0362e750 to 0372e757 has its CatchHandler @ 0362e774 */
                    /* try { // try from 0362e758 to 0372e7ab has its CatchHandler @ 0362e3cc */
                    /* catch() { ... } // from try @ 0362e6e0 with catch @ 0362e75c */
                    /* catch() { ... } // from try @ 0362e568 with catch @ 0362e768 */
  if ((DAT_04568a43 & 1) == 0) {
                    /* catch() { ... } // from try @ 0362e57c with catch @ 0362e76c */
                    /* catch() { ... } // from try @ 0362e68c with catch @ 0362e770 */
                    /* catch() { ... } // from try @ 0362e750 with catch @ 0362e774 */
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
                    /* catch() { ... } // from try @ 0362e528 with catch @ 0362e778 */
                    /* catch() { ... } // from try @ 0362e544 with catch @ 0362e77c */
                    /* catch() { ... } // from try @ 0362e558 with catch @ 0362e780 */
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Item__);
                    /* catch() { ... } // from try @ 0362e718 with catch @ 0362e784 */
                    /* catch() { ... } // from try @ 0362e714 with catch @ 0362e788 */
    DAT_04568a43 = 1;
  }
  __this_00 = (__this->fields).DLBOAANKFLC;
  if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
                    /* catch() { ... } // from try @ 0362e504 with catch @ 0362e794 */
    iVar1 = (__this_00->fields)._size;
    if (iVar1 == 0) {
      fVar3 = 0.0;
    }
    else {
                    /* try { // try from 0362e7ac to 0372e7af has its CatchHandler @ 0362e7d0 */
      iVar2 = CJNHFNHJHPE;
      if (iVar1 <= CJNHFNHJHPE) {
        iVar2 = iVar1 + -1;
      }
                    /* try { // try from 0362e7b0 to 0372e7df has its CatchHandler @ 0362e3cc */
      index = 0;
      if (-1 < CJNHFNHJHPE) {
        index = iVar2;
      }
      iVar2 = System_Collections_Generic_List<int>__get_Item
                        (__this_00,index,Method_System_Collections_Generic_List<int>_get_Item__);
      fVar3 = (float)iVar2;
    }
                    /* catch() { ... } // from try @ 0362e7ac with catch @ 0362e7d0 */
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

