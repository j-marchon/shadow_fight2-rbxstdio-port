// InControl.Utility$$.cctor @ RVA 0x3132200

void InControl_Utility___cctor(MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Vector2_array *pUVar2;
  
  if ((DAT_045666d4 & 1) == 0) {
    FUN_01bab630(&InControl_Utility_TypeInfo);
    FUN_01bab630(&UnityEngine_Vector2___TypeInfo);
    DAT_045666d4 = 1;
  }
  pUVar2 = (UnityEngine_Vector2_array *)FUN_01bab718(UnityEngine_Vector2___TypeInfo,0x19);
  if (pUVar2 != (UnityEngine_Vector2_array *)0x0) {
    uVar1 = (uint)pUVar2->max_length;
    if (uVar1 != 0) {
      pUVar2->m_Items[0].fields = (UnityEngine_Vector2_Fields)0x3f80000000000000;
                    /* try { // try from 03232268 to 0333226f has its CatchHandler @ 03232398 */
                    /* try { // try from 03232284 to 03332287 has its CatchHandler @ 03232384 */
                    /* try { // try from 03232288 to 03332297 has its CatchHandler @ 03232394 */
                    /* try { // try from 032322a0 to 033322bb has its CatchHandler @ 03232390 */
                    /* try { // try from 032322bc to 03332377 has its CatchHandler @ 0323213c */
                    /* try { // try from 03232378 to 0333237b has its CatchHandler @ 0323238c */
                    /* try { // try from 0323237c to 0333237f has its CatchHandler @ 03232388 */
                    /* try { // try from 03232380 to 033323af has its CatchHandler @ 0323213c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03232284 with catch @ 03232384
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0323237c with catch @ 03232388
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03232378 with catch @ 0323238c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032322a0 with catch @ 03232390
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03232288 with catch @ 03232394
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03232268 with catch @ 03232398
                        */
                    /* try { // try from 032323b0 to 033323b3 has its CatchHandler @ 032323dc */
                    /* try { // try from 032323b4 to 033323eb has its CatchHandler @ 0323213c */
                    /* catch() { ... } // from try @ 032323b0 with catch @ 032323dc */
                    /* try { // try from 032323ec to 033323f3 has its CatchHandler @ 03232408 */
                    /* try { // try from 032323f4 to 033323ff has its CatchHandler @ 0323213c */
                    /* try { // try from 03232400 to 03332407 has its CatchHandler @ 03232408 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032323ec with catch @ 03232408
                       catch(type#2 @ 00000000) { ... } // from try @ 03232400 with catch @ 03232408
                        */
      if ((((((uVar1 != 1) &&
             (pUVar2->m_Items[1].fields.x = 0.2588, pUVar2->m_Items[1].fields.y = 0.9659, 2 < uVar1)
             ) && (pUVar2->m_Items[2].fields.x = 0.5, pUVar2->m_Items[2].fields.y = 0.866,
                  uVar1 != 3)) &&
           (((pUVar2->m_Items[3].fields.x = 0.7071, pUVar2->m_Items[3].fields.y = 0.7071, 4 < uVar1
             && (pUVar2->m_Items[4].fields.x = 0.866, pUVar2->m_Items[4].fields.y = 0.5, uVar1 != 5)
             ) && ((pUVar2->m_Items[5].fields.x = 0.9659, pUVar2->m_Items[5].fields.y = 0.2588,
                   6 < uVar1 &&
                   ((pUVar2->m_Items[6].fields.x = 1.0, pUVar2->m_Items[6].fields.y = 0.0,
                    uVar1 != 7 &&
                    (pUVar2->m_Items[7].fields.x = 0.9659, pUVar2->m_Items[7].fields.y = -0.2588,
                    8 < uVar1)))))))) &&
          ((pUVar2->m_Items[8].fields.x = 0.866, pUVar2->m_Items[8].fields.y = -0.5, uVar1 != 9 &&
           ((((((pUVar2->m_Items[9].fields.x = 0.7071, pUVar2->m_Items[9].fields.y = -0.7071,
                10 < uVar1 &&
                (pUVar2->m_Items[10].fields.x = 0.5, pUVar2->m_Items[10].fields.y = -0.866,
                uVar1 != 0xb)) &&
               (pUVar2->m_Items[0xb].fields.x = 0.2588, pUVar2->m_Items[0xb].fields.y = -0.9659,
               0xc < uVar1)) &&
              ((pUVar2->m_Items[0xc].fields.x = 0.0, pUVar2->m_Items[0xc].fields.y = -1.0,
               uVar1 != 0xd &&
               (pUVar2->m_Items[0xd].fields.x = -0.2588, pUVar2->m_Items[0xd].fields.y = -0.9659,
               0xe < uVar1)))) &&
             ((pUVar2->m_Items[0xe].fields.x = -0.5, pUVar2->m_Items[0xe].fields.y = -0.866,
              uVar1 != 0xf &&
              ((pUVar2->m_Items[0xf].fields.x = -0.7071, pUVar2->m_Items[0xf].fields.y = -0.7071,
               0x10 < uVar1 &&
               (pUVar2->m_Items[0x10].fields.x = -0.866, pUVar2->m_Items[0x10].fields.y = -0.5,
               uVar1 != 0x11)))))) &&
            (pUVar2->m_Items[0x11].fields.x = -0.9659, pUVar2->m_Items[0x11].fields.y = -0.2588,
            0x12 < uVar1)))))) &&
         ((((pUVar2->m_Items[0x12].fields.x = -1.0, pUVar2->m_Items[0x12].fields.y = -0.0,
            uVar1 != 0x13 &&
            (pUVar2->m_Items[0x13].fields.x = -0.9659, pUVar2->m_Items[0x13].fields.y = 0.2588,
            0x14 < uVar1)) &&
           (pUVar2->m_Items[0x14].fields.x = -0.866, pUVar2->m_Items[0x14].fields.y = 0.5,
           uVar1 != 0x15)) &&
          ((pUVar2->m_Items[0x15].fields.x = -0.7071, pUVar2->m_Items[0x15].fields.y = 0.7071,
           0x16 < uVar1 &&
           (pUVar2->m_Items[0x16].fields.x = -0.5, pUVar2->m_Items[0x16].fields.y = 0.866,
           uVar1 != 0x17)))))) {
        pUVar2->m_Items[0x17].fields.x = -0.2588;
        pUVar2->m_Items[0x17].fields.y = 0.9659;
        if (0x18 < uVar1) {
          pUVar2->m_Items[0x18].fields.x = 0.0;
          pUVar2->m_Items[0x18].fields.y = 1.0;
          InControl_Utility_TypeInfo->static_fields->circleVertexList = pUVar2;
          thunk_FUN_01c20e04(InControl_Utility_TypeInfo->static_fields);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

