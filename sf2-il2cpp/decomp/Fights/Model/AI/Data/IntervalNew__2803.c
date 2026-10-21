// Original name: Nekki.SF2.Core.Fights.Model.AI.Data.IntervalNew  (obfuscated IHNJJHJKJCL)
// TypeDefIndex 2803
// Namespace: 
// public class IntervalNew
// Fields:
//   public InfoAnimation BNGDONJEHMH; // 0x10
//   public float[] PNAGFADJEOK; // 0x18
//   public int[] MKOJJOBAHBI; // 0x20

// ===== public int ENBJCAFOOGB(float OHIILDIGEIF)  [RVA 0x3419C48]
// IntervalNew$$ENBJCAFOOGB @ RVA 0x3419C48

int32_t IntervalNew__ENBJCAFOOGB(IntervalNew_o *__this,float OHIILDIGEIF,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  System_Single_array *pSVar3;
  System_Int32_array *pSVar4;
  
  bVar1 = IntervalNew__BMFLGFHABMJ(__this,OHIILDIGEIF,method);
  if (bVar1) {
    pSVar3 = (__this->fields).PNAGFADJEOK;
    if (pSVar3 == (System_Single_array *)0x0) {
LAB_03519ccc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (1 < (int)pSVar3->max_length) {
      lVar2 = 0;
      do {
        if (OHIILDIGEIF < pSVar3->m_Items[lVar2 + 1]) {
          pSVar4 = (__this->fields).MKOJJOBAHBI;
          if (pSVar4 != (System_Int32_array *)0x0) {
            if ((uint)lVar2 < (uint)pSVar4->max_length) {
              return pSVar4->m_Items[(int)(uint)lVar2];
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          goto LAB_03519ccc;
        }
        lVar2 = lVar2 + 1;
      } while ((pSVar3->max_length & 0xffffffffU) - 1 != lVar2);
    }
  }
  return -1;
}


// ===== public void .ctor()  [RVA 0x3419D20]
// IntervalNew$$.ctor @ RVA 0x3419D20

void IntervalNew___ctor(IntervalNew_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool BMFLGFHABMJ(float OHIILDIGEIF)  [RVA 0x3419CD4]
// IntervalNew$$BMFLGFHABMJ @ RVA 0x3419CD4

bool IntervalNew__BMFLGFHABMJ(IntervalNew_o *__this,float OHIILDIGEIF,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_Single_array *pSVar3;
  
  pSVar3 = (__this->fields).PNAGFADJEOK;
  if (pSVar3 != (System_Single_array *)0x0) {
    uVar1 = (int)pSVar3->max_length - 1;
    if (((int)uVar1 < 1) || (OHIILDIGEIF < pSVar3->m_Items[0])) {
      bVar2 = false;
    }
    else {
      bVar2 = OHIILDIGEIF < pSVar3->m_Items[uVar1];
    }
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

