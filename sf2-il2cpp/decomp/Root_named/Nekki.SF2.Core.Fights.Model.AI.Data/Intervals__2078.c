// Original name: Nekki.SF2.Core.Fights.Model.AI.Data.Intervals  (obfuscated LLGIDMGDNPG)
// TypeDefIndex 2078
// Namespace: 
// public class Intervals
// Fields:
//   public IntervalNew[] CIOCHCOOAFK; // 0x10

// ===== public int CFECAAOIFNE(float OHIILDIGEIF, List<InfoAnimation> KENFFDHLNDA)  [RVA 0x32BC094]
// Intervals$$CFECAAOIFNE @ RVA 0x32BC094

int32_t Intervals__CFECAAOIFNE
                  (Intervals_o *__this,float OHIILDIGEIF,
                  System_Collections_Generic_List_ECENNHNBAME__o *KENFFDHLNDA,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  InfoAnimation_o *item;
  IntervalNew_array *pIVar4;
  InfoAnimation_array *pEVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  
  if ((DAT_0456749b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_Add__);
    DAT_0456749b = 1;
  }
  pIVar4 = (__this->fields).CIOCHCOOAFK;
  if (pIVar4 != (IntervalNew_array *)0x0) {
    iVar6 = 0;
    lVar7 = 4;
    do {
      uVar1 = (uint)pIVar4->max_length;
      uVar8 = (int)lVar7 - 4;
      if ((int)uVar1 <= (int)uVar8) {
        return iVar6;
      }
      if (uVar1 <= uVar8) {
LAB_033bc1c8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      if (pIVar4->m_Items[lVar7 + -4] == (IntervalNew_o *)0x0) break;
      iVar3 = IntervalNew__ENBJCAFOOGB(pIVar4->m_Items[lVar7 + -4],OHIILDIGEIF,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<InfoAnimation>_Add__;
      if (0 < iVar3) {
        pIVar4 = (__this->fields).CIOCHCOOAFK;
        if (pIVar4 == (IntervalNew_array *)0x0) break;
        if ((uint)pIVar4->max_length <= uVar8) goto LAB_033bc1c8;
        if ((pIVar4->m_Items[lVar7 + -4] == (IntervalNew_o *)0x0) ||
           (KENFFDHLNDA == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0)) break;
        item = (pIVar4->m_Items[lVar7 + -4]->fields).BNGDONJEHMH;
        pEVar5 = (KENFFDHLNDA->fields)._items;
        (KENFFDHLNDA->fields)._version = (KENFFDHLNDA->fields)._version + 1;
        if (pEVar5 == (InfoAnimation_array *)0x0) break;
        uVar1 = (KENFFDHLNDA->fields)._size;
        if (uVar1 < (uint)pEVar5->max_length) {
          (KENFFDHLNDA->fields)._size = uVar1 + 1;
          pEVar5->m_Items[(int)uVar1] = item;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        iVar6 = iVar6 + 1;
      }
      pIVar4 = (__this->fields).CIOCHCOOAFK;
      lVar7 = lVar7 + 1;
    } while (pIVar4 != (IntervalNew_array *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32BC1CC]
// Intervals$$.ctor @ RVA 0x32BC1CC

void Intervals___ctor(Intervals_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

