// TypeDefIndex 150
// Namespace: 
// public class IKGDKGBHEFN
// Fields:
//   public LinkedList<TableViewCell> LNKABGKKHGB; // 0x10

// ===== public void GIENGNEGHPJ()  [RVA 0x3020434]
// IKGDKGBHEFN$$GIENGNEGHPJ @ RVA 0x3020434

void IKGDKGBHEFN__GIENGNEGHPJ(IKGDKGBHEFN_o *__this,MethodInfo *method)

{
  System_Collections_Generic_LinkedList_TableViewCell__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c3e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_LinkedList<TableViewCell>__ctor__);
    FUN_01bab630(&System_Collections_Generic_LinkedList<TableViewCell>_TypeInfo);
    DAT_04565c3e = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_LinkedList_TableViewCell__o *)
              thunk_FUN_01bda818(System_Collections_Generic_LinkedList<TableViewCell>_TypeInfo,
                                 method);
  System_Collections_Generic_LinkedList<object>___ctor
            ((System_Collections_Generic_LinkedList_T__o *)__this_00,
             Method_System_Collections_Generic_LinkedList<TableViewCell>__ctor__);
  (__this->fields).LNKABGKKHGB = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  return;
}


// ===== public TableViewCell AJPALGCGEHB()  [RVA 0x30204B0]
// IKGDKGBHEFN$$AJPALGCGEHB @ RVA 0x30204B0

Nekki_SF2_GUI_TableViewCell_o * IKGDKGBHEFN__AJPALGCGEHB(IKGDKGBHEFN_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_LinkedList_TableViewCell__o *pSVar1;
  System_Collections_Generic_LinkedListNode_T__o *pSVar2;
  Nekki_SF2_GUI_TableViewCell_o *__this_01;
  
  if ((DAT_04565c3f & 1) == 0) {
                    /* try { // try from 031204d0 to 032204df has its CatchHandler @ 03120bbc */
    FUN_01bab630(&Method_System_Collections_Generic_LinkedListNode<TableViewCell>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_LinkedList<TableViewCell>_RemoveFirst__);
    FUN_01bab630(&Method_System_Collections_Generic_LinkedList<TableViewCell>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_LinkedList<TableViewCell>_get_First__);
    DAT_04565c3f = 1;
  }
  pSVar1 = (__this->fields).LNKABGKKHGB;
                    /* try { // try from 03120504 to 03220507 has its CatchHandler @ 03120bb8 */
  if (pSVar1 != (System_Collections_Generic_LinkedList_TableViewCell__o *)0x0) {
                    /* try { // try from 03120508 to 0322050b has its CatchHandler @ 03120b88 */
    if ((pSVar1->fields).count == 0) {
      return (Nekki_SF2_GUI_TableViewCell_o *)0x0;
    }
    pSVar2 = (pSVar1->fields).head;
                    /* try { // try from 0312051c to 0322051f has its CatchHandler @ 03120bb8 */
                    /* try { // try from 03120520 to 03220527 has its CatchHandler @ 03120b80 */
    if (((pSVar2 != (System_Collections_Generic_LinkedListNode_T__o *)0x0) &&
        (__this_01 = (Nekki_SF2_GUI_TableViewCell_o *)(pSVar2->fields).item,
        __this_01 != (Nekki_SF2_GUI_TableViewCell_o *)0x0)) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 03120530 to 0322054b has its CatchHandler @ 03120bb4 */
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
      pSVar1 = (__this->fields).LNKABGKKHGB;
      if (pSVar1 != (System_Collections_Generic_LinkedList_TableViewCell__o *)0x0) {
        System_Collections_Generic_LinkedList<object>__RemoveFirst
                  ((System_Collections_Generic_LinkedList_T__o *)pSVar1,
                   Method_System_Collections_Generic_LinkedList<TableViewCell>_RemoveFirst__);
        return __this_01;
                    /* try { // try from 03120554 to 0322056f has its CatchHandler @ 03120bb0 */
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IKHEOEJKGDI(TableViewCell HBHBCBJANIC)  [RVA 0x3020570]
// IKGDKGBHEFN$$IKHEOEJKGDI @ RVA 0x3020570

void IKGDKGBHEFN__IKHEOEJKGDI
               (IKGDKGBHEFN_o *__this,Nekki_SF2_GUI_TableViewCell_o *HBHBCBJANIC,MethodInfo *method)

{
  System_Collections_Generic_LinkedList_TableViewCell__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
                    /* try { // try from 03120578 to 0322057f has its CatchHandler @ 03120b20 */
                    /* try { // try from 03120588 to 03220593 has its CatchHandler @ 03120b10 */
  if ((DAT_04565c40 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_LinkedList<TableViewCell>_AddLast__);
    DAT_04565c40 = 1;
  }
  __this_00 = (__this->fields).LNKABGKKHGB;
                    /* try { // try from 031205a8 to 032205bf has its CatchHandler @ 03120bac */
                    /* try { // try from 031205c8 to 032205df has its CatchHandler @ 03120ba8 */
  if (((__this_00 != (System_Collections_Generic_LinkedList_TableViewCell__o *)0x0) &&
      (System_Collections_Generic_LinkedList<object>__AddLast
                 ((System_Collections_Generic_LinkedList_T__o *)__this_00,
                  (Il2CppObject *)HBHBCBJANIC,
                  Method_System_Collections_Generic_LinkedList<TableViewCell>_AddLast__),
      HBHBCBJANIC != (Nekki_SF2_GUI_TableViewCell_o *)0x0)) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)HBHBCBJANIC,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30205E8]
// IKGDKGBHEFN$$.ctor @ RVA 0x30205E8

void IKGDKGBHEFN___ctor(IKGDKGBHEFN_o *__this,MethodInfo *method)

{
                    /* try { // try from 031205e8 to 032205ff has its CatchHandler @ 03120ba4 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

