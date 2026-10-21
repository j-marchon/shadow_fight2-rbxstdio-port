// Nekki.SF2.GUI.Fight.ViewerFight$$CreatePointsTable @ RVA 0x35BF160

void Nekki_SF2_GUI_Fight_ViewerFight__CreatePointsTable
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,float OAGELANKMBH,float IOJNHKIPJOK,
               int32_t NJBICBHLOMO,int32_t DJFJIEDMAMJ,int32_t FLHLGFGJDMH,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_Fight_PointsTable_o **ppNVar2;
  Nekki_SF2_GUI_Fight_PointsTable_o *pNVar3;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar4;
  
  if ((DAT_04568f06 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<PointsTable>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    OAGELANKMBH = (float)FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f06 = 1;
  }
  ppNVar2 = &(__this->fields).HLOILANGFLF;
  pNVar3 = *ppNVar2;
                    /* try { // try from 036bf1cc to 037bf1e7 has its CatchHandler @ 036bf384 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OAGELANKMBH);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    x = (UnityEngine_Object_o *)(__this->fields)._pointsTablePrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar4 = (__this->fields)._pointsTablePrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar4 = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pUVar4,Method_UnityEngine_Object_Instantiate<GameObject>__
                         );
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        pNVar3 = (Nekki_SF2_GUI_Fight_PointsTable_o *)
                 UnityEngine_GameObject__GetComponent<object>
                           (pUVar4,Method_UnityEngine_GameObject_GetComponent<PointsTable>__);
        *ppNVar2 = pNVar3;
                    /* try { // try from 036bf258 to 037bf25f has its CatchHandler @ 036bf370 */
        thunk_FUN_01c20e04(ppNVar2,pNVar3);
        if (*ppNVar2 != (Nekki_SF2_GUI_Fight_PointsTable_o *)0x0) {
          __this_00 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)*ppNVar2,(MethodInfo *)0x0);
          parent = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
            if (*ppNVar2 != (Nekki_SF2_GUI_Fight_PointsTable_o *)0x0) {
              Nekki_SF2_GUI_Fight_PointsTable__Init
                        (*ppNVar2,DJFJIEDMAMJ,FLHLGFGJDMH,NJBICBHLOMO,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

