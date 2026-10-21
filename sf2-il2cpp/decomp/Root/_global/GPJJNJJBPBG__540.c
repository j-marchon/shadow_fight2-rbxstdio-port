// TypeDefIndex 540
// Namespace: 
// public class GPJJNJJBPBG : KJFPGDFNFCL
// Fields:

// ===== public override bool DGCODECJJCC(ECAIEGNAOAL KDFMDHADHMD)  [RVA 0x359B034]
// GPJJNJJBPBG$$DGCODECJJCC @ RVA 0x359B034

bool GPJJNJJBPBG__DGCODECJJCC(GPJJNJJBPBG_o *__this,ECAIEGNAOAL_o *KDFMDHADHMD,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  GPJJNJJBPBG_o *__this_00;
  MethodInfo *in_x3;
  
  bVar1 = KJFPGDFNFCL__DGCODECJJCC((KJFPGDFNFCL_o *)__this,KDFMDHADHMD,(MethodInfo *)0x0);
  if ((bVar1) &&
     (bVar2 = System_String__IsNullOrEmpty((__this->fields).super.DHKOGAHJNMK,(MethodInfo *)0x0),
     !bVar2)) {
    if (KDFMDHADHMD == (ECAIEGNAOAL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (GPJJNJJBPBG_o *)
                KJFPGDFNFCL__ONCFEIGIBGB
                          ((KDFMDHADHMD->fields).KPFGHBEKJIM,(__this->fields).super.BEMCNJHEADJ,
                           (MethodInfo *)0x0);
    bVar1 = GPJJNJJBPBG__PKPGEKHEIBE
                      (__this_00,(System_Collections_Generic_List_string__o *)__this_00,
                       (__this->fields).super.DHKOGAHJNMK,in_x3);
    bVar1 = bVar1 != ((__this->fields).super.GBBHFPBFOPI != false);
  }
  return bVar1;
}


// ===== public void .ctor()  [RVA 0x359B188]
// GPJJNJJBPBG$$.ctor @ RVA 0x359B188

void GPJJNJJBPBG___ctor(GPJJNJJBPBG_o *__this,MethodInfo *method)

{
  KJFPGDFNFCL___ctor((KJFPGDFNFCL_o *)__this,9,(MethodInfo *)0x0);
  return;
}


// ===== private bool PKPGEKHEIBE(List<string> FPEHEJBLCAO, string KIPMHPNBCBO)  [RVA 0x359B0B0]
// GPJJNJJBPBG$$PKPGEKHEIBE @ RVA 0x359B0B0

bool GPJJNJJBPBG__PKPGEKHEIBE
               (GPJJNJJBPBG_o *__this,System_Collections_Generic_List_string__o *FPEHEJBLCAO,
               System_String_o *KIPMHPNBCBO,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  System_String_o *pSVar4;
  int index;
  
  if ((DAT_04568dc4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    __this = (GPJJNJJBPBG_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_04568dc4 = 1;
  }
  if (FPEHEJBLCAO == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  iVar1 = (FPEHEJBLCAO->fields)._size;
  if (iVar1 < 1) {
    bVar3 = false;
  }
  else {
    pSVar4 = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)FPEHEJBLCAO,0,
                        Method_System_Collections_Generic_List<string>_get_Item__);
    bVar3 = System_String__op_Equality(pSVar4,KIPMHPNBCBO,(MethodInfo *)0x0);
    if (bVar3) {
      bVar3 = true;
    }
    else {
      iVar2 = 1;
      do {
        index = iVar2;
        if (iVar1 == index) break;
        pSVar4 = (System_String_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)FPEHEJBLCAO,index,
                            Method_System_Collections_Generic_List<string>_get_Item__);
        bVar3 = System_String__op_Equality(pSVar4,KIPMHPNBCBO,(MethodInfo *)0x0);
        iVar2 = index + 1;
      } while (!bVar3);
      bVar3 = index < iVar1;
    }
  }
  return bVar3;
}

