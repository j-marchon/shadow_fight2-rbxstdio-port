// TypeDefIndex 2920
// Namespace: 
// public class IHDFIJGDCBL
// Fields:
//   private string NPFMOEOIEKM; // 0x10
//   public string OPBJKMDPKLG; // 0x18
//   public string JMGIACHBIKG; // 0x20
//   public int GKLKOCOKMDB; // 0x28
//   public bool CHLMHEGKKNH; // 0x2C
//   public bool OOBNCDKIDFK; // 0x2D
//   public bool MLHNMNKFDLN; // 0x2E
//   public bool GCPFHICEKFL; // 0x2F
//   public string KEDIHMHFAHO; // 0x30
//   public string FFDAPDCFBDO; // 0x38

// ===== public void .ctor()  [RVA 0x3450C54]
// IHDFIJGDCBL$$.ctor @ RVA 0x3450C54

void IHDFIJGDCBL___ctor(IHDFIJGDCBL_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).GKLKOCOKMDB = 0;
  (__this->fields).CHLMHEGKKNH = false;
  (__this->fields).OOBNCDKIDFK = false;
  (__this->fields).MLHNMNKFDLN = false;
  (__this->fields).GCPFHICEKFL = false;
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x3450C70]
// IHDFIJGDCBL$$KCHJCGEMCGE @ RVA 0x3450C70

System_String_o * IHDFIJGDCBL__KCHJCGEMCGE(IHDFIJGDCBL_o *__this,MethodInfo *method)

{
  return (__this->fields).NPFMOEOIEKM;
}


// ===== public void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x3450C78]
// IHDFIJGDCBL$$HCOCAAIGNNL @ RVA 0x3450C78

void IHDFIJGDCBL__HCOCAAIGNNL(IHDFIJGDCBL_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).NPFMOEOIEKM = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string IBBMFNFIKPE(int CJNHFNHJHPE)  [RVA 0x3450C80]
// IHDFIJGDCBL$$IBBMFNFIKPE @ RVA 0x3450C80

System_String_o *
IHDFIJGDCBL__IBBMFNFIKPE(IHDFIJGDCBL_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  int length;
  int index;
  uint16_t uVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_48;
  int32_t local_44;
  
  local_44 = CJNHFNHJHPE;
  if ((DAT_045682a8 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&StringLiteral_1377/*"."*/);
    DAT_045682a8 = 1;
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_48 = -CJNHFNHJHPE;
  if (-1 < CJNHFNHJHPE) {
    local_48 = CJNHFNHJHPE;
  }
  pSVar2 = System_Int32__ToString((int32_t)&local_48,(MethodInfo *)0x0);
  pSVar3 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
  if ((pSVar2 != (System_String_o *)0x0) && (pSVar3 != (System_String_o *)0x0)) {
    iVar4 = (__this->fields).GKLKOCOKMDB;
    if ((iVar4 != 0) && (iVar4 < (pSVar2->fields)._stringLength)) {
      length = (pSVar3->fields)._stringLength;
      pSVar2 = System_String__Insert(pSVar3,length - iVar4,StringLiteral_1377/*"."*/,(MethodInfo *)0x0);
      if ((pSVar2 == (System_String_o *)0x0) ||
         (pSVar3 = System_String__Substring
                             (pSVar2,length - (__this->fields).GKLKOCOKMDB,length,(MethodInfo *)0x0)
         , pSVar3 == (System_String_o *)0x0)) goto LAB_03550e20;
      iVar4 = (pSVar3->fields)._stringLength + -1;
      if (iVar4 < 1) {
        iVar6 = 0;
      }
      else {
        iVar5 = 0;
        index = iVar4;
        do {
          uVar1 = System_String__get_Chars(pSVar3,index,(MethodInfo *)0x0);
          if ((uVar1 != 0x30) &&
             (uVar1 = System_String__get_Chars(pSVar3,index,(MethodInfo *)0x0), iVar6 = iVar5,
             uVar1 != 0x2e)) break;
          index = index + -1;
          iVar5 = iVar5 + 1;
          iVar6 = iVar4;
        } while (index != 0);
        iVar4 = (pSVar3->fields)._stringLength + -1;
      }
      pSVar3 = System_String__Substring
                         (pSVar2,0,((length - iVar6) - (uint)(iVar4 == iVar6)) + 1,(MethodInfo *)0x0
                         );
    }
    pSVar2 = System_String__Concat(pSVar3,(__this->fields).KEDIHMHFAHO,(MethodInfo *)0x0);
    return pSVar2;
  }
LAB_03550e20:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

